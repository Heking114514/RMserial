// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from def_msg:msg/CommonControl.idl
// generated code does not contain a copyright notice

#ifndef DEF_MSG__MSG__DETAIL__COMMON_CONTROL__STRUCT_HPP_
#define DEF_MSG__MSG__DETAIL__COMMON_CONTROL__STRUCT_HPP_

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
# define DEPRECATED__def_msg__msg__CommonControl __attribute__((deprecated))
#else
# define DEPRECATED__def_msg__msg__CommonControl __declspec(deprecated)
#endif

namespace def_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CommonControl_
{
  using Type = CommonControl_<ContainerAllocator>;

  explicit CommonControl_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->velocity_top = 0.0f;
      this->shoot = false;
    }
  }

  explicit CommonControl_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->velocity_top = 0.0f;
      this->shoot = false;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _velocity_top_type =
    float;
  _velocity_top_type velocity_top;
  using _shoot_type =
    bool;
  _shoot_type shoot;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__velocity_top(
    const float & _arg)
  {
    this->velocity_top = _arg;
    return *this;
  }
  Type & set__shoot(
    const bool & _arg)
  {
    this->shoot = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    def_msg::msg::CommonControl_<ContainerAllocator> *;
  using ConstRawPtr =
    const def_msg::msg::CommonControl_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<def_msg::msg::CommonControl_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<def_msg::msg::CommonControl_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      def_msg::msg::CommonControl_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<def_msg::msg::CommonControl_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      def_msg::msg::CommonControl_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<def_msg::msg::CommonControl_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<def_msg::msg::CommonControl_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<def_msg::msg::CommonControl_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__def_msg__msg__CommonControl
    std::shared_ptr<def_msg::msg::CommonControl_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__def_msg__msg__CommonControl
    std::shared_ptr<def_msg::msg::CommonControl_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CommonControl_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->velocity_top != other.velocity_top) {
      return false;
    }
    if (this->shoot != other.shoot) {
      return false;
    }
    return true;
  }
  bool operator!=(const CommonControl_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CommonControl_

// alias to use template instance with default allocator
using CommonControl =
  def_msg::msg::CommonControl_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace def_msg

#endif  // DEF_MSG__MSG__DETAIL__COMMON_CONTROL__STRUCT_HPP_
