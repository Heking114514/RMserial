// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from def_msg:msg/GimbleControl.idl
// generated code does not contain a copyright notice

#ifndef DEF_MSG__MSG__DETAIL__GIMBLE_CONTROL__STRUCT_HPP_
#define DEF_MSG__MSG__DETAIL__GIMBLE_CONTROL__STRUCT_HPP_

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
# define DEPRECATED__def_msg__msg__GimbleControl __attribute__((deprecated))
#else
# define DEPRECATED__def_msg__msg__GimbleControl __declspec(deprecated)
#endif

namespace def_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GimbleControl_
{
  using Type = GimbleControl_<ContainerAllocator>;

  explicit GimbleControl_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->yaw = 0.0;
      this->pitch = 0.0;
      this->roll = 0.0;
      this->fire_advise = false;
    }
  }

  explicit GimbleControl_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->yaw = 0.0;
      this->pitch = 0.0;
      this->roll = 0.0;
      this->fire_advise = false;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _yaw_type =
    double;
  _yaw_type yaw;
  using _pitch_type =
    double;
  _pitch_type pitch;
  using _roll_type =
    double;
  _roll_type roll;
  using _fire_advise_type =
    bool;
  _fire_advise_type fire_advise;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__yaw(
    const double & _arg)
  {
    this->yaw = _arg;
    return *this;
  }
  Type & set__pitch(
    const double & _arg)
  {
    this->pitch = _arg;
    return *this;
  }
  Type & set__roll(
    const double & _arg)
  {
    this->roll = _arg;
    return *this;
  }
  Type & set__fire_advise(
    const bool & _arg)
  {
    this->fire_advise = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    def_msg::msg::GimbleControl_<ContainerAllocator> *;
  using ConstRawPtr =
    const def_msg::msg::GimbleControl_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<def_msg::msg::GimbleControl_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<def_msg::msg::GimbleControl_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      def_msg::msg::GimbleControl_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<def_msg::msg::GimbleControl_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      def_msg::msg::GimbleControl_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<def_msg::msg::GimbleControl_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<def_msg::msg::GimbleControl_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<def_msg::msg::GimbleControl_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__def_msg__msg__GimbleControl
    std::shared_ptr<def_msg::msg::GimbleControl_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__def_msg__msg__GimbleControl
    std::shared_ptr<def_msg::msg::GimbleControl_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GimbleControl_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->yaw != other.yaw) {
      return false;
    }
    if (this->pitch != other.pitch) {
      return false;
    }
    if (this->roll != other.roll) {
      return false;
    }
    if (this->fire_advise != other.fire_advise) {
      return false;
    }
    return true;
  }
  bool operator!=(const GimbleControl_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GimbleControl_

// alias to use template instance with default allocator
using GimbleControl =
  def_msg::msg::GimbleControl_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace def_msg

#endif  // DEF_MSG__MSG__DETAIL__GIMBLE_CONTROL__STRUCT_HPP_
