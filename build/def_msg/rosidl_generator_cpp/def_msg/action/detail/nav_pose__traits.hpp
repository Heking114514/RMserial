// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from def_msg:action/NavPose.idl
// generated code does not contain a copyright notice

#ifndef DEF_MSG__ACTION__DETAIL__NAV_POSE__TRAITS_HPP_
#define DEF_MSG__ACTION__DETAIL__NAV_POSE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "def_msg/action/detail/nav_pose__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace def_msg
{

namespace action
{

inline void to_flow_style_yaml(
  const NavPose_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: x
  {
    if (msg.x.size() == 0) {
      out << "x: []";
    } else {
      out << "x: [";
      size_t pending_items = msg.x.size();
      for (auto item : msg.x) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: y
  {
    if (msg.y.size() == 0) {
      out << "y: []";
    } else {
      out << "y: [";
      size_t pending_items = msg.y.size();
      for (auto item : msg.y) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: w
  {
    if (msg.w.size() == 0) {
      out << "w: []";
    } else {
      out << "w: [";
      size_t pending_items = msg.w.size();
      for (auto item : msg.w) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: order
  {
    out << "order: ";
    rosidl_generator_traits::value_to_yaml(msg.order, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const NavPose_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.x.size() == 0) {
      out << "x: []\n";
    } else {
      out << "x:\n";
      for (auto item : msg.x) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.y.size() == 0) {
      out << "y: []\n";
    } else {
      out << "y:\n";
      for (auto item : msg.y) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: w
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.w.size() == 0) {
      out << "w: []\n";
    } else {
      out << "w:\n";
      for (auto item : msg.w) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: order
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "order: ";
    rosidl_generator_traits::value_to_yaml(msg.order, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const NavPose_Goal & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace def_msg

namespace rosidl_generator_traits
{

[[deprecated("use def_msg::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const def_msg::action::NavPose_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  def_msg::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use def_msg::action::to_yaml() instead")]]
inline std::string to_yaml(const def_msg::action::NavPose_Goal & msg)
{
  return def_msg::action::to_yaml(msg);
}

template<>
inline const char * data_type<def_msg::action::NavPose_Goal>()
{
  return "def_msg::action::NavPose_Goal";
}

template<>
inline const char * name<def_msg::action::NavPose_Goal>()
{
  return "def_msg/action/NavPose_Goal";
}

template<>
struct has_fixed_size<def_msg::action::NavPose_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<def_msg::action::NavPose_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<def_msg::action::NavPose_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace def_msg
{

namespace action
{

inline void to_flow_style_yaml(
  const NavPose_Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: reached
  {
    out << "reached: ";
    rosidl_generator_traits::value_to_yaml(msg.reached, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const NavPose_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: reached
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reached: ";
    rosidl_generator_traits::value_to_yaml(msg.reached, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const NavPose_Result & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace def_msg

namespace rosidl_generator_traits
{

[[deprecated("use def_msg::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const def_msg::action::NavPose_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  def_msg::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use def_msg::action::to_yaml() instead")]]
inline std::string to_yaml(const def_msg::action::NavPose_Result & msg)
{
  return def_msg::action::to_yaml(msg);
}

template<>
inline const char * data_type<def_msg::action::NavPose_Result>()
{
  return "def_msg::action::NavPose_Result";
}

template<>
inline const char * name<def_msg::action::NavPose_Result>()
{
  return "def_msg/action/NavPose_Result";
}

template<>
struct has_fixed_size<def_msg::action::NavPose_Result>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<def_msg::action::NavPose_Result>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<def_msg::action::NavPose_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace def_msg
{

namespace action
{

inline void to_flow_style_yaml(
  const NavPose_Feedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: dis_x
  {
    out << "dis_x: ";
    rosidl_generator_traits::value_to_yaml(msg.dis_x, out);
    out << ", ";
  }

  // member: dis_y
  {
    out << "dis_y: ";
    rosidl_generator_traits::value_to_yaml(msg.dis_y, out);
    out << ", ";
  }

  // member: dis_w
  {
    out << "dis_w: ";
    rosidl_generator_traits::value_to_yaml(msg.dis_w, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const NavPose_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: dis_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dis_x: ";
    rosidl_generator_traits::value_to_yaml(msg.dis_x, out);
    out << "\n";
  }

  // member: dis_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dis_y: ";
    rosidl_generator_traits::value_to_yaml(msg.dis_y, out);
    out << "\n";
  }

  // member: dis_w
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dis_w: ";
    rosidl_generator_traits::value_to_yaml(msg.dis_w, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const NavPose_Feedback & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace def_msg

namespace rosidl_generator_traits
{

[[deprecated("use def_msg::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const def_msg::action::NavPose_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  def_msg::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use def_msg::action::to_yaml() instead")]]
inline std::string to_yaml(const def_msg::action::NavPose_Feedback & msg)
{
  return def_msg::action::to_yaml(msg);
}

template<>
inline const char * data_type<def_msg::action::NavPose_Feedback>()
{
  return "def_msg::action::NavPose_Feedback";
}

template<>
inline const char * name<def_msg::action::NavPose_Feedback>()
{
  return "def_msg/action/NavPose_Feedback";
}

template<>
struct has_fixed_size<def_msg::action::NavPose_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<def_msg::action::NavPose_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<def_msg::action::NavPose_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "def_msg/action/detail/nav_pose__traits.hpp"

namespace def_msg
{

namespace action
{

inline void to_flow_style_yaml(
  const NavPose_SendGoal_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: goal
  {
    out << "goal: ";
    to_flow_style_yaml(msg.goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const NavPose_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_block_style_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const NavPose_SendGoal_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace def_msg

namespace rosidl_generator_traits
{

[[deprecated("use def_msg::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const def_msg::action::NavPose_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  def_msg::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use def_msg::action::to_yaml() instead")]]
inline std::string to_yaml(const def_msg::action::NavPose_SendGoal_Request & msg)
{
  return def_msg::action::to_yaml(msg);
}

template<>
inline const char * data_type<def_msg::action::NavPose_SendGoal_Request>()
{
  return "def_msg::action::NavPose_SendGoal_Request";
}

template<>
inline const char * name<def_msg::action::NavPose_SendGoal_Request>()
{
  return "def_msg/action/NavPose_SendGoal_Request";
}

template<>
struct has_fixed_size<def_msg::action::NavPose_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<def_msg::action::NavPose_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<def_msg::action::NavPose_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<def_msg::action::NavPose_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<def_msg::action::NavPose_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace def_msg
{

namespace action
{

inline void to_flow_style_yaml(
  const NavPose_SendGoal_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: accepted
  {
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const NavPose_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const NavPose_SendGoal_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace def_msg

namespace rosidl_generator_traits
{

[[deprecated("use def_msg::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const def_msg::action::NavPose_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  def_msg::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use def_msg::action::to_yaml() instead")]]
inline std::string to_yaml(const def_msg::action::NavPose_SendGoal_Response & msg)
{
  return def_msg::action::to_yaml(msg);
}

template<>
inline const char * data_type<def_msg::action::NavPose_SendGoal_Response>()
{
  return "def_msg::action::NavPose_SendGoal_Response";
}

template<>
inline const char * name<def_msg::action::NavPose_SendGoal_Response>()
{
  return "def_msg/action/NavPose_SendGoal_Response";
}

template<>
struct has_fixed_size<def_msg::action::NavPose_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<def_msg::action::NavPose_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<def_msg::action::NavPose_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<def_msg::action::NavPose_SendGoal>()
{
  return "def_msg::action::NavPose_SendGoal";
}

template<>
inline const char * name<def_msg::action::NavPose_SendGoal>()
{
  return "def_msg/action/NavPose_SendGoal";
}

template<>
struct has_fixed_size<def_msg::action::NavPose_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<def_msg::action::NavPose_SendGoal_Request>::value &&
    has_fixed_size<def_msg::action::NavPose_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<def_msg::action::NavPose_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<def_msg::action::NavPose_SendGoal_Request>::value &&
    has_bounded_size<def_msg::action::NavPose_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<def_msg::action::NavPose_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<def_msg::action::NavPose_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<def_msg::action::NavPose_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace def_msg
{

namespace action
{

inline void to_flow_style_yaml(
  const NavPose_GetResult_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const NavPose_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const NavPose_GetResult_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace def_msg

namespace rosidl_generator_traits
{

[[deprecated("use def_msg::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const def_msg::action::NavPose_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  def_msg::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use def_msg::action::to_yaml() instead")]]
inline std::string to_yaml(const def_msg::action::NavPose_GetResult_Request & msg)
{
  return def_msg::action::to_yaml(msg);
}

template<>
inline const char * data_type<def_msg::action::NavPose_GetResult_Request>()
{
  return "def_msg::action::NavPose_GetResult_Request";
}

template<>
inline const char * name<def_msg::action::NavPose_GetResult_Request>()
{
  return "def_msg/action/NavPose_GetResult_Request";
}

template<>
struct has_fixed_size<def_msg::action::NavPose_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<def_msg::action::NavPose_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<def_msg::action::NavPose_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "def_msg/action/detail/nav_pose__traits.hpp"

namespace def_msg
{

namespace action
{

inline void to_flow_style_yaml(
  const NavPose_GetResult_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const NavPose_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const NavPose_GetResult_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace def_msg

namespace rosidl_generator_traits
{

[[deprecated("use def_msg::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const def_msg::action::NavPose_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  def_msg::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use def_msg::action::to_yaml() instead")]]
inline std::string to_yaml(const def_msg::action::NavPose_GetResult_Response & msg)
{
  return def_msg::action::to_yaml(msg);
}

template<>
inline const char * data_type<def_msg::action::NavPose_GetResult_Response>()
{
  return "def_msg::action::NavPose_GetResult_Response";
}

template<>
inline const char * name<def_msg::action::NavPose_GetResult_Response>()
{
  return "def_msg/action/NavPose_GetResult_Response";
}

template<>
struct has_fixed_size<def_msg::action::NavPose_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<def_msg::action::NavPose_Result>::value> {};

template<>
struct has_bounded_size<def_msg::action::NavPose_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<def_msg::action::NavPose_Result>::value> {};

template<>
struct is_message<def_msg::action::NavPose_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<def_msg::action::NavPose_GetResult>()
{
  return "def_msg::action::NavPose_GetResult";
}

template<>
inline const char * name<def_msg::action::NavPose_GetResult>()
{
  return "def_msg/action/NavPose_GetResult";
}

template<>
struct has_fixed_size<def_msg::action::NavPose_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<def_msg::action::NavPose_GetResult_Request>::value &&
    has_fixed_size<def_msg::action::NavPose_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<def_msg::action::NavPose_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<def_msg::action::NavPose_GetResult_Request>::value &&
    has_bounded_size<def_msg::action::NavPose_GetResult_Response>::value
  >
{
};

template<>
struct is_service<def_msg::action::NavPose_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<def_msg::action::NavPose_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<def_msg::action::NavPose_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "def_msg/action/detail/nav_pose__traits.hpp"

namespace def_msg
{

namespace action
{

inline void to_flow_style_yaml(
  const NavPose_FeedbackMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: feedback
  {
    out << "feedback: ";
    to_flow_style_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const NavPose_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_block_style_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const NavPose_FeedbackMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace def_msg

namespace rosidl_generator_traits
{

[[deprecated("use def_msg::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const def_msg::action::NavPose_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  def_msg::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use def_msg::action::to_yaml() instead")]]
inline std::string to_yaml(const def_msg::action::NavPose_FeedbackMessage & msg)
{
  return def_msg::action::to_yaml(msg);
}

template<>
inline const char * data_type<def_msg::action::NavPose_FeedbackMessage>()
{
  return "def_msg::action::NavPose_FeedbackMessage";
}

template<>
inline const char * name<def_msg::action::NavPose_FeedbackMessage>()
{
  return "def_msg/action/NavPose_FeedbackMessage";
}

template<>
struct has_fixed_size<def_msg::action::NavPose_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<def_msg::action::NavPose_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<def_msg::action::NavPose_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<def_msg::action::NavPose_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<def_msg::action::NavPose_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<def_msg::action::NavPose>
  : std::true_type
{
};

template<>
struct is_action_goal<def_msg::action::NavPose_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<def_msg::action::NavPose_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<def_msg::action::NavPose_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // DEF_MSG__ACTION__DETAIL__NAV_POSE__TRAITS_HPP_
