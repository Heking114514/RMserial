// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from def_msg:msg/EmControl.idl
// generated code does not contain a copyright notice

#ifndef DEF_MSG__MSG__DETAIL__EM_CONTROL__TRAITS_HPP_
#define DEF_MSG__MSG__DETAIL__EM_CONTROL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "def_msg/msg/detail/em_control__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace def_msg
{

namespace msg
{

inline void to_flow_style_yaml(
  const EmControl & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: stop_flag
  {
    out << "stop_flag: ";
    rosidl_generator_traits::value_to_yaml(msg.stop_flag, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const EmControl & msg,
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

  // member: stop_flag
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stop_flag: ";
    rosidl_generator_traits::value_to_yaml(msg.stop_flag, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const EmControl & msg, bool use_flow_style = false)
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
  const def_msg::msg::EmControl & msg,
  std::ostream & out, size_t indentation = 0)
{
  def_msg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use def_msg::msg::to_yaml() instead")]]
inline std::string to_yaml(const def_msg::msg::EmControl & msg)
{
  return def_msg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<def_msg::msg::EmControl>()
{
  return "def_msg::msg::EmControl";
}

template<>
inline const char * name<def_msg::msg::EmControl>()
{
  return "def_msg/msg/EmControl";
}

template<>
struct has_fixed_size<def_msg::msg::EmControl>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<def_msg::msg::EmControl>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<def_msg::msg::EmControl>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEF_MSG__MSG__DETAIL__EM_CONTROL__TRAITS_HPP_
