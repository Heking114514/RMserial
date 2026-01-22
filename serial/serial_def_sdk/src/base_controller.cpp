#include "base_controller.h"
#include <thread>
void BaseController::spin2serial(const example_interfaces::msg::Float32::UniquePtr msg) {
  // 1. 更新数据
  current_spin_speed = msg->data;
  
  // 2. [新增] 更新最后接收时间
  last_spin_time_ = this->get_clock()->now();
  this->send_merged_control();
}

void BaseController::cmd2serial(const geometry_msgs::msg::Twist::UniquePtr twist_aux) {
  // 1. 更新数据
  fix_control_send.vx = twist_aux->linear.x;
  fix_control_send.vy = twist_aux->linear.y;
  fix_control_send.vz = twist_aux->angular.z;
  
  // 2. [新增] 更新最后接收时间
  last_cmd_time_ = this->get_clock()->now();
  this->send_merged_control();

}


void BaseController::gimble2serial(const def_msg::msg::GimbleControl::UniquePtr msg)
{
    // 1. 更新数据
    fix_control_send.yaw = msg->yaw;
    fix_control_send.pitch = msg->pitch;
    fix_control_send.fire = msg->fire_advise; 
    
    // 2. [新增] 更新最后接收时间
    last_gimbal_time_ = this->get_clock()->now();
    this->send_merged_control();
}
void BaseController::control2serial(const def_msg::msg::CommonControl::UniquePtr msg){
    RCLCPP_INFO(get_logger(),"common control started");
    control_data.velocity_top = msg->velocity_top;
    control_data.shoot = msg->shoot;
    defUartSend(control);
}

void BaseController::send_merged_control() {
  auto current_time = this->get_clock()->now();

  // ================== 1. 检查超时并归零 ==================

  // (1) 检查底盘指令 (cmd_vel)
  double cmd_delay = (current_time - last_cmd_time_).seconds();
  if (cmd_delay > (DATA_TIMEOUT_MS / 1000.0)) {
      // 超时了，说明导航挂了或者没发消息，安全停车
      fix_control_send.vx = 0.0;
      fix_control_send.vy = 0.0;
      fix_control_send.vz = 0.0;
  }

  // (2) 检查云台指令 (gimble)
  double gimbal_delay = (current_time - last_gimbal_time_).seconds();
  if (gimbal_delay > (DATA_TIMEOUT_MS / 1000.0)) {
      // 超时了，说明视觉挂了，云台回正，停止开火
      fix_control_send.yaw = 0.0;
      fix_control_send.pitch = 0.0;
      fix_control_send.fire = 0;
  }

  // (3) 检查小陀螺指令 (spin)
  double spin_delay = (current_time - last_spin_time_).seconds();
  if (spin_delay > (DATA_TIMEOUT_MS / 1000.0)) {
      // 超时了，关闭小陀螺
      current_spin_speed = 0.0;
  }

  // ================== 2. 处理互斥逻辑 (保持不变) ==================
  
  if (abs(current_spin_speed) > 0.001) {
      // [小陀螺模式] 覆盖底盘速度
      fix_control_send.vx = 0.0;
      fix_control_send.vy = 0.0;
      fix_control_send.spin = current_spin_speed;
  } else {
      // [正常模式] 确保 spin 为 0
      fix_control_send.spin = 0.0;
      // vx, vy, vz 使用上面的值 (如果超时已经被置0了，如果没超时就是最新值)
  }

  // ================== 3. 发送数据 ==================
  // 无论是否有数据，我们都以 50Hz 发送。
  // 如果所有话题都超时，这里发出去的就是全 0 包，机器人会安全停止。
  // %.2f 表示保留两位小数
  RCLCPP_INFO(this->get_logger(), 
      "发送串口数据 -> [底盘] vx:%.2f vy:%.2f vz:%.2f spin:%.2f | [云台] yaw:%.2f pitch:%.2f fire:%d",
      fix_control_send.vx,
      fix_control_send.vy,
      fix_control_send.vz,
      fix_control_send.spin,
      fix_control_send.yaw,
      fix_control_send.pitch,
      fix_control_send.fire
  );
  defUartSend(fix_control);
  
}

void BaseController::heartbeat2serial(){
  heartbeat_send.timestamp = this->get_clock()->now().seconds();
  //待补充
  //defUartSend(heartbeat);
}
//rclcpp::Clock().now()，get_clock()->now()和this->now()获取到的时间与std::chrono::system_clock::now()是一致的。
//这里需要注意的一点是，rclcpp::Clock().now()，get_clock()->now()和this->now()获取到的时间戳均包含seconds()和nanoseconds()方法。seconds()和nanoseconds()方法都返回了当前的时间，是等价的，只是单位不一样。一个是以秒为单位，一个是纳秒为单位。



void BaseController::speed2odom(){
    ///////////////////////////////////////////////// odom ////////////////////////////////////////////////////////
    speed.last_time = speed.current_time;   //上一次时间
    speed.current_time = get_clock()->now();  //新时间

    //update speed and time stamp
    speed.vx = chassis_receive.vx;
    speed.vy = chassis_receive.vy;
    speed.vz = chassis_receive.vz;

    //compute odometry
    float dt =  speed.current_time.seconds()-speed.last_time.seconds();//time distance
    float delta_x = (speed.vx * cos(odom_raw.z) - speed.vy * sin(odom_raw.z)) * dt;
    float delta_y = (speed.vx * sin(odom_raw.z) + speed.vy * cos(odom_raw.z)) * dt;
    float delta_th = speed.vz * odom_raw.dt;
    //add then odom added
    odom_raw.x += delta_x;
    odom_raw.y += delta_y;
    odom_raw.z += delta_th;

    //pub odom
    nav_msgs::msg::Odometry odom{};
    odom.header.stamp = speed.current_time;
    odom.header.frame_id = "raw/odom";
    odom.child_frame_id = "base_link";   //turtlename_.c_str();
    tf2::Quaternion q;
    q.setRPY(0, 0, odom_raw.z);
    // since all odometry is 6DOF we'll need a quaternion created from yaw
    geometry_msgs::msg::Quaternion odom_quat; //tf2_ros::createQuaternionMsgFromRollPitchYaw(0,0,odom_raw.z);
    odom_quat.x=q.x();
    odom_quat.y=q.y();
    odom_quat.z=q.z();
    odom_quat.w=q.w();

    //set the position
    odom.pose.pose.position.x = odom_raw.x;
    odom.pose.pose.position.y = odom_raw.y;
    odom.pose.pose.position.z = 0.0;
    odom.pose.pose.orientation = odom_quat;
 
    // set the velocity
    odom.twist.twist.linear.x = speed.vx; //liner speed
    odom.twist.twist.linear.y = speed.vy;
    odom.twist.twist.angular.z = speed.vz;   // angle speed
    odom_pub->publish(odom);
    
    ///////////////////////////////////////////////// tf trans ////////////////////////////////////////////////////////
    //transform over tf
    
    geometry_msgs::msg::TransformStamped odom_trans{};
    odom_trans.header.stamp = speed.current_time;
    odom_trans.header.frame_id = "odom";
    odom_trans.child_frame_id = "base_link";
  
    odom_trans.transform.translation.x = 0.0;
    odom_trans.transform.translation.y = 0.0;
    odom_trans.transform.translation.z = 0.0; //this parma has different meaning with odom_raw.z.
    //odom_trans.transform.rotation = tf2::createQuaternionMsgFromYaw(odom_raw.z);    only used in ros1
    //tf2::Quaternion q;
    q.setRPY(0, 0, odom_raw.z);
    odom_trans.transform.rotation.x = q.x();
    odom_trans.transform.rotation.y = q.y();
    odom_trans.transform.rotation.z = q.z();
    odom_trans.transform.rotation.w = q.w();
    //send transform
    odom_broadcaster->sendTransform(odom_trans);
}

void BaseController::serial2global(){
    static unsigned long long current_time;
    current_time = rclcpp::Time().nanoseconds();
    //RCLCPP_INFO(this->get_logger(),"publish gobal information");
    def_msg::msg::GobalInformation status{};  
    //timestamp

    //heartbeat
    if((current_time - heartbeat_receive.timestamp)*10/CLOCKS_PER_SEC > TIMESTAMP_ASSERT_DELAY){
      RCLCPP_WARN(this->get_logger(),"--下位机心跳数据超时，断连警告--");
    }
    status.battery = heartbeat_receive.battery;
    status.life_extra = heartbeat_receive.life;
    status.color = heartbeat_receive.color;
    status.bullet_extra = heartbeat_receive.bullet;
    status.fault_flag = heartbeat_receive.fault_flag;

    //additional
    status.launch = additional_data.launch; //if_launch
    status.arm = additional_data.arm;

    //game_data
    status.stage_remain_time = game_status_data.stage_remain_time;
    status.game_progress = game_status_data.game_progress;
    gobal_information_pub->publish(status);
}


//receive gimble data and pub
void BaseController::serial2gimble(){
  cntLossConnection();
  auto current_time = get_clock()->now();
  //recvive gimble data and pub data
  def_msg::msg::GimbleControl gimble_recv{};
  gimble_recv.header.stamp = current_time;
  gimble_recv.header.frame_id = "gimbal_link"; 
  gimble_recv.yaw = gimbal_receive.yaw;
  gimble_recv.pitch = gimbal_receive.pitch;
  //gimble_recv.roll = gimbal_receive.roll;
  gimble_pub->publish(gimble_recv);
  // RCLCPP_INFO(get_logger(),"serial gimble pose data received and pub");
  // RCLCPP_WARN(get_logger(),"losing rate:%f",error_lost);
  /*======================================================*/
  /*
  //tf pub yaw
  geometry_msgs::msg::TransformStamped gimble_trans_yaw{}; //transform from chassis/world to gimble
  gimble_trans_yaw.header.stamp = current_time;
  gimble_trans_yaw.header.frame_id = "base_link";
  gimble_trans_yaw.child_frame_id = "gimble_yaw";
 
  gimble_trans_yaw.transform.translation.x = 0;
  gimble_trans_yaw.transform.translation.y = 0;
  gimble_trans_yaw.transform.translation.z = 0; //this parma has different meaning with odom_raw.z.
   
  tf2::Quaternion q;
  q.setRPY(0, 0, gimble_status.yaw);
  gimble_trans_yaw.transform.rotation.x = q.x();
  gimble_trans_yaw.transform.rotation.y = q.y();
  gimble_trans_yaw.transform.rotation.z = q.z();
  gimble_trans_yaw.transform.rotation.w = q.w();
  //send trans yaw
  gimble_broadcaster->sendTransform(gimble_trans_yaw);


  //tf pub pitch
  geometry_msgs::msg::TransformStamped gimble_trans_pitch{}; //transform from chassis/world to gimble
  gimble_trans_pitch.header.stamp = current_time;
  gimble_trans_pitch.header.frame_id = "gimble_yaw";
  gimble_trans_pitch.child_frame_id = "gimble_pitch";
  gimble_trans_pitch.transform.translation.x = 0;
  gimble_trans_pitch.transform.translation.y = 0;
  gimble_trans_pitch.transform.translation.z = 0; //this parma has different meaning with odom_raw.z.
  q.setRPY(0,gimble_status.pitch,0);
  gimble_trans_pitch.transform.rotation.x = q.x();
  gimble_trans_pitch.transform.rotation.y = q.y();
  gimble_trans_pitch.transform.rotation.z = q.z();
  gimble_trans_pitch.transform.rotation.w = q.w();
  //send trans pitch
  gimble_broadcaster->sendTransform(gimble_trans_pitch);
  */
}


void BaseController::serial2imu(){
    sensor_msgs::msg::Imu imu{};
    imu.header.stamp = this->get_clock()->now();
    imu.header.frame_id = "base_footprint";
    imu.angular_velocity.x = imu2_data.vx;
    imu.angular_velocity.y = imu2_data.vy;
    imu.angular_velocity.z = imu2_data.vz;
    imu.linear_acceleration.x = imu2_data.ax;
    imu.linear_acceleration.y = imu2_data.ay;
    imu.linear_acceleration.z = imu2_data.az;
    imu2_pub->publish(imu);
}



void BaseController::serial2joint(){
  static float temp_yaw = 0,last_yaw = 0;
  static int rount = 0;
  temp_yaw = yaw_data.yaw;
  if(temp_yaw < 0){
    temp_yaw  = 360.0-temp_yaw;
  }
  if ((last_yaw - temp_yaw) < -180.0){
     rount --; 
  }
  else if ((last_yaw - temp_yaw) > 180.0){
     rount ++;
  } 
  float yaw_ = rount * 360 + temp_yaw;
  last_yaw = temp_yaw;
  sensor_msgs::msg::JointState joint{};
  joint.header.set__frame_id("");
  joint.header.set__stamp(this->get_clock()->now());
  joint.name = {"pitch_joint","yaw_joint"};
  joint.velocity = {0,0};
  joint.position = {gimble_current.pitch,yaw_};
  joint.effort = {0,0};
  joint_pub->publish(joint);
}

int main(int argc, char* argv[]) {
	setvbuf(stdout, NULL, _IONBF, BUFSIZ);
	rclcpp::init(argc, argv);
  uart->setUartName("/dev/ttyUSB0"); // 假设这是你的串口设备
  uart->startReading(); // <--- 在这里启动接收线程！
	auto base_control_node = std::make_shared<BaseController>("hardware_serial");
  rclcpp::spin(base_control_node);
	rclcpp::shutdown();
	return 0;
}

