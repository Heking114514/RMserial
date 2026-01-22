// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from def_msg:msg/CommonControl.idl
// generated code does not contain a copyright notice

#ifndef DEF_MSG__MSG__DETAIL__COMMON_CONTROL__STRUCT_H_
#define DEF_MSG__MSG__DETAIL__COMMON_CONTROL__STRUCT_H_

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

/// Struct defined in msg/CommonControl in the package def_msg.
/**
  * 用于系统控制  系统->serial
 */
typedef struct def_msg__msg__CommonControl
{
  std_msgs__msg__Header header;
  /// <0 底盘向左的小陀螺   |  >0 底盘向右的小陀螺
  float velocity_top;
  bool shoot;
} def_msg__msg__CommonControl;

// Struct for a sequence of def_msg__msg__CommonControl.
typedef struct def_msg__msg__CommonControl__Sequence
{
  def_msg__msg__CommonControl * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} def_msg__msg__CommonControl__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEF_MSG__MSG__DETAIL__COMMON_CONTROL__STRUCT_H_
