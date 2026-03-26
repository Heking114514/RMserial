#!/usr/bin/env python3
# -*- coding: utf-8 -*-

import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
from example_interfaces.msg import Float32

# [需要你修改] 请替换为你的实际自定义消息
from def_msg.msg import GobalInformation 
from std_srvs.srv import SetBool 

import threading
import time

class GameLogicNode(Node):
    def __init__(self):
        super().__init__('game_logic_node')
        
        # ================= 1. 发布者 & 订阅者 & 服务 =================
        self.cmd_vel_pub = self.create_publisher(Twist, '/cmd_vel', 10)
        self.spin_pub = self.create_publisher(Float32, '/cmd_spin', 10)
        
        self.global_info_sub = self.create_subscription(
            GobalInformation, '/gobal_informatio', self.global_info_callback, 10)
            
        self.control_client = self.create_client(SetBool, '/request_chassis_control')
        
        # ================= 2. 状态与控制变量 =================
        self.fault_flag = 0      
        self.life_extra = 1000   
        self.target_vx = 0.0
        self.target_vy = 0.0
        self.target_spin = 0.0
        
        self.move_stack = []     # 运动记录栈

        # ================= 3. 高频定时器 (50Hz) =================
        self.timer = self.create_timer(0.02, self.timer_callback)
        
        # ================= 4. 开启逻辑线程 =================
        self.logic_thread = threading.Thread(target=self.main_logic_loop)
        self.logic_thread.start()

    def global_info_callback(self, msg):
        self.fault_flag = msg.fault_flag
        self.life_extra = msg.life_extra

    def timer_callback(self):
        twist_msg = Twist()
        twist_msg.linear.x = self.target_vx
        twist_msg.linear.y = self.target_vy
        twist_msg.angular.z = 0.0
        self.cmd_vel_pub.publish(twist_msg)
        
        spin_msg = Float32()
        spin_msg.data = self.target_spin
        self.spin_pub.publish(spin_msg)

    def request_control_service(self, enable: bool):
        action_str = "获取" if enable else "归还"
        self.get_logger().info(f"===> 试图 {action_str} 底盘控制权...")
        if not self.control_client.wait_for_service(timeout_sec=2.0):
            self.get_logger().error("服务不可用！跳过服务请求。")
            return
        
        req = SetBool.Request()
        req.data = enable
        try:
            self.control_client.call(req)
            self.get_logger().info(f"===> 成功 {action_str} 控制权。")
        except Exception as e:
            self.get_logger().error(f"服务调用失败: {e}")

    def main_logic_loop(self):
        self.get_logger().info("比赛逻辑节点已启动，等待 fault_flag == 1 ...")
        
        # 定义占点模式的标准动作序列 (vx, vy, duration)
        capture_sequence = [
            (0.0,  1.0, 5.5),
            (1.0,  0.0, 5.0),
            (0.0, -1.0, 3.8)
        ]

        while rclpy.ok():
            if self.fault_flag != 1:
                self.stop_all_movements()
                time.sleep(0.5)
                continue

            # ================= 1. 占点模式 =================
            self.get_logger().info("\n===============================")
            self.get_logger().info(">>> 触发: 占点模式 (Capture Mode)")
            self.request_control_service(True)
            self.move_stack.clear() # 开始新一轮占点前，清空旧栈
            
            interrupted_by_hp = False
            
            for vx, vy, dur in capture_sequence:
                # 执行并返回实际运动时间
                executed_time = self.execute_and_record(vx, vy, dur)
                
                # 将真实的运动压入栈中
                if executed_time > 0.05: 
                    self.move_stack.append((vx, vy, executed_time))
                    self.get_logger().info(f"入栈记录: vx={vx}, vy={vy}, 耗时={executed_time:.1f}s")
                
                if self.fault_flag != 1:
                    break
                    
                if self.life_extra < 200:
                    interrupted_by_hp = True
                    self.get_logger().warn(f"!!! 占点途中血量危急({self.life_extra})，立即打断 !!!")
                    break

            if self.fault_flag != 1: continue

            # ================= 2. 占点结束后的分流逻辑 =================
            if not interrupted_by_hp:
                self.get_logger().info(">>> 占点顺利完成，归还控制权并开启小陀螺。")
                self.request_control_service(False)
                
                self.target_spin = 500.0
                
                while rclpy.ok() and self.fault_flag == 1 and self.life_extra >= 200:
                    time.sleep(0.1)
                    
                self.target_spin = 0.0
                
                if self.fault_flag != 1: continue
                
                self.get_logger().warn(f"!!! 陀螺期间血量降至 {self.life_extra}，准备撤退 !!!")
                self.request_control_service(True)

            # ================= 3. 撤退模式 (原路返回) =================
            self.get_logger().info(">>> 触发: 撤退模式 (开始清空堆栈原路返回)")
            self.backtrack_retreat()

            if self.fault_flag != 1: continue

            # ================= 4. 撤退后的恢复等待 (新逻辑) =================
            self.get_logger().info(">>> 撤退完成。原地待命，等待血量恢复至 >500 ...")
            self.move_stack.clear() # 撤退完成，确保栈清空
            
            # 实时检测血量，不空等
            while rclpy.ok() and self.fault_flag == 1:
                if self.life_extra > 500:
                    self.get_logger().info(f">>> 血量已恢复 ({self.life_extra})！等待 3 秒后重新出击...")
                    
                    # 延时 3 秒，切片处理防止中途比赛停止
                    for _ in range(30):
                        if self.fault_flag != 1: break
                        time.sleep(0.1)
                        
                    # 3 秒结束后，跳出当前 while 循环，重新进入大循环的占点模式
                    break 
                
                # 如果血量不足 500，就以 10Hz 频率持续检测
                time.sleep(0.1)


    # ================= 核心工具函数 =================
    
    def execute_and_record(self, vx, vy, duration):
        self.target_vx = float(vx)
        self.target_vy = float(vy)
        
        elapsed_time = 0.0
        dt = 0.1
        steps = int(duration / dt)
        
        for _ in range(steps):
            # 执行中途随时检测打断条件
            if self.fault_flag != 1 or self.life_extra < 200:
                self.target_vx = 0.0
                self.target_vy = 0.0
                return elapsed_time
                
            time.sleep(dt)
            elapsed_time += dt

        remainder = duration - (steps * dt)
        if remainder > 0.01 and self.fault_flag == 1 and self.life_extra >= 200:
            time.sleep(remainder)
            elapsed_time += remainder

        self.target_vx = 0.0
        self.target_vy = 0.0
        return elapsed_time

    def backtrack_retreat(self):
        if not self.move_stack:
            self.get_logger().info("堆栈为空，无需后退。")
            return

        while self.move_stack and self.fault_flag == 1:
            vx, vy, dur = self.move_stack.pop()
            
            rev_vx = -vx
            rev_vy = -vy
            
            self.get_logger().info(f"出栈回退: 设vx={rev_vx}, vy={rev_vy}, 持续 {dur:.1f}s")
            
            self.target_vx = float(rev_vx)
            self.target_vy = float(rev_vy)
            
            dt = 0.1
            steps = int(dur / dt)
            for _ in range(steps):
                if self.fault_flag != 1: break
                time.sleep(dt)
                
            remainder = dur - (steps * dt)
            if remainder > 0.01 and self.fault_flag == 1:
                time.sleep(remainder)

        self.stop_all_movements()

    def stop_all_movements(self):
        self.target_vx = 0.0
        self.target_vy = 0.0
        self.target_spin = 0.0

def main(args=None):
    rclpy.init(args=args)
    node = GameLogicNode()
    
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        node.get_logger().info('收到退出指令...')
    finally:
        node.stop_all_movements()
        node.timer_callback()
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()
