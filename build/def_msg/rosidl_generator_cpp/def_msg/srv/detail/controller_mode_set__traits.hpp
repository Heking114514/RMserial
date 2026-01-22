// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from def_msg:srv/ControllerModeSet.idl
// generated code does not contain a copyright notice

#ifndef DEF_MSG__SRV__DETAIL__CONTROLLER_MODE_SET__TRAITS_HPP_
#define DEF_MSG__SRV__DETAIL__CONTROLLER_MODE_SET__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "def_msg/srv/detail/controller_mode_set__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace def_msg
{

namespace srv
{

inline void to_flow_style_yaml(
  const ControllerModeSet_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: mode
  {
    out << "mode: ";
    rosidl_generator_traits::value_to_yaml(msg.mode, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ControllerModeSet_Request & msg,
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

  // member: mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode: ";
    rosidl_generator_traits::value_to_yaml(msg.mode, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ControllerModeSet_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace def_msg

namespace rosidl_generator_traits
{

[[deprecated("use def_msg::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const def_msg::srv::ControllerModeSet_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  def_msg::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use def_msg::srv::to_yaml() instead")]]
inline std::string to_yaml(const def_msg::srv::ControllerModeSet_Request & msg)
{
  return def_msg::srv::to_yaml(msg);
}

template<>
inline const char * data_type<def_msg::srv::ControllerModeSet_Request>()
{
  return "def_msg::srv::ControllerModeSet_Request";
}

template<>
inline const char * name<def_msg::srv::ControllerModeSet_Request>()
{
  return "def_msg/srv/ControllerModeSet_Request";
}

template<>
struct has_fixed_size<def_msg::srv::ControllerModeSet_Request>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<def_msg::srv::ControllerModeSet_Request>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<def_msg::srv::ControllerModeSet_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace def_msg
{

namespace srv
{

inline void to_flow_style_yaml(
  const ControllerModeSet_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: result
  {
    out << "result: ";
    rosidl_generator_traits::value_to_yaml(msg.result, out);
    out << ", ";
  }

  // member: loop_times
  {
    out << "loop_times: ";
    rosidl_generator_traits::value_to_yaml(msg.loop_times, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ControllerModeSet_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result: ";
    rosidl_generator_traits::value_to_yaml(msg.result, out);
    out << "\n";
  }

  // member: loop_times
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "loop_times: ";
    rosidl_generator_traits::value_to_yaml(msg.loop_times, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ControllerModeSet_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace def_msg

namespace rosidl_generator_traits
{

[[deprecated("use def_msg::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const def_msg::srv::ControllerModeSet_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  def_msg::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use def_msg::srv::to_yaml() instead")]]
inline std::string to_yaml(const def_msg::srv::ControllerModeSet_Response & msg)
{
  return def_msg::srv::to_yaml(msg);
}

template<>
inline const char * data_type<def_msg::srv::ControllerModeSet_Response>()
{
  return "def_msg::srv::ControllerModeSet_Response";
}

template<>
inline const char * name<def_msg::srv::ControllerModeSet_Response>()
{
  return "def_msg/srv/ControllerModeSet_Response";
}

template<>
struct has_fixed_size<def_msg::srv::ControllerModeSet_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<def_msg::srv::ControllerModeSet_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<def_msg::srv::ControllerModeSet_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<def_msg::srv::ControllerModeSet>()
{
  return "def_msg::srv::ControllerModeSet";
}

template<>
inline const char * name<def_msg::srv::ControllerModeSet>()
{
  return "def_msg/srv/ControllerModeSet";
}

template<>
struct has_fixed_size<def_msg::srv::ControllerModeSet>
  : std::integral_constant<
    bool,
    has_fixed_size<def_msg::srv::ControllerModeSet_Request>::value &&
    has_fixed_size<def_msg::srv::ControllerModeSet_Response>::value
  >
{
};

template<>
struct has_bounded_size<def_msg::srv::ControllerModeSet>
  : std::integral_constant<
    bool,
    has_bounded_size<def_msg::srv::ControllerModeSet_Request>::value &&
    has_bounded_size<def_msg::srv::ControllerModeSet_Response>::value
  >
{
};

template<>
struct is_service<def_msg::srv::ControllerModeSet>
  : std::true_type
{
};

template<>
struct is_service_request<def_msg::srv::ControllerModeSet_Request>
  : std::true_type
{
};

template<>
struct is_service_response<def_msg::srv::ControllerModeSet_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // DEF_MSG__SRV__DETAIL__CONTROLLER_MODE_SET__TRAITS_HPP_
