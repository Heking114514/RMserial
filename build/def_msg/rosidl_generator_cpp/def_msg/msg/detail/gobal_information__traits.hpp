// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from def_msg:msg/GobalInformation.idl
// generated code does not contain a copyright notice

#ifndef DEF_MSG__MSG__DETAIL__GOBAL_INFORMATION__TRAITS_HPP_
#define DEF_MSG__MSG__DETAIL__GOBAL_INFORMATION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "def_msg/msg/detail/gobal_information__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace def_msg
{

namespace msg
{

inline void to_flow_style_yaml(
  const GobalInformation & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: battery
  {
    out << "battery: ";
    rosidl_generator_traits::value_to_yaml(msg.battery, out);
    out << ", ";
  }

  // member: life_extra
  {
    out << "life_extra: ";
    rosidl_generator_traits::value_to_yaml(msg.life_extra, out);
    out << ", ";
  }

  // member: color
  {
    out << "color: ";
    rosidl_generator_traits::value_to_yaml(msg.color, out);
    out << ", ";
  }

  // member: bullet_extra
  {
    out << "bullet_extra: ";
    rosidl_generator_traits::value_to_yaml(msg.bullet_extra, out);
    out << ", ";
  }

  // member: fault_flag
  {
    out << "fault_flag: ";
    rosidl_generator_traits::value_to_yaml(msg.fault_flag, out);
    out << ", ";
  }

  // member: launch
  {
    out << "launch: ";
    rosidl_generator_traits::value_to_yaml(msg.launch, out);
    out << ", ";
  }

  // member: arm
  {
    out << "arm: ";
    rosidl_generator_traits::value_to_yaml(msg.arm, out);
    out << ", ";
  }

  // member: base_hp_our
  {
    out << "base_hp_our: ";
    rosidl_generator_traits::value_to_yaml(msg.base_hp_our, out);
    out << ", ";
  }

  // member: base_hp_enemy
  {
    out << "base_hp_enemy: ";
    rosidl_generator_traits::value_to_yaml(msg.base_hp_enemy, out);
    out << ", ";
  }

  // member: judge_warning
  {
    out << "judge_warning: ";
    rosidl_generator_traits::value_to_yaml(msg.judge_warning, out);
    out << ", ";
  }

  // member: stage_remain_time
  {
    out << "stage_remain_time: ";
    rosidl_generator_traits::value_to_yaml(msg.stage_remain_time, out);
    out << ", ";
  }

  // member: game_progress
  {
    out << "game_progress: ";
    rosidl_generator_traits::value_to_yaml(msg.game_progress, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GobalInformation & msg,
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

  // member: battery
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "battery: ";
    rosidl_generator_traits::value_to_yaml(msg.battery, out);
    out << "\n";
  }

  // member: life_extra
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "life_extra: ";
    rosidl_generator_traits::value_to_yaml(msg.life_extra, out);
    out << "\n";
  }

  // member: color
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "color: ";
    rosidl_generator_traits::value_to_yaml(msg.color, out);
    out << "\n";
  }

  // member: bullet_extra
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bullet_extra: ";
    rosidl_generator_traits::value_to_yaml(msg.bullet_extra, out);
    out << "\n";
  }

  // member: fault_flag
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fault_flag: ";
    rosidl_generator_traits::value_to_yaml(msg.fault_flag, out);
    out << "\n";
  }

  // member: launch
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "launch: ";
    rosidl_generator_traits::value_to_yaml(msg.launch, out);
    out << "\n";
  }

  // member: arm
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "arm: ";
    rosidl_generator_traits::value_to_yaml(msg.arm, out);
    out << "\n";
  }

  // member: base_hp_our
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "base_hp_our: ";
    rosidl_generator_traits::value_to_yaml(msg.base_hp_our, out);
    out << "\n";
  }

  // member: base_hp_enemy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "base_hp_enemy: ";
    rosidl_generator_traits::value_to_yaml(msg.base_hp_enemy, out);
    out << "\n";
  }

  // member: judge_warning
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "judge_warning: ";
    rosidl_generator_traits::value_to_yaml(msg.judge_warning, out);
    out << "\n";
  }

  // member: stage_remain_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stage_remain_time: ";
    rosidl_generator_traits::value_to_yaml(msg.stage_remain_time, out);
    out << "\n";
  }

  // member: game_progress
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "game_progress: ";
    rosidl_generator_traits::value_to_yaml(msg.game_progress, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GobalInformation & msg, bool use_flow_style = false)
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
  const def_msg::msg::GobalInformation & msg,
  std::ostream & out, size_t indentation = 0)
{
  def_msg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use def_msg::msg::to_yaml() instead")]]
inline std::string to_yaml(const def_msg::msg::GobalInformation & msg)
{
  return def_msg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<def_msg::msg::GobalInformation>()
{
  return "def_msg::msg::GobalInformation";
}

template<>
inline const char * name<def_msg::msg::GobalInformation>()
{
  return "def_msg/msg/GobalInformation";
}

template<>
struct has_fixed_size<def_msg::msg::GobalInformation>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<def_msg::msg::GobalInformation>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<def_msg::msg::GobalInformation>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEF_MSG__MSG__DETAIL__GOBAL_INFORMATION__TRAITS_HPP_
