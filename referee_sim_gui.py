#!/usr/bin/env python3
# -*- coding: utf-8 -*-

import sys
import threading
import rclpy
from rclpy.node import Node

from PyQt5.QtWidgets import (QApplication, QWidget, QVBoxLayout, QHBoxLayout, 
                             QPushButton, QLabel, QSlider, QSpinBox, QTextEdit)
from PyQt5.QtCore import Qt, pyqtSignal, QObject
from PyQt5.QtGui import QFont

from def_msg.msg import GobalInformation
from std_srvs.srv import SetBool 

class Signaler(QObject):
    log_signal = pyqtSignal(str)

class RefereeSimNode(Node):
    def __init__(self, signaler):
        super().__init__('referee_simulator_node')
        self.signaler = signaler
        
        self.pub = self.create_publisher(GobalInformation, '/gobal_information', 10)
        self.srv = self.create_service(SetBool, '/request_chassis_control', self.control_service_callback)
        
        # ✅ 全部严格使用 float
        self.fault_flag = 0.0
        self.life_extra = 1000.0
        self.battery = 100.0
        self.bullet_extra = 500.0
        
        self.timer = self.create_timer(0.1, self.timer_callback)
        self.log_to_gui("裁判系统节点已启动，正在后台发布数据...")

    def timer_callback(self):
        msg = GobalInformation()
        # ✅ 完全匹配消息类型
        msg.fault_flag = float(self.fault_flag)
        msg.life_extra = float(self.life_extra)
        msg.battery = float(self.battery)
        msg.bullet_extra = float(self.bullet_extra)
        
        self.pub.publish(msg)

    def control_service_callback(self, request, response):
        action = "获取" if request.data else "归还"
        self.log_to_gui(f"[服务请求] 逻辑节点请求 {action} 底盘控制权 -> 同意")
        response.success = True
        response.message = "OK"
        return response

    def log_to_gui(self, text):
        self.get_logger().info(text)
        self.signaler.log_signal.emit(text)

class RefereeGUI(QWidget):
    def __init__(self, ros_node):
        super().__init__()
        self.ros_node = ros_node
        self.init_ui()

    def init_ui(self):
        self.setWindowTitle('比赛裁判系统模拟器')
        self.resize(500, 450)
        
        main_layout = QVBoxLayout()

        status_layout = QHBoxLayout()
        status_label = QLabel("比赛状态 (fault_flag):")
        status_label.setFont(QFont("Arial", 12, QFont.Bold))
        
        self.btn_start_stop = QPushButton("开始比赛 (Flag = 1)")
        self.btn_start_stop.setFont(QFont("Arial", 12, QFont.Bold))
        self.btn_start_stop.setStyleSheet("background-color: #4CAF50; color: white; padding: 10px;")
        self.btn_start_stop.clicked.connect(self.toggle_game_status)
        
        status_layout.addWidget(status_label)
        status_layout.addWidget(self.btn_start_stop)
        main_layout.addLayout(status_layout)

        hp_layout = QVBoxLayout()
        hp_header_layout = QHBoxLayout()
        
        hp_label = QLabel("机器人血量 (life_extra):")
        hp_label.setFont(QFont("Arial", 10, QFont.Bold))
        
        self.hp_spinbox = QSpinBox()
        self.hp_spinbox.setRange(0, 1000)
        self.hp_spinbox.setValue(1000)
        self.hp_spinbox.valueChanged.connect(self.update_hp_from_spinbox)
        
        hp_header_layout.addWidget(hp_label)
        hp_header_layout.addWidget(self.hp_spinbox)
        
        self.hp_slider = QSlider(Qt.Horizontal)
        self.hp_slider.setRange(0, 1000)
        self.hp_slider.setValue(1000)
        self.hp_slider.setTickPosition(QSlider.TicksBelow)
        self.hp_slider.setTickInterval(100)
        self.hp_slider.valueChanged.connect(self.update_hp_from_slider)
        
        hp_layout.addLayout(hp_header_layout)
        hp_layout.addWidget(self.hp_slider)
        main_layout.addLayout(hp_layout)

        aux_layout = QHBoxLayout()
        
        lbl_ammo = QLabel("弹药量:")
        self.spin_ammo = QSpinBox()
        self.spin_ammo.setRange(0, 1000)
        self.spin_ammo.setValue(500)
        self.spin_ammo.valueChanged.connect(self.update_aux)
        
        lbl_battery = QLabel("电量(%):")
        self.spin_battery = QSpinBox()
        self.spin_battery.setRange(0, 100)
        self.spin_battery.setValue(100)
        self.spin_battery.valueChanged.connect(self.update_aux)
        
        aux_layout.addWidget(lbl_ammo)
        aux_layout.addWidget(self.spin_ammo)
        aux_layout.addWidget(lbl_battery)
        aux_layout.addWidget(self.spin_battery)
        main_layout.addLayout(aux_layout)

        log_label = QLabel("交互日志:")
        self.log_text = QTextEdit()
        self.log_text.setReadOnly(True)
        self.log_text.setStyleSheet("background-color: #f0f0f0; color: #333;")
        
        main_layout.addWidget(log_label)
        main_layout.addWidget(self.log_text)

        self.setLayout(main_layout)

    def toggle_game_status(self):
        if self.ros_node.fault_flag == 0.0:
            self.ros_node.fault_flag = 1.0
            self.btn_start_stop.setText("停止比赛 (Flag = 0)")
            self.btn_start_stop.setStyleSheet("background-color: #F44336; color: white; padding: 10px;")
            self.append_log(">>> 比赛开始 (fault_flag = 1.0)")
        else:
            self.ros_node.fault_flag = 0.0
            self.btn_start_stop.setText("开始比赛 (Flag = 1)")
            self.btn_start_stop.setStyleSheet("background-color: #4CAF50; color: white; padding: 10px;")
            self.append_log(">>> 比赛停止 (fault_flag = 0.0)")

    def update_hp_from_slider(self, value):
        self.hp_spinbox.setValue(value)
        self.ros_node.life_extra = float(value)

    def update_hp_from_spinbox(self, value):
        self.hp_slider.setValue(value)
        self.ros_node.life_extra = float(value)

    def update_aux(self):
        self.ros_node.bullet_extra = float(self.spin_ammo.value())
        self.ros_node.battery = float(self.spin_battery.value())

    def append_log(self, text):
        self.log_text.append(text)
        scrollbar = self.log_text.verticalScrollBar()
        scrollbar.setValue(scrollbar.maximum())

def main():
    rclpy.init(args=None)
    signaler = Signaler()
    ros_node = RefereeSimNode(signaler)
    
    ros_thread = threading.Thread(target=lambda: rclpy.spin(ros_node), daemon=True)
    ros_thread.start()
    
    app = QApplication(sys.argv)
    gui = RefereeGUI(ros_node)
    signaler.log_signal.connect(gui.append_log)
    gui.show()
    
    exit_code = app.exec_()
    ros_node.destroy_node()
    rclpy.shutdown()
    sys.exit(exit_code)

if __name__ == '__main__':
    main()
