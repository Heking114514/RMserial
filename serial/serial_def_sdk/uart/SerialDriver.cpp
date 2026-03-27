#include "SerialDriver.hpp"
#include <fcntl.h>      // File control definitions
#include <termios.h>    // POSIX terminal control definitions
#include <unistd.h>     // UNIX standard function definitions
#include <iostream>
#include <cstring>      // for memset

SerialDriver::SerialDriver() : fd_(-1), is_running_(false) {
}

SerialDriver::~SerialDriver() {
    close();
}

bool SerialDriver::open(const std::string& device, int baudrate) {
    if (isOpen()) {
        close();
    }

    device_name_ = device;

    // 打开串口: Read/Write, No controlling terminal, No delay
    fd_ = ::open(device.c_str(), O_RDWR | O_NOCTTY | O_NDELAY);
    if (fd_ == -1) {
        std::cerr << "[SerialDriver] Error: Unable to open " << device << std::endl;
        return false;
    }

    // 配置串口属性
    if (!configureTermios(baudrate)) {
        ::close(fd_);
        fd_ = -1;
        return false;
    }

    // 清空缓冲区
    tcflush(fd_, TCIOFLUSH);

    // 启动读取线程
    is_running_ = true;
    read_thread_ = std::thread(&SerialDriver::readLoop, this);

    std::cout << "[SerialDriver] Port " << device << " opened successfully." << std::endl;
    return true;
}

void SerialDriver::close() {
    is_running_ = false;
    
    // 等待线程结束
    if (read_thread_.joinable()) {
        read_thread_.join();
    }

    if (fd_ != -1) {
        ::close(fd_);
        fd_ = -1;
        std::cout << "[SerialDriver] Port closed." << std::endl;
    }
}

bool SerialDriver::isOpen() const {
    return fd_ != -1;
}

void SerialDriver::setReceiverCallback(ReceiveCallback callback) {
    callback_ = callback;
}

int SerialDriver::write(const uint8_t* data, size_t len) {
    if (!isOpen()) return -1;

    // 加锁，保证多线程发送时数据不会穿插
    std::lock_guard<std::mutex> lock(write_mutex_);

    int total_written = 0;
    int remaining = len;

    while (remaining > 0) {
        int n = ::write(fd_, data + total_written, remaining);
        if (n <= 0) {
            if (errno != EAGAIN) {
                // 写入时发生物理断开
                std::cerr << "\n[SerialDriver] WARNING: Write failed, device lost!" << std::endl;
                ::close(fd_); // 核心修复：立刻释放
                fd_ = -1;
            }
            return -1;
        }
        total_written += n;
        remaining -= n;
    }
    return total_written;
}

void SerialDriver::readLoop() {
    uint8_t buffer[1024]; // 读取缓冲区

    while (is_running_) {
        if (fd_ == -1) break;

        // 阻塞读取 (因为我们在 termios 设置了 VMIN/VTIME，或者 O_NDELAY 影响)
        // 这里为了简单，如果设置了 NDELAY，read 会立即返回。
        // 为了避免 CPU 100%，如果读不到数据，我们可以 sleep 一小会儿，或者使用 select/poll。
        // 这里使用简单的 read，配合配置好的 termios (VTIME)。
        
        int n = ::read(fd_, buffer, sizeof(buffer));

        if (n > 0) {
            // 读到数据了，调用回调通知上层
            if (callback_) {
            //     printf("\n---[RAW SERIAL READ | %d bytes]---\n", n);
            // for(int i = 0; i < n; ++i) {
            //     printf("%02X ", buffer[i]);
            //     if ((i + 1) % 16 == 0) { // 每16个字节换一行，方便查看
            //         printf("\n");
            //     }
            // }
            // printf("\n-----------------------------------\n");
                callback_(buffer, n);
            }
        } else if (n == 0 || (n < 0 && errno != EAGAIN)) {
            // n == 0 表示对端关闭(EOF)，n < 0 且非 EAGAIN 表示发生了物理断开(如 EIO)
            std::cerr << "\n[SerialDriver] WARNING: Device disconnected! Releasing port..." << std::endl;
            ::close(fd_);  // 核心修复：立刻释放文件描述符
            fd_ = -1;      // 将描述符置为 -1
            break;    
            
        } else {
            // n == 0, EOF or timeout
            std::this_thread::sleep_for(std::chrono::milliseconds(1));
        }
    }
}

bool SerialDriver::configureTermios(int baudrate) {
    struct termios options;
    if (tcgetattr(fd_, &options) != 0) {
        perror("[SerialDriver] tcgetattr failed");
        return false;
    }

    // 设置波特率
    speed_t speed;
    switch (baudrate) {
        case 9600:   speed = B9600; break;
        case 115200: speed = B115200; break;
        case 460800: speed = B460800; break;
        default:     speed = B115200; break;
    }
    cfsetispeed(&options, speed);
    cfsetospeed(&options, speed);

    // 设置为原始模式 (Raw Mode) - 8N1
    // 类似于 cfmakeraw(&options) 但手动设置更清晰
    options.c_cflag |= (CLOCAL | CREAD); // 忽略调制解调器控制线，启用接收器
    options.c_cflag &= ~CSIZE;
    options.c_cflag |= CS8;              // 8 数据位
    options.c_cflag &= ~PARENB;          // 无校验
    options.c_cflag &= ~CSTOPB;          // 1 停止位
    options.c_cflag &= ~CRTSCTS;         // 无硬件流控

    // 禁用规范模式 (Canonical Mode)，禁用回显等
    options.c_lflag &= ~(ICANON | ECHO | ECHOE | ISIG);

    // 禁用输出处理
    options.c_oflag &= ~OPOST;

    // 禁用输入处理 (如回车转换行等)
    options.c_iflag &= ~(IXON | IXOFF | IXANY | ICRNL | INLCR | IGNCR);

    // 设置读取超时
    // VMIN = 0, VTIME = 1: 读取是非阻塞的，但会等待最多 0.1 秒
    options.c_cc[VMIN] = 0;
    options.c_cc[VTIME] = 1; 

    // 应用设置
    if (tcsetattr(fd_, TCSANOW, &options) != 0) {
        perror("[SerialDriver] tcsetattr failed");
        return false;
    }

    // 因为前面 open 用了 O_NDELAY，这里重新恢复为阻塞模式（受 VTIME 控制）
    fcntl(fd_, F_SETFL, 0); 

    return true;
}