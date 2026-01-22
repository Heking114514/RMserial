// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from def_msg:msg/CommonControl.idl
// generated code does not contain a copyright notice

#ifndef DEF_MSG__MSG__DETAIL__COMMON_CONTROL__TRAITS_HPP_
#define DEF_MSG__MSG__DETAIL__COMMON_CONTROL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "def_msg/msg/detail/common_control__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace def_msg
{

namespace msg
{

inline void to_flow_style_yaml(
  const CommonControl & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: velocity_top
  {
    out << "velocity_top: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity_top, out);
    out << ", ";
  }

  // member: shoot
  {
    out << "shoot: ";
    rosidl_generator_traits::value_to_yaml(msg.shoot, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CommonControl & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: velocity_top
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velocity_top: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity_top, out);
    out << "\n";
  }

  // member: shoot
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "shoot: ";
    rosidl_generator_traits::value_to_yaml(msg.shoot, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CommonControl & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace def_msg

namespace rosidl_generator_traits
{

[[deprecated("use def_msg::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const def_msg::msg::CommonControl & msg,
  std::ostream & out, size_t indentation = 0)
{
  def_msg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use def_msg::msg::to_yaml() instead")]]
inline std::string to_yaml(const def_msg::msg::CommonControl & msg)
{
  return def_msg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<def_msg::msg::CommonControl>()
{
  return "def_msg::msg::CommonControl";
}

template<>
inline const char * name<def_msg::msg::CommonControl>()
{
  return "def_msg/msg/CommonControl";
}

template<>
struct has_fixed_size<def_msg::msg::CommonControl>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<def_msg::msg::CommonControl>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<def_msg::msg::CommonControl>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEF_MSG__MSG__DETAIL__COMMON_CONTROL__TRAITS_HPP_
