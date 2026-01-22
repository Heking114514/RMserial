// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from def_msg:srv/ControllerModeSet.idl
// generated code does not contain a copyright notice

#ifndef DEF_MSG__SRV__DETAIL__CONTROLLER_MODE_SET__STRUCT_H_
#define DEF_MSG__SRV__DETAIL__CONTROLLER_MODE_SET__STRUCT_H_

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

/// Struct defined in srv/ControllerModeSet in the package def_msg.
typedef struct def_msg__srv__ControllerModeSet_Request
{
  std_msgs__msg__Header header;
  int32_t mode;
} def_msg__srv__ControllerModeSet_Request;

// Struct for a sequence of def_msg__srv__ControllerModeSet_Request.
typedef struct def_msg__srv__ControllerModeSet_Request__Sequence
{
  def_msg__srv__ControllerModeSet_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} def_msg__srv__ControllerModeSet_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/ControllerModeSet in the package def_msg.
typedef struct def_msg__srv__ControllerModeSet_Response
{
  bool result;
  int32_t loop_times;
} def_msg__srv__ControllerModeSet_Response;

// Struct for a sequence of def_msg__srv__ControllerModeSet_Response.
typedef struct def_msg__srv__ControllerModeSet_Response__Sequence
{
  def_msg__srv__ControllerModeSet_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} def_msg__srv__ControllerModeSet_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEF_MSG__SRV__DETAIL__CONTROLLER_MODE_SET__STRUCT_H_
