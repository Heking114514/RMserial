// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from def_msg:msg/EmControl.idl
// generated code does not contain a copyright notice

#ifndef DEF_MSG__MSG__DETAIL__EM_CONTROL__BUILDER_HPP_
#define DEF_MSG__MSG__DETAIL__EM_CONTROL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "def_msg/msg/detail/em_control__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace def_msg
{

namespace msg
{

namespace builder
{

class Init_EmControl_stop_flag
{
public:
  explicit Init_EmControl_stop_flag(::def_msg::msg::EmControl & msg)
  : msg_(msg)
  {}
  ::def_msg::msg::EmControl stop_flag(::def_msg::msg::EmControl::_stop_flag_type arg)
  {
    msg_.stop_flag = std::move(arg);
    return std::move(msg_);
  }

private:
  ::def_msg::msg::EmControl msg_;
};

class Init_EmControl_header
{
public:
  Init_EmControl_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EmControl_stop_flag header(::def_msg::msg::EmControl::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_EmControl_stop_flag(msg_);
  }

private:
  ::def_msg::msg::EmControl msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::def_msg::msg::EmControl>()
{
  return def_msg::msg::builder::Init_EmControl_header();
}

}  // namespace def_msg

#endif  // DEF_MSG__MSG__DETAIL__EM_CONTROL__BUILDER_HPP_
