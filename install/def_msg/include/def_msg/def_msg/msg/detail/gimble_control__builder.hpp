// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from def_msg:msg/GimbleControl.idl
// generated code does not contain a copyright notice

#ifndef DEF_MSG__MSG__DETAIL__GIMBLE_CONTROL__BUILDER_HPP_
#define DEF_MSG__MSG__DETAIL__GIMBLE_CONTROL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "def_msg/msg/detail/gimble_control__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace def_msg
{

namespace msg
{

namespace builder
{

class Init_GimbleControl_fire_advise
{
public:
  explicit Init_GimbleControl_fire_advise(::def_msg::msg::GimbleControl & msg)
  : msg_(msg)
  {}
  ::def_msg::msg::GimbleControl fire_advise(::def_msg::msg::GimbleControl::_fire_advise_type arg)
  {
    msg_.fire_advise = std::move(arg);
    return std::move(msg_);
  }

private:
  ::def_msg::msg::GimbleControl msg_;
};

class Init_GimbleControl_roll
{
public:
  explicit Init_GimbleControl_roll(::def_msg::msg::GimbleControl & msg)
  : msg_(msg)
  {}
  Init_GimbleControl_fire_advise roll(::def_msg::msg::GimbleControl::_roll_type arg)
  {
    msg_.roll = std::move(arg);
    return Init_GimbleControl_fire_advise(msg_);
  }

private:
  ::def_msg::msg::GimbleControl msg_;
};

class Init_GimbleControl_pitch
{
public:
  explicit Init_GimbleControl_pitch(::def_msg::msg::GimbleControl & msg)
  : msg_(msg)
  {}
  Init_GimbleControl_roll pitch(::def_msg::msg::GimbleControl::_pitch_type arg)
  {
    msg_.pitch = std::move(arg);
    return Init_GimbleControl_roll(msg_);
  }

private:
  ::def_msg::msg::GimbleControl msg_;
};

class Init_GimbleControl_yaw
{
public:
  explicit Init_GimbleControl_yaw(::def_msg::msg::GimbleControl & msg)
  : msg_(msg)
  {}
  Init_GimbleControl_pitch yaw(::def_msg::msg::GimbleControl::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return Init_GimbleControl_pitch(msg_);
  }

private:
  ::def_msg::msg::GimbleControl msg_;
};

class Init_GimbleControl_header
{
public:
  Init_GimbleControl_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GimbleControl_yaw header(::def_msg::msg::GimbleControl::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_GimbleControl_yaw(msg_);
  }

private:
  ::def_msg::msg::GimbleControl msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::def_msg::msg::GimbleControl>()
{
  return def_msg::msg::builder::Init_GimbleControl_header();
}

}  // namespace def_msg

#endif  // DEF_MSG__MSG__DETAIL__GIMBLE_CONTROL__BUILDER_HPP_
