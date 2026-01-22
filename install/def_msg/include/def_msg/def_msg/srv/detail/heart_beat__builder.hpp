// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from def_msg:srv/HeartBeat.idl
// generated code does not contain a copyright notice

#ifndef DEF_MSG__SRV__DETAIL__HEART_BEAT__BUILDER_HPP_
#define DEF_MSG__SRV__DETAIL__HEART_BEAT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "def_msg/srv/detail/heart_beat__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace def_msg
{

namespace srv
{

namespace builder
{

class Init_HeartBeat_Request_fault_flag
{
public:
  explicit Init_HeartBeat_Request_fault_flag(::def_msg::srv::HeartBeat_Request & msg)
  : msg_(msg)
  {}
  ::def_msg::srv::HeartBeat_Request fault_flag(::def_msg::srv::HeartBeat_Request::_fault_flag_type arg)
  {
    msg_.fault_flag = std::move(arg);
    return std::move(msg_);
  }

private:
  ::def_msg::srv::HeartBeat_Request msg_;
};

class Init_HeartBeat_Request_set_arm
{
public:
  explicit Init_HeartBeat_Request_set_arm(::def_msg::srv::HeartBeat_Request & msg)
  : msg_(msg)
  {}
  Init_HeartBeat_Request_fault_flag set_arm(::def_msg::srv::HeartBeat_Request::_set_arm_type arg)
  {
    msg_.set_arm = std::move(arg);
    return Init_HeartBeat_Request_fault_flag(msg_);
  }

private:
  ::def_msg::srv::HeartBeat_Request msg_;
};

class Init_HeartBeat_Request_set_launch
{
public:
  explicit Init_HeartBeat_Request_set_launch(::def_msg::srv::HeartBeat_Request & msg)
  : msg_(msg)
  {}
  Init_HeartBeat_Request_set_arm set_launch(::def_msg::srv::HeartBeat_Request::_set_launch_type arg)
  {
    msg_.set_launch = std::move(arg);
    return Init_HeartBeat_Request_set_arm(msg_);
  }

private:
  ::def_msg::srv::HeartBeat_Request msg_;
};

class Init_HeartBeat_Request_header
{
public:
  Init_HeartBeat_Request_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HeartBeat_Request_set_launch header(::def_msg::srv::HeartBeat_Request::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_HeartBeat_Request_set_launch(msg_);
  }

private:
  ::def_msg::srv::HeartBeat_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::def_msg::srv::HeartBeat_Request>()
{
  return def_msg::srv::builder::Init_HeartBeat_Request_header();
}

}  // namespace def_msg


namespace def_msg
{

namespace srv
{

namespace builder
{

class Init_HeartBeat_Response_result
{
public:
  Init_HeartBeat_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::def_msg::srv::HeartBeat_Response result(::def_msg::srv::HeartBeat_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::def_msg::srv::HeartBeat_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::def_msg::srv::HeartBeat_Response>()
{
  return def_msg::srv::builder::Init_HeartBeat_Response_result();
}

}  // namespace def_msg

#endif  // DEF_MSG__SRV__DETAIL__HEART_BEAT__BUILDER_HPP_
