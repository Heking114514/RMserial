// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from def_msg:msg/GobalInformation.idl
// generated code does not contain a copyright notice

#ifndef DEF_MSG__MSG__DETAIL__GOBAL_INFORMATION__STRUCT_HPP_
#define DEF_MSG__MSG__DETAIL__GOBAL_INFORMATION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__def_msg__msg__GobalInformation __attribute__((deprecated))
#else
# define DEPRECATED__def_msg__msg__GobalInformation __declspec(deprecated)
#endif

namespace def_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GobalInformation_
{
  using Type = GobalInformation_<ContainerAllocator>;

  explicit GobalInformation_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->battery = 0.0f;
      this->life_extra = 0.0f;
      this->color = 0.0f;
      this->bullet_extra = 0.0f;
      this->fault_flag = 0.0f;
      this->launch = false;
      this->arm = false;
      this->base_hp_our = 0.0f;
      this->base_hp_enemy = 0.0f;
      this->judge_warning = 0.0f;
      this->stage_remain_time = 0.0f;
      this->game_progress = 0.0f;
    }
  }

  explicit GobalInformation_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->battery = 0.0f;
      this->life_extra = 0.0f;
      this->color = 0.0f;
      this->bullet_extra = 0.0f;
      this->fault_flag = 0.0f;
      this->launch = false;
      this->arm = false;
      this->base_hp_our = 0.0f;
      this->base_hp_enemy = 0.0f;
      this->judge_warning = 0.0f;
      this->stage_remain_time = 0.0f;
      this->game_progress = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _battery_type =
    float;
  _battery_type battery;
  using _life_extra_type =
    float;
  _life_extra_type life_extra;
  using _color_type =
    float;
  _color_type color;
  using _bullet_extra_type =
    float;
  _bullet_extra_type bullet_extra;
  using _fault_flag_type =
    float;
  _fault_flag_type fault_flag;
  using _launch_type =
    bool;
  _launch_type launch;
  using _arm_type =
    bool;
  _arm_type arm;
  using _base_hp_our_type =
    float;
  _base_hp_our_type base_hp_our;
  using _base_hp_enemy_type =
    float;
  _base_hp_enemy_type base_hp_enemy;
  using _judge_warning_type =
    float;
  _judge_warning_type judge_warning;
  using _stage_remain_time_type =
    float;
  _stage_remain_time_type stage_remain_time;
  using _game_progress_type =
    float;
  _game_progress_type game_progress;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__battery(
    const float & _arg)
  {
    this->battery = _arg;
    return *this;
  }
  Type & set__life_extra(
    const float & _arg)
  {
    this->life_extra = _arg;
    return *this;
  }
  Type & set__color(
    const float & _arg)
  {
    this->color = _arg;
    return *this;
  }
  Type & set__bullet_extra(
    const float & _arg)
  {
    this->bullet_extra = _arg;
    return *this;
  }
  Type & set__fault_flag(
    const float & _arg)
  {
    this->fault_flag = _arg;
    return *this;
  }
  Type & set__launch(
    const bool & _arg)
  {
    this->launch = _arg;
    return *this;
  }
  Type & set__arm(
    const bool & _arg)
  {
    this->arm = _arg;
    return *this;
  }
  Type & set__base_hp_our(
    const float & _arg)
  {
    this->base_hp_our = _arg;
    return *this;
  }
  Type & set__base_hp_enemy(
    const float & _arg)
  {
    this->base_hp_enemy = _arg;
    return *this;
  }
  Type & set__judge_warning(
    const float & _arg)
  {
    this->judge_warning = _arg;
    return *this;
  }
  Type & set__stage_remain_time(
    const float & _arg)
  {
    this->stage_remain_time = _arg;
    return *this;
  }
  Type & set__game_progress(
    const float & _arg)
  {
    this->game_progress = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    def_msg::msg::GobalInformation_<ContainerAllocator> *;
  using ConstRawPtr =
    const def_msg::msg::GobalInformation_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<def_msg::msg::GobalInformation_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<def_msg::msg::GobalInformation_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      def_msg::msg::GobalInformation_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<def_msg::msg::GobalInformation_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      def_msg::msg::GobalInformation_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<def_msg::msg::GobalInformation_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<def_msg::msg::GobalInformation_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<def_msg::msg::GobalInformation_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__def_msg__msg__GobalInformation
    std::shared_ptr<def_msg::msg::GobalInformation_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__def_msg__msg__GobalInformation
    std::shared_ptr<def_msg::msg::GobalInformation_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GobalInformation_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->battery != other.battery) {
      return false;
    }
    if (this->life_extra != other.life_extra) {
      return false;
    }
    if (this->color != other.color) {
      return false;
    }
    if (this->bullet_extra != other.bullet_extra) {
      return false;
    }
    if (this->fault_flag != other.fault_flag) {
      return false;
    }
    if (this->launch != other.launch) {
      return false;
    }
    if (this->arm != other.arm) {
      return false;
    }
    if (this->base_hp_our != other.base_hp_our) {
      return false;
    }
    if (this->base_hp_enemy != other.base_hp_enemy) {
      return false;
    }
    if (this->judge_warning != other.judge_warning) {
      return false;
    }
    if (this->stage_remain_time != other.stage_remain_time) {
      return false;
    }
    if (this->game_progress != other.game_progress) {
      return false;
    }
    return true;
  }
  bool operator!=(const GobalInformation_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GobalInformation_

// alias to use template instance with default allocator
using GobalInformation =
  def_msg::msg::GobalInformation_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace def_msg

#endif  // DEF_MSG__MSG__DETAIL__GOBAL_INFORMATION__STRUCT_HPP_
