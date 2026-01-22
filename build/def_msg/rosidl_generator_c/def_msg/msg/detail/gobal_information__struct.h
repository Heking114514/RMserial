// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from def_msg:msg/GobalInformation.idl
// generated code does not contain a copyright notice

#ifndef DEF_MSG__MSG__DETAIL__GOBAL_INFORMATION__STRUCT_H_
#define DEF_MSG__MSG__DETAIL__GOBAL_INFORMATION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/GobalInformation in the package def_msg.
/**
  * 用于serial->系统
  * received heart_beat
 */
typedef struct def_msg__msg__GobalInformation
{
  std_msgs__msg__Header header;
  /// 剩下电量     0--100
  int32_t battery;
  /// 剩下生命  0--100
  int32_t life_extra;
  /// 装甲板颜色
  int32_t color;
  /// 剩余子弹 0-255
  int32_t bullet_extra;
  /// 故障指示电控方面
  int32_t fault_flag;
  /// additional data
  bool launch;
  bool arm;
  int32_t base_hp_our;
  int32_t base_hp_enemy;
  int32_t judge_warning;
  /// game_data
  int64_t stage_remain_time;
  int32_t game_progress;
} def_msg__msg__GobalInformation;

// Struct for a sequence of def_msg__msg__GobalInformation.
typedef struct def_msg__msg__GobalInformation__Sequence
{
  def_msg__msg__GobalInformation * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} def_msg__msg__GobalInformation__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEF_MSG__MSG__DETAIL__GOBAL_INFORMATION__STRUCT_H_
