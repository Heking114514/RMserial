// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from def_msg:msg/EmControl.idl
// generated code does not contain a copyright notice

#ifndef DEF_MSG__MSG__DETAIL__EM_CONTROL__STRUCT_H_
#define DEF_MSG__MSG__DETAIL__EM_CONTROL__STRUCT_H_

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

/// Struct defined in msg/EmControl in the package def_msg.
typedef struct def_msg__msg__EmControl
{
  std_msgs__msg__Header header;
  /// 0 keep    |   1   off
  bool stop_flag;
} def_msg__msg__EmControl;

// Struct for a sequence of def_msg__msg__EmControl.
typedef struct def_msg__msg__EmControl__Sequence
{
  def_msg__msg__EmControl * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} def_msg__msg__EmControl__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEF_MSG__MSG__DETAIL__EM_CONTROL__STRUCT_H_
