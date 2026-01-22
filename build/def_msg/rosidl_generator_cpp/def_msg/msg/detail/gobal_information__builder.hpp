// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from def_msg:msg/GobalInformation.idl
// generated code does not contain a copyright notice

#ifndef DEF_MSG__MSG__DETAIL__GOBAL_INFORMATION__BUILDER_HPP_
#define DEF_MSG__MSG__DETAIL__GOBAL_INFORMATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "def_msg/msg/detail/gobal_information__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace def_msg
{

namespace msg
{

namespace builder
{

class Init_GobalInformation_game_progress
{
public:
  explicit Init_GobalInformation_game_progress(::def_msg::msg::GobalInformation & msg)
  : msg_(msg)
  {}
  ::def_msg::msg::GobalInformation game_progress(::def_msg::msg::GobalInformation::_game_progress_type arg)
  {
    msg_.game_progress = std::move(arg);
    return std::move(msg_);
  }

private:
  ::def_msg::msg::GobalInformation msg_;
};

class Init_GobalInformation_stage_remain_time
{
public:
  explicit Init_GobalInformation_stage_remain_time(::def_msg::msg::GobalInformation & msg)
  : msg_(msg)
  {}
  Init_GobalInformation_game_progress stage_remain_time(::def_msg::msg::GobalInformation::_stage_remain_time_type arg)
  {
    msg_.stage_remain_time = std::move(arg);
    return Init_GobalInformation_game_progress(msg_);
  }

private:
  ::def_msg::msg::GobalInformation msg_;
};

class Init_GobalInformation_judge_warning
{
public:
  explicit Init_GobalInformation_judge_warning(::def_msg::msg::GobalInformation & msg)
  : msg_(msg)
  {}
  Init_GobalInformation_stage_remain_time judge_warning(::def_msg::msg::GobalInformation::_judge_warning_type arg)
  {
    msg_.judge_warning = std::move(arg);
    return Init_GobalInformation_stage_remain_time(msg_);
  }

private:
  ::def_msg::msg::GobalInformation msg_;
};

class Init_GobalInformation_base_hp_enemy
{
public:
  explicit Init_GobalInformation_base_hp_enemy(::def_msg::msg::GobalInformation & msg)
  : msg_(msg)
  {}
  Init_GobalInformation_judge_warning base_hp_enemy(::def_msg::msg::GobalInformation::_base_hp_enemy_type arg)
  {
    msg_.base_hp_enemy = std::move(arg);
    return Init_GobalInformation_judge_warning(msg_);
  }

private:
  ::def_msg::msg::GobalInformation msg_;
};

class Init_GobalInformation_base_hp_our
{
public:
  explicit Init_GobalInformation_base_hp_our(::def_msg::msg::GobalInformation & msg)
  : msg_(msg)
  {}
  Init_GobalInformation_base_hp_enemy base_hp_our(::def_msg::msg::GobalInformation::_base_hp_our_type arg)
  {
    msg_.base_hp_our = std::move(arg);
    return Init_GobalInformation_base_hp_enemy(msg_);
  }

private:
  ::def_msg::msg::GobalInformation msg_;
};

class Init_GobalInformation_arm
{
public:
  explicit Init_GobalInformation_arm(::def_msg::msg::GobalInformation & msg)
  : msg_(msg)
  {}
  Init_GobalInformation_base_hp_our arm(::def_msg::msg::GobalInformation::_arm_type arg)
  {
    msg_.arm = std::move(arg);
    return Init_GobalInformation_base_hp_our(msg_);
  }

private:
  ::def_msg::msg::GobalInformation msg_;
};

class Init_GobalInformation_launch
{
public:
  explicit Init_GobalInformation_launch(::def_msg::msg::GobalInformation & msg)
  : msg_(msg)
  {}
  Init_GobalInformation_arm launch(::def_msg::msg::GobalInformation::_launch_type arg)
  {
    msg_.launch = std::move(arg);
    return Init_GobalInformation_arm(msg_);
  }

private:
  ::def_msg::msg::GobalInformation msg_;
};

class Init_GobalInformation_fault_flag
{
public:
  explicit Init_GobalInformation_fault_flag(::def_msg::msg::GobalInformation & msg)
  : msg_(msg)
  {}
  Init_GobalInformation_launch fault_flag(::def_msg::msg::GobalInformation::_fault_flag_type arg)
  {
    msg_.fault_flag = std::move(arg);
    return Init_GobalInformation_launch(msg_);
  }

private:
  ::def_msg::msg::GobalInformation msg_;
};

class Init_GobalInformation_bullet_extra
{
public:
  explicit Init_GobalInformation_bullet_extra(::def_msg::msg::GobalInformation & msg)
  : msg_(msg)
  {}
  Init_GobalInformation_fault_flag bullet_extra(::def_msg::msg::GobalInformation::_bullet_extra_type arg)
  {
    msg_.bullet_extra = std::move(arg);
    return Init_GobalInformation_fault_flag(msg_);
  }

private:
  ::def_msg::msg::GobalInformation msg_;
};

class Init_GobalInformation_color
{
public:
  explicit Init_GobalInformation_color(::def_msg::msg::GobalInformation & msg)
  : msg_(msg)
  {}
  Init_GobalInformation_bullet_extra color(::def_msg::msg::GobalInformation::_color_type arg)
  {
    msg_.color = std::move(arg);
    return Init_GobalInformation_bullet_extra(msg_);
  }

private:
  ::def_msg::msg::GobalInformation msg_;
};

class Init_GobalInformation_life_extra
{
public:
  explicit Init_GobalInformation_life_extra(::def_msg::msg::GobalInformation & msg)
  : msg_(msg)
  {}
  Init_GobalInformation_color life_extra(::def_msg::msg::GobalInformation::_life_extra_type arg)
  {
    msg_.life_extra = std::move(arg);
    return Init_GobalInformation_color(msg_);
  }

private:
  ::def_msg::msg::GobalInformation msg_;
};

class Init_GobalInformation_battery
{
public:
  explicit Init_GobalInformation_battery(::def_msg::msg::GobalInformation & msg)
  : msg_(msg)
  {}
  Init_GobalInformation_life_extra battery(::def_msg::msg::GobalInformation::_battery_type arg)
  {
    msg_.battery = std::move(arg);
    return Init_GobalInformation_life_extra(msg_);
  }

private:
  ::def_msg::msg::GobalInformation msg_;
};

class Init_GobalInformation_header
{
public:
  Init_GobalInformation_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GobalInformation_battery header(::def_msg::msg::GobalInformation::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_GobalInformation_battery(msg_);
  }

private:
  ::def_msg::msg::GobalInformation msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::def_msg::msg::GobalInformation>()
{
  return def_msg::msg::builder::Init_GobalInformation_header();
}

}  // namespace def_msg

#endif  // DEF_MSG__MSG__DETAIL__GOBAL_INFORMATION__BUILDER_HPP_
