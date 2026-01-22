// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from def_msg:msg/EmControl.idl
// generated code does not contain a copyright notice

#ifndef DEF_MSG__MSG__DETAIL__EM_CONTROL__STRUCT_HPP_
#define DEF_MSG__MSG__DETAIL__EM_CONTROL__STRUCT_HPP_

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
# define DEPRECATED__def_msg__msg__EmControl __attribute__((deprecated))
#else
# define DEPRECATED__def_msg__msg__EmControl __declspec(deprecated)
#endif

namespace def_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct EmControl_
{
  using Type = EmControl_<ContainerAllocator>;

  explicit EmControl_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->stop_flag = false;
    }
  }

  explicit EmControl_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->stop_flag = false;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _stop_flag_type =
    bool;
  _stop_flag_type stop_flag;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__stop_flag(
    const bool & _arg)
  {
    this->stop_flag = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    def_msg::msg::EmControl_<ContainerAllocator> *;
  using ConstRawPtr =
    const def_msg::msg::EmControl_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<def_msg::msg::EmControl_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<def_msg::msg::EmControl_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      def_msg::msg::EmControl_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<def_msg::msg::EmControl_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      def_msg::msg::EmControl_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<def_msg::msg::EmControl_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<def_msg::msg::EmControl_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<def_msg::msg::EmControl_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__def_msg__msg__EmControl
    std::shared_ptr<def_msg::msg::EmControl_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__def_msg__msg__EmControl
    std::shared_ptr<def_msg::msg::EmControl_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EmControl_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->stop_flag != other.stop_flag) {
      return false;
    }
    return true;
  }
  bool operator!=(const EmControl_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EmControl_

// alias to use template instance with default allocator
using EmControl =
  def_msg::msg::EmControl_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace def_msg

#endif  // DEF_MSG__MSG__DETAIL__EM_CONTROL__STRUCT_HPP_
