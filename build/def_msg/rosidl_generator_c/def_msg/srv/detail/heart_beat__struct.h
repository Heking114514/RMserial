// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from def_msg:srv/HeartBeat.idl
// generated code does not contain a copyright notice

#ifndef DEF_MSG__SRV__DETAIL__HEART_BEAT__STRUCT_H_
#define DEF_MSG__SRV__DETAIL__HEART_BEAT__STRUCT_H_

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

/// Struct defined in srv/HeartBeat in the package def_msg.
typedef struct def_msg__srv__HeartBeat_Request
{
  std_msgs__msg__Header header;
  bool set_launch;
  bool set_arm;
  int32_t fault_flag;
} def_msg__srv__HeartBeat_Request;

// Struct for a sequence of def_msg__srv__HeartBeat_Request.
typedef struct def_msg__srv__HeartBeat_Request__Sequence
{
  def_msg__srv__HeartBeat_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} def_msg__srv__HeartBeat_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/HeartBeat in the package def_msg.
typedef struct def_msg__srv__HeartBeat_Response
{
  bool result;
} def_msg__srv__HeartBeat_Response;

// Struct for a sequence of def_msg__srv__HeartBeat_Response.
typedef struct def_msg__srv__HeartBeat_Response__Sequence
{
  def_msg__srv__HeartBeat_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} def_msg__srv__HeartBeat_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEF_MSG__SRV__DETAIL__HEART_BEAT__STRUCT_H_
