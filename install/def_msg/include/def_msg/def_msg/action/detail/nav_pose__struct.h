// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from def_msg:action/NavPose.idl
// generated code does not contain a copyright notice

#ifndef DEF_MSG__ACTION__DETAIL__NAV_POSE__STRUCT_H_
#define DEF_MSG__ACTION__DETAIL__NAV_POSE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'x'
// Member 'y'
// Member 'w'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in action/NavPose in the package def_msg.
typedef struct def_msg__action__NavPose_Goal
{
  rosidl_runtime_c__float__Sequence x;
  rosidl_runtime_c__float__Sequence y;
  rosidl_runtime_c__float__Sequence w;
  /// 航点数量
  int32_t order;
} def_msg__action__NavPose_Goal;

// Struct for a sequence of def_msg__action__NavPose_Goal.
typedef struct def_msg__action__NavPose_Goal__Sequence
{
  def_msg__action__NavPose_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} def_msg__action__NavPose_Goal__Sequence;


// Constants defined in the message

/// Struct defined in action/NavPose in the package def_msg.
typedef struct def_msg__action__NavPose_Result
{
  bool reached;
} def_msg__action__NavPose_Result;

// Struct for a sequence of def_msg__action__NavPose_Result.
typedef struct def_msg__action__NavPose_Result__Sequence
{
  def_msg__action__NavPose_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} def_msg__action__NavPose_Result__Sequence;


// Constants defined in the message

/// Struct defined in action/NavPose in the package def_msg.
typedef struct def_msg__action__NavPose_Feedback
{
  float dis_x;
  float dis_y;
  float dis_w;
} def_msg__action__NavPose_Feedback;

// Struct for a sequence of def_msg__action__NavPose_Feedback.
typedef struct def_msg__action__NavPose_Feedback__Sequence
{
  def_msg__action__NavPose_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} def_msg__action__NavPose_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "def_msg/action/detail/nav_pose__struct.h"

/// Struct defined in action/NavPose in the package def_msg.
typedef struct def_msg__action__NavPose_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  def_msg__action__NavPose_Goal goal;
} def_msg__action__NavPose_SendGoal_Request;

// Struct for a sequence of def_msg__action__NavPose_SendGoal_Request.
typedef struct def_msg__action__NavPose_SendGoal_Request__Sequence
{
  def_msg__action__NavPose_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} def_msg__action__NavPose_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/NavPose in the package def_msg.
typedef struct def_msg__action__NavPose_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} def_msg__action__NavPose_SendGoal_Response;

// Struct for a sequence of def_msg__action__NavPose_SendGoal_Response.
typedef struct def_msg__action__NavPose_SendGoal_Response__Sequence
{
  def_msg__action__NavPose_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} def_msg__action__NavPose_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/NavPose in the package def_msg.
typedef struct def_msg__action__NavPose_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} def_msg__action__NavPose_GetResult_Request;

// Struct for a sequence of def_msg__action__NavPose_GetResult_Request.
typedef struct def_msg__action__NavPose_GetResult_Request__Sequence
{
  def_msg__action__NavPose_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} def_msg__action__NavPose_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "def_msg/action/detail/nav_pose__struct.h"

/// Struct defined in action/NavPose in the package def_msg.
typedef struct def_msg__action__NavPose_GetResult_Response
{
  int8_t status;
  def_msg__action__NavPose_Result result;
} def_msg__action__NavPose_GetResult_Response;

// Struct for a sequence of def_msg__action__NavPose_GetResult_Response.
typedef struct def_msg__action__NavPose_GetResult_Response__Sequence
{
  def_msg__action__NavPose_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} def_msg__action__NavPose_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "def_msg/action/detail/nav_pose__struct.h"

/// Struct defined in action/NavPose in the package def_msg.
typedef struct def_msg__action__NavPose_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  def_msg__action__NavPose_Feedback feedback;
} def_msg__action__NavPose_FeedbackMessage;

// Struct for a sequence of def_msg__action__NavPose_FeedbackMessage.
typedef struct def_msg__action__NavPose_FeedbackMessage__Sequence
{
  def_msg__action__NavPose_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} def_msg__action__NavPose_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEF_MSG__ACTION__DETAIL__NAV_POSE__STRUCT_H_
