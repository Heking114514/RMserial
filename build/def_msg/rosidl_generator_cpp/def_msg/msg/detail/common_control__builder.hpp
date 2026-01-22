// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from def_msg:msg/CommonControl.idl
// generated code does not contain a copyright notice

#ifndef DEF_MSG__MSG__DETAIL__COMMON_CONTROL__BUILDER_HPP_
#define DEF_MSG__MSG__DETAIL__COMMON_CONTROL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "def_msg/msg/detail/common_control__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace def_msg
{

namespace msg
{

namespace builder
{

class Init_CommonControl_shoot
{
public:
  explicit Init_CommonControl_shoot(::def_msg::msg::CommonControl & msg)
  : msg_(msg)
  {}
  ::def_msg::msg::CommonControl shoot(::def_msg::msg::CommonControl::_shoot_type arg)
  {
    msg_.shoot = std::move(arg);
    return std::move(msg_);
  }

private:
  ::def_msg::msg::CommonControl msg_;
};

class Init_CommonControl_velocity_top
{
public:
  explicit Init_CommonControl_velocity_top(::def_msg::msg::CommonControl & msg)
  : msg_(msg)
  {}
  Init_CommonControl_shoot velocity_top(::def_msg::msg::CommonControl::_velocity_top_type arg)
  {
    msg_.velocity_top = std::move(arg);
    return Init_CommonControl_shoot(msg_);
  }

private:
  ::def_msg::msg::CommonControl msg_;
};

class Init_CommonControl_header
{
public:
  Init_CommonControl_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CommonControl_velocity_top header(::def_msg::msg::CommonControl::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_CommonControl_velocity_top(msg_);
  }

private:
  ::def_msg::msg::CommonControl msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::def_msg::msg::CommonControl>()
{
  return def_msg::msg::builder::Init_CommonControl_header();
}

}  // namespace def_msg

#endif  // DEF_MSG__MSG__DETAIL__COMMON_CONTROL__BUILDER_HPP_
