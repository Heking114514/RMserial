// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from def_msg:srv/HeartBeat.idl
// generated code does not contain a copyright notice

#ifndef DEF_MSG__SRV__DETAIL__HEART_BEAT__STRUCT_HPP_
#define DEF_MSG__SRV__DETAIL__HEART_BEAT__STRUCT_HPP_

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
# define DEPRECATED__def_msg__srv__HeartBeat_Request __attribute__((deprecated))
#else
# define DEPRECATED__def_msg__srv__HeartBeat_Request __declspec(deprecated)
#endif

namespace def_msg
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct HeartBeat_Request_
{
  using Type = HeartBeat_Request_<ContainerAllocator>;

  explicit HeartBeat_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->set_launch = false;
      this->set_arm = false;
      this->fault_flag = 0l;
    }
  }

  explicit HeartBeat_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->set_launch = false;
      this->set_arm = false;
      this->fault_flag = 0l;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _set_launch_type =
    bool;
  _set_launch_type set_launch;
  using _set_arm_type =
    bool;
  _set_arm_type set_arm;
  using _fault_flag_type =
    int32_t;
  _fault_flag_type fault_flag;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__set_launch(
    const bool & _arg)
  {
    this->set_launch = _arg;
    return *this;
  }
  Type & set__set_arm(
    const bool & _arg)
  {
    this->set_arm = _arg;
    return *this;
  }
  Type & set__fault_flag(
    const int32_t & _arg)
  {
    this->fault_flag = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    def_msg::srv::HeartBeat_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const def_msg::srv::HeartBeat_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<def_msg::srv::HeartBeat_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<def_msg::srv::HeartBeat_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      def_msg::srv::HeartBeat_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<def_msg::srv::HeartBeat_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      def_msg::srv::HeartBeat_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<def_msg::srv::HeartBeat_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<def_msg::srv::HeartBeat_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<def_msg::srv::HeartBeat_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__def_msg__srv__HeartBeat_Request
    std::shared_ptr<def_msg::srv::HeartBeat_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__def_msg__srv__HeartBeat_Request
    std::shared_ptr<def_msg::srv::HeartBeat_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const HeartBeat_Request_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->set_launch != other.set_launch) {
      return false;
    }
    if (this->set_arm != other.set_arm) {
      return false;
    }
    if (this->fault_flag != other.fault_flag) {
      return false;
    }
    return true;
  }
  bool operator!=(const HeartBeat_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct HeartBeat_Request_

// alias to use template instance with default allocator
using HeartBeat_Request =
  def_msg::srv::HeartBeat_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace def_msg


#ifndef _WIN32
# define DEPRECATED__def_msg__srv__HeartBeat_Response __attribute__((deprecated))
#else
# define DEPRECATED__def_msg__srv__HeartBeat_Response __declspec(deprecated)
#endif

namespace def_msg
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct HeartBeat_Response_
{
  using Type = HeartBeat_Response_<ContainerAllocator>;

  explicit HeartBeat_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = false;
    }
  }

  explicit HeartBeat_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = false;
    }
  }

  // field types and members
  using _result_type =
    bool;
  _result_type result;

  // setters for named parameter idiom
  Type & set__result(
    const bool & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    def_msg::srv::HeartBeat_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const def_msg::srv::HeartBeat_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<def_msg::srv::HeartBeat_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<def_msg::srv::HeartBeat_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      def_msg::srv::HeartBeat_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<def_msg::srv::HeartBeat_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      def_msg::srv::HeartBeat_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<def_msg::srv::HeartBeat_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<def_msg::srv::HeartBeat_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<def_msg::srv::HeartBeat_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__def_msg__srv__HeartBeat_Response
    std::shared_ptr<def_msg::srv::HeartBeat_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__def_msg__srv__HeartBeat_Response
    std::shared_ptr<def_msg::srv::HeartBeat_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const HeartBeat_Response_ & other) const
  {
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const HeartBeat_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct HeartBeat_Response_

// alias to use template instance with default allocator
using HeartBeat_Response =
  def_msg::srv::HeartBeat_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace def_msg

namespace def_msg
{

namespace srv
{

struct HeartBeat
{
  using Request = def_msg::srv::HeartBeat_Request;
  using Response = def_msg::srv::HeartBeat_Response;
};

}  // namespace srv

}  // namespace def_msg

#endif  // DEF_MSG__SRV__DETAIL__HEART_BEAT__STRUCT_HPP_
