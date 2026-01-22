// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from def_msg:srv/ControllerModeSet.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "def_msg/srv/detail/controller_mode_set__rosidl_typesupport_introspection_c.h"
#include "def_msg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "def_msg/srv/detail/controller_mode_set__functions.h"
#include "def_msg/srv/detail/controller_mode_set__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void def_msg__srv__ControllerModeSet_Request__rosidl_typesupport_introspection_c__ControllerModeSet_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  def_msg__srv__ControllerModeSet_Request__init(message_memory);
}

void def_msg__srv__ControllerModeSet_Request__rosidl_typesupport_introspection_c__ControllerModeSet_Request_fini_function(void * message_memory)
{
  def_msg__srv__ControllerModeSet_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember def_msg__srv__ControllerModeSet_Request__rosidl_typesupport_introspection_c__ControllerModeSet_Request_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(def_msg__srv__ControllerModeSet_Request, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "mode",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(def_msg__srv__ControllerModeSet_Request, mode),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers def_msg__srv__ControllerModeSet_Request__rosidl_typesupport_introspection_c__ControllerModeSet_Request_message_members = {
  "def_msg__srv",  // message namespace
  "ControllerModeSet_Request",  // message name
  2,  // number of fields
  sizeof(def_msg__srv__ControllerModeSet_Request),
  def_msg__srv__ControllerModeSet_Request__rosidl_typesupport_introspection_c__ControllerModeSet_Request_message_member_array,  // message members
  def_msg__srv__ControllerModeSet_Request__rosidl_typesupport_introspection_c__ControllerModeSet_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  def_msg__srv__ControllerModeSet_Request__rosidl_typesupport_introspection_c__ControllerModeSet_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t def_msg__srv__ControllerModeSet_Request__rosidl_typesupport_introspection_c__ControllerModeSet_Request_message_type_support_handle = {
  0,
  &def_msg__srv__ControllerModeSet_Request__rosidl_typesupport_introspection_c__ControllerModeSet_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_def_msg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, def_msg, srv, ControllerModeSet_Request)() {
  def_msg__srv__ControllerModeSet_Request__rosidl_typesupport_introspection_c__ControllerModeSet_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!def_msg__srv__ControllerModeSet_Request__rosidl_typesupport_introspection_c__ControllerModeSet_Request_message_type_support_handle.typesupport_identifier) {
    def_msg__srv__ControllerModeSet_Request__rosidl_typesupport_introspection_c__ControllerModeSet_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &def_msg__srv__ControllerModeSet_Request__rosidl_typesupport_introspection_c__ControllerModeSet_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "def_msg/srv/detail/controller_mode_set__rosidl_typesupport_introspection_c.h"
// already included above
// #include "def_msg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "def_msg/srv/detail/controller_mode_set__functions.h"
// already included above
// #include "def_msg/srv/detail/controller_mode_set__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void def_msg__srv__ControllerModeSet_Response__rosidl_typesupport_introspection_c__ControllerModeSet_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  def_msg__srv__ControllerModeSet_Response__init(message_memory);
}

void def_msg__srv__ControllerModeSet_Response__rosidl_typesupport_introspection_c__ControllerModeSet_Response_fini_function(void * message_memory)
{
  def_msg__srv__ControllerModeSet_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember def_msg__srv__ControllerModeSet_Response__rosidl_typesupport_introspection_c__ControllerModeSet_Response_message_member_array[2] = {
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(def_msg__srv__ControllerModeSet_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "loop_times",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(def_msg__srv__ControllerModeSet_Response, loop_times),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers def_msg__srv__ControllerModeSet_Response__rosidl_typesupport_introspection_c__ControllerModeSet_Response_message_members = {
  "def_msg__srv",  // message namespace
  "ControllerModeSet_Response",  // message name
  2,  // number of fields
  sizeof(def_msg__srv__ControllerModeSet_Response),
  def_msg__srv__ControllerModeSet_Response__rosidl_typesupport_introspection_c__ControllerModeSet_Response_message_member_array,  // message members
  def_msg__srv__ControllerModeSet_Response__rosidl_typesupport_introspection_c__ControllerModeSet_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  def_msg__srv__ControllerModeSet_Response__rosidl_typesupport_introspection_c__ControllerModeSet_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t def_msg__srv__ControllerModeSet_Response__rosidl_typesupport_introspection_c__ControllerModeSet_Response_message_type_support_handle = {
  0,
  &def_msg__srv__ControllerModeSet_Response__rosidl_typesupport_introspection_c__ControllerModeSet_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_def_msg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, def_msg, srv, ControllerModeSet_Response)() {
  if (!def_msg__srv__ControllerModeSet_Response__rosidl_typesupport_introspection_c__ControllerModeSet_Response_message_type_support_handle.typesupport_identifier) {
    def_msg__srv__ControllerModeSet_Response__rosidl_typesupport_introspection_c__ControllerModeSet_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &def_msg__srv__ControllerModeSet_Response__rosidl_typesupport_introspection_c__ControllerModeSet_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "def_msg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "def_msg/srv/detail/controller_mode_set__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers def_msg__srv__detail__controller_mode_set__rosidl_typesupport_introspection_c__ControllerModeSet_service_members = {
  "def_msg__srv",  // service namespace
  "ControllerModeSet",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // def_msg__srv__detail__controller_mode_set__rosidl_typesupport_introspection_c__ControllerModeSet_Request_message_type_support_handle,
  NULL  // response message
  // def_msg__srv__detail__controller_mode_set__rosidl_typesupport_introspection_c__ControllerModeSet_Response_message_type_support_handle
};

static rosidl_service_type_support_t def_msg__srv__detail__controller_mode_set__rosidl_typesupport_introspection_c__ControllerModeSet_service_type_support_handle = {
  0,
  &def_msg__srv__detail__controller_mode_set__rosidl_typesupport_introspection_c__ControllerModeSet_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, def_msg, srv, ControllerModeSet_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, def_msg, srv, ControllerModeSet_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_def_msg
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, def_msg, srv, ControllerModeSet)() {
  if (!def_msg__srv__detail__controller_mode_set__rosidl_typesupport_introspection_c__ControllerModeSet_service_type_support_handle.typesupport_identifier) {
    def_msg__srv__detail__controller_mode_set__rosidl_typesupport_introspection_c__ControllerModeSet_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)def_msg__srv__detail__controller_mode_set__rosidl_typesupport_introspection_c__ControllerModeSet_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, def_msg, srv, ControllerModeSet_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, def_msg, srv, ControllerModeSet_Response)()->data;
  }

  return &def_msg__srv__detail__controller_mode_set__rosidl_typesupport_introspection_c__ControllerModeSet_service_type_support_handle;
}
