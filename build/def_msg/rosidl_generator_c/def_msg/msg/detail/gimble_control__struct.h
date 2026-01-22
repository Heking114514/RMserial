// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from def_msg:msg/GimbleControl.idl
// generated code does not contain a copyright notice

#ifndef DEF_MSG__MSG__DETAIL__GIMBLE_CONTROL__STRUCT_H_
#define DEF_MSG__MSG__DETAIL__GIMBLE_CONTROL__STRUCT_H_

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

/// Struct defined in msg/GimbleControl in the package def_msg.
/**
  * 用于云台控制，系统->serial
 */
typedef struct def_msg__msg__GimbleControl
{
  std_msgs__msg__Header header;
  double yaw;
  double pitch;
  double roll;
  bool fire_advise;
} def_msg__msg__GimbleControl;

// Struct for a sequence of def_msg__msg__GimbleControl.
typedef struct def_msg__msg__GimbleControl__Sequence
{
  def_msg__msg__GimbleControl * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} def_msg__msg__GimbleControl__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEF_MSG__MSG__DETAIL__GIMBLE_CONTROL__STRUCT_H_
