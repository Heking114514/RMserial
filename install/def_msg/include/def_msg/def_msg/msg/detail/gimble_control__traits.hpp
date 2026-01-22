// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from def_msg:msg/GimbleControl.idl
// generated code does not contain a copyright notice

#ifndef DEF_MSG__MSG__DETAIL__GIMBLE_CONTROL__TRAITS_HPP_
#define DEF_MSG__MSG__DETAIL__GIMBLE_CONTROL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "def_msg/msg/detail/gimble_control__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace def_msg
{

namespace msg
{

inline void to_flow_style_yaml(
  const GimbleControl & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: yaw
  {
    out << "yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw, out);
    out << ", ";
  }

  // member: pitch
  {
    out << "pitch: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch, out);
    out << ", ";
  }

  // member: roll
  {
    out << "roll: ";
    rosidl_generator_traits::value_to_yaml(msg.roll, out);
    out << ", ";
  }

  // member: fire_advise
  {
    out << "fire_advise: ";
    rosidl_generator_traits::value_to_yaml(msg.fire_advise, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GimbleControl & msg,
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

  // member: yaw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw, out);
    out << "\n";
  }

  // member: pitch
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pitch: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch, out);
    out << "\n";
  }

  // member: roll
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "roll: ";
    rosidl_generator_traits::value_to_yaml(msg.roll, out);
    out << "\n";
  }

  // member: fire_advise
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fire_advise: ";
    rosidl_generator_traits::value_to_yaml(msg.fire_advise, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GimbleControl & msg, bool use_flow_style = false)
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
  const def_msg::msg::GimbleControl & msg,
  std::ostream & out, size_t indentation = 0)
{
  def_msg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use def_msg::msg::to_yaml() instead")]]
inline std::string to_yaml(const def_msg::msg::GimbleControl & msg)
{
  return def_msg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<def_msg::msg::GimbleControl>()
{
  return "def_msg::msg::GimbleControl";
}

template<>
inline const char * name<def_msg::msg::GimbleControl>()
{
  return "def_msg/msg/GimbleControl";
}

template<>
struct has_fixed_size<def_msg::msg::GimbleControl>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<def_msg::msg::GimbleControl>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<def_msg::msg::GimbleControl>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEF_MSG__MSG__DETAIL__GIMBLE_CONTROL__TRAITS_HPP_
