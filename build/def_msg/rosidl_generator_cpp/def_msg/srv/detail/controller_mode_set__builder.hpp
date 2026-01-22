// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from def_msg:srv/ControllerModeSet.idl
// generated code does not contain a copyright notice

#ifndef DEF_MSG__SRV__DETAIL__CONTROLLER_MODE_SET__BUILDER_HPP_
#define DEF_MSG__SRV__DETAIL__CONTROLLER_MODE_SET__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "def_msg/srv/detail/controller_mode_set__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace def_msg
{

namespace srv
{

namespace builder
{

class Init_ControllerModeSet_Request_mode
{
public:
  explicit Init_ControllerModeSet_Request_mode(::def_msg::srv::ControllerModeSet_Request & msg)
  : msg_(msg)
  {}
  ::def_msg::srv::ControllerModeSet_Request mode(::def_msg::srv::ControllerModeSet_Request::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return std::move(msg_);
  }

private:
  ::def_msg::srv::ControllerModeSet_Request msg_;
};

class Init_ControllerModeSet_Request_header
{
public:
  Init_ControllerModeSet_Request_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ControllerModeSet_Request_mode header(::def_msg::srv::ControllerModeSet_Request::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ControllerModeSet_Request_mode(msg_);
  }

private:
  ::def_msg::srv::ControllerModeSet_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::def_msg::srv::ControllerModeSet_Request>()
{
  return def_msg::srv::builder::Init_ControllerModeSet_Request_header();
}

}  // namespace def_msg


namespace def_msg
{

namespace srv
{

namespace builder
{

class Init_ControllerModeSet_Response_loop_times
{
public:
  explicit Init_ControllerModeSet_Response_loop_times(::def_msg::srv::ControllerModeSet_Response & msg)
  : msg_(msg)
  {}
  ::def_msg::srv::ControllerModeSet_Response loop_times(::def_msg::srv::ControllerModeSet_Response::_loop_times_type arg)
  {
    msg_.loop_times = std::move(arg);
    return std::move(msg_);
  }

private:
  ::def_msg::srv::ControllerModeSet_Response msg_;
};

class Init_ControllerModeSet_Response_result
{
public:
  Init_ControllerModeSet_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ControllerModeSet_Response_loop_times result(::def_msg::srv::ControllerModeSet_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return Init_ControllerModeSet_Response_loop_times(msg_);
  }

private:
  ::def_msg::srv::ControllerModeSet_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::def_msg::srv::ControllerModeSet_Response>()
{
  return def_msg::srv::builder::Init_ControllerModeSet_Response_result();
}

}  // namespace def_msg

#endif  // DEF_MSG__SRV__DETAIL__CONTROLLER_MODE_SET__BUILDER_HPP_
