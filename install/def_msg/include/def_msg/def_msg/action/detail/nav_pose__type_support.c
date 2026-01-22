// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from def_msg:action/NavPose.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "def_msg/action/detail/nav_pose__rosidl_typesupport_introspection_c.h"
#include "def_msg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "def_msg/action/detail/nav_pose__functions.h"
#include "def_msg/action/detail/nav_pose__struct.h"


// Include directives for member types
// Member `x`
// Member `y`
// Member `w`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void def_msg__action__NavPose_Goal__rosidl_typesupport_introspection_c__NavPose_Goal_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  def_msg__action__NavPose_Goal__init(message_memory);
}

void def_msg__action__NavPose_Goal__rosidl_typesupport_introspection_c__NavPose_Goal_fini_function(void * message_memory)
{
  def_msg__action__NavPose_Goal__fini(message_memory);
}

size_t def_msg__action__NavPose_Goal__rosidl_typesupport_introspection_c__size_function__NavPose_Goal__x(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * def_msg__action__NavPose_Goal__rosidl_typesupport_introspection_c__get_const_function__NavPose_Goal__x(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * def_msg__action__NavPose_Goal__rosidl_typesupport_introspection_c__get_function__NavPose_Goal__x(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void def_msg__action__NavPose_Goal__rosidl_typesupport_introspection_c__fetch_function__NavPose_Goal__x(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    def_msg__action__NavPose_Goal__rosidl_typesupport_introspection_c__get_const_function__NavPose_Goal__x(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void def_msg__action__NavPose_Goal__rosidl_typesupport_introspection_c__assign_function__NavPose_Goal__x(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    def_msg__action__NavPose_Goal__rosidl_typesupport_introspection_c__get_function__NavPose_Goal__x(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool def_msg__action__NavPose_Goal__rosidl_typesupport_introspection_c__resize_function__NavPose_Goal__x(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t def_msg__action__NavPose_Goal__rosidl_typesupport_introspection_c__size_function__NavPose_Goal__y(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * def_msg__action__NavPose_Goal__rosidl_typesupport_introspection_c__get_const_function__NavPose_Goal__y(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * def_msg__action__NavPose_Goal__rosidl_typesupport_introspection_c__get_function__NavPose_Goal__y(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void def_msg__action__NavPose_Goal__rosidl_typesupport_introspection_c__fetch_function__NavPose_Goal__y(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    def_msg__action__NavPose_Goal__rosidl_typesupport_introspection_c__get_const_function__NavPose_Goal__y(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void def_msg__action__NavPose_Goal__rosidl_typesupport_introspection_c__assign_function__NavPose_Goal__y(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    def_msg__action__NavPose_Goal__rosidl_typesupport_introspection_c__get_function__NavPose_Goal__y(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool def_msg__action__NavPose_Goal__rosidl_typesupport_introspection_c__resize_function__NavPose_Goal__y(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t def_msg__action__NavPose_Goal__rosidl_typesupport_introspection_c__size_function__NavPose_Goal__w(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * def_msg__action__NavPose_Goal__rosidl_typesupport_introspection_c__get_const_function__NavPose_Goal__w(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * def_msg__action__NavPose_Goal__rosidl_typesupport_introspection_c__get_function__NavPose_Goal__w(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void def_msg__action__NavPose_Goal__rosidl_typesupport_introspection_c__fetch_function__NavPose_Goal__w(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    def_msg__action__NavPose_Goal__rosidl_typesupport_introspection_c__get_const_function__NavPose_Goal__w(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void def_msg__action__NavPose_Goal__rosidl_typesupport_introspection_c__assign_function__NavPose_Goal__w(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    def_msg__action__NavPose_Goal__rosidl_typesupport_introspection_c__get_function__NavPose_Goal__w(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool def_msg__action__NavPose_Goal__rosidl_typesupport_introspection_c__resize_function__NavPose_Goal__w(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember def_msg__action__NavPose_Goal__rosidl_typesupport_introspection_c__NavPose_Goal_message_member_array[4] = {
  {
    "x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(def_msg__action__NavPose_Goal, x),  // bytes offset in struct
    NULL,  // default value
    def_msg__action__NavPose_Goal__rosidl_typesupport_introspection_c__size_function__NavPose_Goal__x,  // size() function pointer
    def_msg__action__NavPose_Goal__rosidl_typesupport_introspection_c__get_const_function__NavPose_Goal__x,  // get_const(index) function pointer
    def_msg__action__NavPose_Goal__rosidl_typesupport_introspection_c__get_function__NavPose_Goal__x,  // get(index) function pointer
    def_msg__action__NavPose_Goal__rosidl_typesupport_introspection_c__fetch_function__NavPose_Goal__x,  // fetch(index, &value) function pointer
    def_msg__action__NavPose_Goal__rosidl_typesupport_introspection_c__assign_function__NavPose_Goal__x,  // assign(index, value) function pointer
    def_msg__action__NavPose_Goal__rosidl_typesupport_introspection_c__resize_function__NavPose_Goal__x  // resize(index) function pointer
  },
  {
    "y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(def_msg__action__NavPose_Goal, y),  // bytes offset in struct
    NULL,  // default value
    def_msg__action__NavPose_Goal__rosidl_typesupport_introspection_c__size_function__NavPose_Goal__y,  // size() function pointer
    def_msg__action__NavPose_Goal__rosidl_typesupport_introspection_c__get_const_function__NavPose_Goal__y,  // get_const(index) function pointer
    def_msg__action__NavPose_Goal__rosidl_typesupport_introspection_c__get_function__NavPose_Goal__y,  // get(index) function pointer
    def_msg__action__NavPose_Goal__rosidl_typesupport_introspection_c__fetch_function__NavPose_Goal__y,  // fetch(index, &value) function pointer
    def_msg__action__NavPose_Goal__rosidl_typesupport_introspection_c__assign_function__NavPose_Goal__y,  // assign(index, value) function pointer
    def_msg__action__NavPose_Goal__rosidl_typesupport_introspection_c__resize_function__NavPose_Goal__y  // resize(index) function pointer
  },
  {
    "w",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(def_msg__action__NavPose_Goal, w),  // bytes offset in struct
    NULL,  // default value
    def_msg__action__NavPose_Goal__rosidl_typesupport_introspection_c__size_function__NavPose_Goal__w,  // size() function pointer
    def_msg__action__NavPose_Goal__rosidl_typesupport_introspection_c__get_const_function__NavPose_Goal__w,  // get_const(index) function pointer
    def_msg__action__NavPose_Goal__rosidl_typesupport_introspection_c__get_function__NavPose_Goal__w,  // get(index) function pointer
    def_msg__action__NavPose_Goal__rosidl_typesupport_introspection_c__fetch_function__NavPose_Goal__w,  // fetch(index, &value) function pointer
    def_msg__action__NavPose_Goal__rosidl_typesupport_introspection_c__assign_function__NavPose_Goal__w,  // assign(index, value) function pointer
    def_msg__action__NavPose_Goal__rosidl_typesupport_introspection_c__resize_function__NavPose_Goal__w  // resize(index) function pointer
  },
  {
    "order",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(def_msg__action__NavPose_Goal, order),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers def_msg__action__NavPose_Goal__rosidl_typesupport_introspection_c__NavPose_Goal_message_members = {
  "def_msg__action",  // message namespace
  "NavPose_Goal",  // message name
  4,  // number of fields
  sizeof(def_msg__action__NavPose_Goal),
  def_msg__action__NavPose_Goal__rosidl_typesupport_introspection_c__NavPose_Goal_message_member_array,  // message members
  def_msg__action__NavPose_Goal__rosidl_typesupport_introspection_c__NavPose_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  def_msg__action__NavPose_Goal__rosidl_typesupport_introspection_c__NavPose_Goal_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t def_msg__action__NavPose_Goal__rosidl_typesupport_introspection_c__NavPose_Goal_message_type_support_handle = {
  0,
  &def_msg__action__NavPose_Goal__rosidl_typesupport_introspection_c__NavPose_Goal_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_def_msg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, def_msg, action, NavPose_Goal)() {
  if (!def_msg__action__NavPose_Goal__rosidl_typesupport_introspection_c__NavPose_Goal_message_type_support_handle.typesupport_identifier) {
    def_msg__action__NavPose_Goal__rosidl_typesupport_introspection_c__NavPose_Goal_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &def_msg__action__NavPose_Goal__rosidl_typesupport_introspection_c__NavPose_Goal_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "def_msg/action/detail/nav_pose__rosidl_typesupport_introspection_c.h"
// already included above
// #include "def_msg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "def_msg/action/detail/nav_pose__functions.h"
// already included above
// #include "def_msg/action/detail/nav_pose__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void def_msg__action__NavPose_Result__rosidl_typesupport_introspection_c__NavPose_Result_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  def_msg__action__NavPose_Result__init(message_memory);
}

void def_msg__action__NavPose_Result__rosidl_typesupport_introspection_c__NavPose_Result_fini_function(void * message_memory)
{
  def_msg__action__NavPose_Result__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember def_msg__action__NavPose_Result__rosidl_typesupport_introspection_c__NavPose_Result_message_member_array[1] = {
  {
    "reached",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(def_msg__action__NavPose_Result, reached),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers def_msg__action__NavPose_Result__rosidl_typesupport_introspection_c__NavPose_Result_message_members = {
  "def_msg__action",  // message namespace
  "NavPose_Result",  // message name
  1,  // number of fields
  sizeof(def_msg__action__NavPose_Result),
  def_msg__action__NavPose_Result__rosidl_typesupport_introspection_c__NavPose_Result_message_member_array,  // message members
  def_msg__action__NavPose_Result__rosidl_typesupport_introspection_c__NavPose_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  def_msg__action__NavPose_Result__rosidl_typesupport_introspection_c__NavPose_Result_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t def_msg__action__NavPose_Result__rosidl_typesupport_introspection_c__NavPose_Result_message_type_support_handle = {
  0,
  &def_msg__action__NavPose_Result__rosidl_typesupport_introspection_c__NavPose_Result_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_def_msg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, def_msg, action, NavPose_Result)() {
  if (!def_msg__action__NavPose_Result__rosidl_typesupport_introspection_c__NavPose_Result_message_type_support_handle.typesupport_identifier) {
    def_msg__action__NavPose_Result__rosidl_typesupport_introspection_c__NavPose_Result_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &def_msg__action__NavPose_Result__rosidl_typesupport_introspection_c__NavPose_Result_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "def_msg/action/detail/nav_pose__rosidl_typesupport_introspection_c.h"
// already included above
// #include "def_msg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "def_msg/action/detail/nav_pose__functions.h"
// already included above
// #include "def_msg/action/detail/nav_pose__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void def_msg__action__NavPose_Feedback__rosidl_typesupport_introspection_c__NavPose_Feedback_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  def_msg__action__NavPose_Feedback__init(message_memory);
}

void def_msg__action__NavPose_Feedback__rosidl_typesupport_introspection_c__NavPose_Feedback_fini_function(void * message_memory)
{
  def_msg__action__NavPose_Feedback__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember def_msg__action__NavPose_Feedback__rosidl_typesupport_introspection_c__NavPose_Feedback_message_member_array[3] = {
  {
    "dis_x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(def_msg__action__NavPose_Feedback, dis_x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "dis_y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(def_msg__action__NavPose_Feedback, dis_y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "dis_w",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(def_msg__action__NavPose_Feedback, dis_w),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers def_msg__action__NavPose_Feedback__rosidl_typesupport_introspection_c__NavPose_Feedback_message_members = {
  "def_msg__action",  // message namespace
  "NavPose_Feedback",  // message name
  3,  // number of fields
  sizeof(def_msg__action__NavPose_Feedback),
  def_msg__action__NavPose_Feedback__rosidl_typesupport_introspection_c__NavPose_Feedback_message_member_array,  // message members
  def_msg__action__NavPose_Feedback__rosidl_typesupport_introspection_c__NavPose_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  def_msg__action__NavPose_Feedback__rosidl_typesupport_introspection_c__NavPose_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t def_msg__action__NavPose_Feedback__rosidl_typesupport_introspection_c__NavPose_Feedback_message_type_support_handle = {
  0,
  &def_msg__action__NavPose_Feedback__rosidl_typesupport_introspection_c__NavPose_Feedback_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_def_msg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, def_msg, action, NavPose_Feedback)() {
  if (!def_msg__action__NavPose_Feedback__rosidl_typesupport_introspection_c__NavPose_Feedback_message_type_support_handle.typesupport_identifier) {
    def_msg__action__NavPose_Feedback__rosidl_typesupport_introspection_c__NavPose_Feedback_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &def_msg__action__NavPose_Feedback__rosidl_typesupport_introspection_c__NavPose_Feedback_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "def_msg/action/detail/nav_pose__rosidl_typesupport_introspection_c.h"
// already included above
// #include "def_msg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "def_msg/action/detail/nav_pose__functions.h"
// already included above
// #include "def_msg/action/detail/nav_pose__struct.h"


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `goal`
#include "def_msg/action/nav_pose.h"
// Member `goal`
// already included above
// #include "def_msg/action/detail/nav_pose__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void def_msg__action__NavPose_SendGoal_Request__rosidl_typesupport_introspection_c__NavPose_SendGoal_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  def_msg__action__NavPose_SendGoal_Request__init(message_memory);
}

void def_msg__action__NavPose_SendGoal_Request__rosidl_typesupport_introspection_c__NavPose_SendGoal_Request_fini_function(void * message_memory)
{
  def_msg__action__NavPose_SendGoal_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember def_msg__action__NavPose_SendGoal_Request__rosidl_typesupport_introspection_c__NavPose_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(def_msg__action__NavPose_SendGoal_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "goal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(def_msg__action__NavPose_SendGoal_Request, goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers def_msg__action__NavPose_SendGoal_Request__rosidl_typesupport_introspection_c__NavPose_SendGoal_Request_message_members = {
  "def_msg__action",  // message namespace
  "NavPose_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(def_msg__action__NavPose_SendGoal_Request),
  def_msg__action__NavPose_SendGoal_Request__rosidl_typesupport_introspection_c__NavPose_SendGoal_Request_message_member_array,  // message members
  def_msg__action__NavPose_SendGoal_Request__rosidl_typesupport_introspection_c__NavPose_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  def_msg__action__NavPose_SendGoal_Request__rosidl_typesupport_introspection_c__NavPose_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t def_msg__action__NavPose_SendGoal_Request__rosidl_typesupport_introspection_c__NavPose_SendGoal_Request_message_type_support_handle = {
  0,
  &def_msg__action__NavPose_SendGoal_Request__rosidl_typesupport_introspection_c__NavPose_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_def_msg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, def_msg, action, NavPose_SendGoal_Request)() {
  def_msg__action__NavPose_SendGoal_Request__rosidl_typesupport_introspection_c__NavPose_SendGoal_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  def_msg__action__NavPose_SendGoal_Request__rosidl_typesupport_introspection_c__NavPose_SendGoal_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, def_msg, action, NavPose_Goal)();
  if (!def_msg__action__NavPose_SendGoal_Request__rosidl_typesupport_introspection_c__NavPose_SendGoal_Request_message_type_support_handle.typesupport_identifier) {
    def_msg__action__NavPose_SendGoal_Request__rosidl_typesupport_introspection_c__NavPose_SendGoal_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &def_msg__action__NavPose_SendGoal_Request__rosidl_typesupport_introspection_c__NavPose_SendGoal_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "def_msg/action/detail/nav_pose__rosidl_typesupport_introspection_c.h"
// already included above
// #include "def_msg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "def_msg/action/detail/nav_pose__functions.h"
// already included above
// #include "def_msg/action/detail/nav_pose__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void def_msg__action__NavPose_SendGoal_Response__rosidl_typesupport_introspection_c__NavPose_SendGoal_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  def_msg__action__NavPose_SendGoal_Response__init(message_memory);
}

void def_msg__action__NavPose_SendGoal_Response__rosidl_typesupport_introspection_c__NavPose_SendGoal_Response_fini_function(void * message_memory)
{
  def_msg__action__NavPose_SendGoal_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember def_msg__action__NavPose_SendGoal_Response__rosidl_typesupport_introspection_c__NavPose_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(def_msg__action__NavPose_SendGoal_Response, accepted),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(def_msg__action__NavPose_SendGoal_Response, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers def_msg__action__NavPose_SendGoal_Response__rosidl_typesupport_introspection_c__NavPose_SendGoal_Response_message_members = {
  "def_msg__action",  // message namespace
  "NavPose_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(def_msg__action__NavPose_SendGoal_Response),
  def_msg__action__NavPose_SendGoal_Response__rosidl_typesupport_introspection_c__NavPose_SendGoal_Response_message_member_array,  // message members
  def_msg__action__NavPose_SendGoal_Response__rosidl_typesupport_introspection_c__NavPose_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  def_msg__action__NavPose_SendGoal_Response__rosidl_typesupport_introspection_c__NavPose_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t def_msg__action__NavPose_SendGoal_Response__rosidl_typesupport_introspection_c__NavPose_SendGoal_Response_message_type_support_handle = {
  0,
  &def_msg__action__NavPose_SendGoal_Response__rosidl_typesupport_introspection_c__NavPose_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_def_msg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, def_msg, action, NavPose_SendGoal_Response)() {
  def_msg__action__NavPose_SendGoal_Response__rosidl_typesupport_introspection_c__NavPose_SendGoal_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!def_msg__action__NavPose_SendGoal_Response__rosidl_typesupport_introspection_c__NavPose_SendGoal_Response_message_type_support_handle.typesupport_identifier) {
    def_msg__action__NavPose_SendGoal_Response__rosidl_typesupport_introspection_c__NavPose_SendGoal_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &def_msg__action__NavPose_SendGoal_Response__rosidl_typesupport_introspection_c__NavPose_SendGoal_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "def_msg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "def_msg/action/detail/nav_pose__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers def_msg__action__detail__nav_pose__rosidl_typesupport_introspection_c__NavPose_SendGoal_service_members = {
  "def_msg__action",  // service namespace
  "NavPose_SendGoal",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // def_msg__action__detail__nav_pose__rosidl_typesupport_introspection_c__NavPose_SendGoal_Request_message_type_support_handle,
  NULL  // response message
  // def_msg__action__detail__nav_pose__rosidl_typesupport_introspection_c__NavPose_SendGoal_Response_message_type_support_handle
};

static rosidl_service_type_support_t def_msg__action__detail__nav_pose__rosidl_typesupport_introspection_c__NavPose_SendGoal_service_type_support_handle = {
  0,
  &def_msg__action__detail__nav_pose__rosidl_typesupport_introspection_c__NavPose_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, def_msg, action, NavPose_SendGoal_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, def_msg, action, NavPose_SendGoal_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_def_msg
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, def_msg, action, NavPose_SendGoal)() {
  if (!def_msg__action__detail__nav_pose__rosidl_typesupport_introspection_c__NavPose_SendGoal_service_type_support_handle.typesupport_identifier) {
    def_msg__action__detail__nav_pose__rosidl_typesupport_introspection_c__NavPose_SendGoal_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)def_msg__action__detail__nav_pose__rosidl_typesupport_introspection_c__NavPose_SendGoal_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, def_msg, action, NavPose_SendGoal_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, def_msg, action, NavPose_SendGoal_Response)()->data;
  }

  return &def_msg__action__detail__nav_pose__rosidl_typesupport_introspection_c__NavPose_SendGoal_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "def_msg/action/detail/nav_pose__rosidl_typesupport_introspection_c.h"
// already included above
// #include "def_msg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "def_msg/action/detail/nav_pose__functions.h"
// already included above
// #include "def_msg/action/detail/nav_pose__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void def_msg__action__NavPose_GetResult_Request__rosidl_typesupport_introspection_c__NavPose_GetResult_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  def_msg__action__NavPose_GetResult_Request__init(message_memory);
}

void def_msg__action__NavPose_GetResult_Request__rosidl_typesupport_introspection_c__NavPose_GetResult_Request_fini_function(void * message_memory)
{
  def_msg__action__NavPose_GetResult_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember def_msg__action__NavPose_GetResult_Request__rosidl_typesupport_introspection_c__NavPose_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(def_msg__action__NavPose_GetResult_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers def_msg__action__NavPose_GetResult_Request__rosidl_typesupport_introspection_c__NavPose_GetResult_Request_message_members = {
  "def_msg__action",  // message namespace
  "NavPose_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(def_msg__action__NavPose_GetResult_Request),
  def_msg__action__NavPose_GetResult_Request__rosidl_typesupport_introspection_c__NavPose_GetResult_Request_message_member_array,  // message members
  def_msg__action__NavPose_GetResult_Request__rosidl_typesupport_introspection_c__NavPose_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  def_msg__action__NavPose_GetResult_Request__rosidl_typesupport_introspection_c__NavPose_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t def_msg__action__NavPose_GetResult_Request__rosidl_typesupport_introspection_c__NavPose_GetResult_Request_message_type_support_handle = {
  0,
  &def_msg__action__NavPose_GetResult_Request__rosidl_typesupport_introspection_c__NavPose_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_def_msg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, def_msg, action, NavPose_GetResult_Request)() {
  def_msg__action__NavPose_GetResult_Request__rosidl_typesupport_introspection_c__NavPose_GetResult_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  if (!def_msg__action__NavPose_GetResult_Request__rosidl_typesupport_introspection_c__NavPose_GetResult_Request_message_type_support_handle.typesupport_identifier) {
    def_msg__action__NavPose_GetResult_Request__rosidl_typesupport_introspection_c__NavPose_GetResult_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &def_msg__action__NavPose_GetResult_Request__rosidl_typesupport_introspection_c__NavPose_GetResult_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "def_msg/action/detail/nav_pose__rosidl_typesupport_introspection_c.h"
// already included above
// #include "def_msg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "def_msg/action/detail/nav_pose__functions.h"
// already included above
// #include "def_msg/action/detail/nav_pose__struct.h"


// Include directives for member types
// Member `result`
// already included above
// #include "def_msg/action/nav_pose.h"
// Member `result`
// already included above
// #include "def_msg/action/detail/nav_pose__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void def_msg__action__NavPose_GetResult_Response__rosidl_typesupport_introspection_c__NavPose_GetResult_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  def_msg__action__NavPose_GetResult_Response__init(message_memory);
}

void def_msg__action__NavPose_GetResult_Response__rosidl_typesupport_introspection_c__NavPose_GetResult_Response_fini_function(void * message_memory)
{
  def_msg__action__NavPose_GetResult_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember def_msg__action__NavPose_GetResult_Response__rosidl_typesupport_introspection_c__NavPose_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(def_msg__action__NavPose_GetResult_Response, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(def_msg__action__NavPose_GetResult_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers def_msg__action__NavPose_GetResult_Response__rosidl_typesupport_introspection_c__NavPose_GetResult_Response_message_members = {
  "def_msg__action",  // message namespace
  "NavPose_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(def_msg__action__NavPose_GetResult_Response),
  def_msg__action__NavPose_GetResult_Response__rosidl_typesupport_introspection_c__NavPose_GetResult_Response_message_member_array,  // message members
  def_msg__action__NavPose_GetResult_Response__rosidl_typesupport_introspection_c__NavPose_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  def_msg__action__NavPose_GetResult_Response__rosidl_typesupport_introspection_c__NavPose_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t def_msg__action__NavPose_GetResult_Response__rosidl_typesupport_introspection_c__NavPose_GetResult_Response_message_type_support_handle = {
  0,
  &def_msg__action__NavPose_GetResult_Response__rosidl_typesupport_introspection_c__NavPose_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_def_msg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, def_msg, action, NavPose_GetResult_Response)() {
  def_msg__action__NavPose_GetResult_Response__rosidl_typesupport_introspection_c__NavPose_GetResult_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, def_msg, action, NavPose_Result)();
  if (!def_msg__action__NavPose_GetResult_Response__rosidl_typesupport_introspection_c__NavPose_GetResult_Response_message_type_support_handle.typesupport_identifier) {
    def_msg__action__NavPose_GetResult_Response__rosidl_typesupport_introspection_c__NavPose_GetResult_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &def_msg__action__NavPose_GetResult_Response__rosidl_typesupport_introspection_c__NavPose_GetResult_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "def_msg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "def_msg/action/detail/nav_pose__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers def_msg__action__detail__nav_pose__rosidl_typesupport_introspection_c__NavPose_GetResult_service_members = {
  "def_msg__action",  // service namespace
  "NavPose_GetResult",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // def_msg__action__detail__nav_pose__rosidl_typesupport_introspection_c__NavPose_GetResult_Request_message_type_support_handle,
  NULL  // response message
  // def_msg__action__detail__nav_pose__rosidl_typesupport_introspection_c__NavPose_GetResult_Response_message_type_support_handle
};

static rosidl_service_type_support_t def_msg__action__detail__nav_pose__rosidl_typesupport_introspection_c__NavPose_GetResult_service_type_support_handle = {
  0,
  &def_msg__action__detail__nav_pose__rosidl_typesupport_introspection_c__NavPose_GetResult_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, def_msg, action, NavPose_GetResult_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, def_msg, action, NavPose_GetResult_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_def_msg
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, def_msg, action, NavPose_GetResult)() {
  if (!def_msg__action__detail__nav_pose__rosidl_typesupport_introspection_c__NavPose_GetResult_service_type_support_handle.typesupport_identifier) {
    def_msg__action__detail__nav_pose__rosidl_typesupport_introspection_c__NavPose_GetResult_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)def_msg__action__detail__nav_pose__rosidl_typesupport_introspection_c__NavPose_GetResult_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, def_msg, action, NavPose_GetResult_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, def_msg, action, NavPose_GetResult_Response)()->data;
  }

  return &def_msg__action__detail__nav_pose__rosidl_typesupport_introspection_c__NavPose_GetResult_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "def_msg/action/detail/nav_pose__rosidl_typesupport_introspection_c.h"
// already included above
// #include "def_msg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "def_msg/action/detail/nav_pose__functions.h"
// already included above
// #include "def_msg/action/detail/nav_pose__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `feedback`
// already included above
// #include "def_msg/action/nav_pose.h"
// Member `feedback`
// already included above
// #include "def_msg/action/detail/nav_pose__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void def_msg__action__NavPose_FeedbackMessage__rosidl_typesupport_introspection_c__NavPose_FeedbackMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  def_msg__action__NavPose_FeedbackMessage__init(message_memory);
}

void def_msg__action__NavPose_FeedbackMessage__rosidl_typesupport_introspection_c__NavPose_FeedbackMessage_fini_function(void * message_memory)
{
  def_msg__action__NavPose_FeedbackMessage__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember def_msg__action__NavPose_FeedbackMessage__rosidl_typesupport_introspection_c__NavPose_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(def_msg__action__NavPose_FeedbackMessage, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "feedback",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(def_msg__action__NavPose_FeedbackMessage, feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers def_msg__action__NavPose_FeedbackMessage__rosidl_typesupport_introspection_c__NavPose_FeedbackMessage_message_members = {
  "def_msg__action",  // message namespace
  "NavPose_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(def_msg__action__NavPose_FeedbackMessage),
  def_msg__action__NavPose_FeedbackMessage__rosidl_typesupport_introspection_c__NavPose_FeedbackMessage_message_member_array,  // message members
  def_msg__action__NavPose_FeedbackMessage__rosidl_typesupport_introspection_c__NavPose_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  def_msg__action__NavPose_FeedbackMessage__rosidl_typesupport_introspection_c__NavPose_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t def_msg__action__NavPose_FeedbackMessage__rosidl_typesupport_introspection_c__NavPose_FeedbackMessage_message_type_support_handle = {
  0,
  &def_msg__action__NavPose_FeedbackMessage__rosidl_typesupport_introspection_c__NavPose_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_def_msg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, def_msg, action, NavPose_FeedbackMessage)() {
  def_msg__action__NavPose_FeedbackMessage__rosidl_typesupport_introspection_c__NavPose_FeedbackMessage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  def_msg__action__NavPose_FeedbackMessage__rosidl_typesupport_introspection_c__NavPose_FeedbackMessage_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, def_msg, action, NavPose_Feedback)();
  if (!def_msg__action__NavPose_FeedbackMessage__rosidl_typesupport_introspection_c__NavPose_FeedbackMessage_message_type_support_handle.typesupport_identifier) {
    def_msg__action__NavPose_FeedbackMessage__rosidl_typesupport_introspection_c__NavPose_FeedbackMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &def_msg__action__NavPose_FeedbackMessage__rosidl_typesupport_introspection_c__NavPose_FeedbackMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
