// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from def_msg:action/NavPose.idl
// generated code does not contain a copyright notice

#ifndef DEF_MSG__ACTION__DETAIL__NAV_POSE__STRUCT_HPP_
#define DEF_MSG__ACTION__DETAIL__NAV_POSE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__def_msg__action__NavPose_Goal __attribute__((deprecated))
#else
# define DEPRECATED__def_msg__action__NavPose_Goal __declspec(deprecated)
#endif

namespace def_msg
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct NavPose_Goal_
{
  using Type = NavPose_Goal_<ContainerAllocator>;

  explicit NavPose_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->order = 0l;
    }
  }

  explicit NavPose_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->order = 0l;
    }
  }

  // field types and members
  using _x_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _x_type x;
  using _y_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _y_type y;
  using _w_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _w_type w;
  using _order_type =
    int32_t;
  _order_type order;

  // setters for named parameter idiom
  Type & set__x(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__w(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->w = _arg;
    return *this;
  }
  Type & set__order(
    const int32_t & _arg)
  {
    this->order = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    def_msg::action::NavPose_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const def_msg::action::NavPose_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<def_msg::action::NavPose_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<def_msg::action::NavPose_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      def_msg::action::NavPose_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<def_msg::action::NavPose_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      def_msg::action::NavPose_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<def_msg::action::NavPose_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<def_msg::action::NavPose_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<def_msg::action::NavPose_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__def_msg__action__NavPose_Goal
    std::shared_ptr<def_msg::action::NavPose_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__def_msg__action__NavPose_Goal
    std::shared_ptr<def_msg::action::NavPose_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NavPose_Goal_ & other) const
  {
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->w != other.w) {
      return false;
    }
    if (this->order != other.order) {
      return false;
    }
    return true;
  }
  bool operator!=(const NavPose_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NavPose_Goal_

// alias to use template instance with default allocator
using NavPose_Goal =
  def_msg::action::NavPose_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace def_msg


#ifndef _WIN32
# define DEPRECATED__def_msg__action__NavPose_Result __attribute__((deprecated))
#else
# define DEPRECATED__def_msg__action__NavPose_Result __declspec(deprecated)
#endif

namespace def_msg
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct NavPose_Result_
{
  using Type = NavPose_Result_<ContainerAllocator>;

  explicit NavPose_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->reached = false;
    }
  }

  explicit NavPose_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->reached = false;
    }
  }

  // field types and members
  using _reached_type =
    bool;
  _reached_type reached;

  // setters for named parameter idiom
  Type & set__reached(
    const bool & _arg)
  {
    this->reached = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    def_msg::action::NavPose_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const def_msg::action::NavPose_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<def_msg::action::NavPose_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<def_msg::action::NavPose_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      def_msg::action::NavPose_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<def_msg::action::NavPose_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      def_msg::action::NavPose_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<def_msg::action::NavPose_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<def_msg::action::NavPose_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<def_msg::action::NavPose_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__def_msg__action__NavPose_Result
    std::shared_ptr<def_msg::action::NavPose_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__def_msg__action__NavPose_Result
    std::shared_ptr<def_msg::action::NavPose_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NavPose_Result_ & other) const
  {
    if (this->reached != other.reached) {
      return false;
    }
    return true;
  }
  bool operator!=(const NavPose_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NavPose_Result_

// alias to use template instance with default allocator
using NavPose_Result =
  def_msg::action::NavPose_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace def_msg


#ifndef _WIN32
# define DEPRECATED__def_msg__action__NavPose_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__def_msg__action__NavPose_Feedback __declspec(deprecated)
#endif

namespace def_msg
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct NavPose_Feedback_
{
  using Type = NavPose_Feedback_<ContainerAllocator>;

  explicit NavPose_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->dis_x = 0.0f;
      this->dis_y = 0.0f;
      this->dis_w = 0.0f;
    }
  }

  explicit NavPose_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->dis_x = 0.0f;
      this->dis_y = 0.0f;
      this->dis_w = 0.0f;
    }
  }

  // field types and members
  using _dis_x_type =
    float;
  _dis_x_type dis_x;
  using _dis_y_type =
    float;
  _dis_y_type dis_y;
  using _dis_w_type =
    float;
  _dis_w_type dis_w;

  // setters for named parameter idiom
  Type & set__dis_x(
    const float & _arg)
  {
    this->dis_x = _arg;
    return *this;
  }
  Type & set__dis_y(
    const float & _arg)
  {
    this->dis_y = _arg;
    return *this;
  }
  Type & set__dis_w(
    const float & _arg)
  {
    this->dis_w = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    def_msg::action::NavPose_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const def_msg::action::NavPose_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<def_msg::action::NavPose_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<def_msg::action::NavPose_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      def_msg::action::NavPose_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<def_msg::action::NavPose_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      def_msg::action::NavPose_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<def_msg::action::NavPose_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<def_msg::action::NavPose_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<def_msg::action::NavPose_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__def_msg__action__NavPose_Feedback
    std::shared_ptr<def_msg::action::NavPose_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__def_msg__action__NavPose_Feedback
    std::shared_ptr<def_msg::action::NavPose_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NavPose_Feedback_ & other) const
  {
    if (this->dis_x != other.dis_x) {
      return false;
    }
    if (this->dis_y != other.dis_y) {
      return false;
    }
    if (this->dis_w != other.dis_w) {
      return false;
    }
    return true;
  }
  bool operator!=(const NavPose_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NavPose_Feedback_

// alias to use template instance with default allocator
using NavPose_Feedback =
  def_msg::action::NavPose_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace def_msg


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "def_msg/action/detail/nav_pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__def_msg__action__NavPose_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__def_msg__action__NavPose_SendGoal_Request __declspec(deprecated)
#endif

namespace def_msg
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct NavPose_SendGoal_Request_
{
  using Type = NavPose_SendGoal_Request_<ContainerAllocator>;

  explicit NavPose_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit NavPose_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _goal_type =
    def_msg::action::NavPose_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const def_msg::action::NavPose_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    def_msg::action::NavPose_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const def_msg::action::NavPose_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<def_msg::action::NavPose_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<def_msg::action::NavPose_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      def_msg::action::NavPose_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<def_msg::action::NavPose_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      def_msg::action::NavPose_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<def_msg::action::NavPose_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<def_msg::action::NavPose_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<def_msg::action::NavPose_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__def_msg__action__NavPose_SendGoal_Request
    std::shared_ptr<def_msg::action::NavPose_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__def_msg__action__NavPose_SendGoal_Request
    std::shared_ptr<def_msg::action::NavPose_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NavPose_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const NavPose_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NavPose_SendGoal_Request_

// alias to use template instance with default allocator
using NavPose_SendGoal_Request =
  def_msg::action::NavPose_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace def_msg


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__def_msg__action__NavPose_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__def_msg__action__NavPose_SendGoal_Response __declspec(deprecated)
#endif

namespace def_msg
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct NavPose_SendGoal_Response_
{
  using Type = NavPose_SendGoal_Response_<ContainerAllocator>;

  explicit NavPose_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit NavPose_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    def_msg::action::NavPose_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const def_msg::action::NavPose_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<def_msg::action::NavPose_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<def_msg::action::NavPose_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      def_msg::action::NavPose_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<def_msg::action::NavPose_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      def_msg::action::NavPose_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<def_msg::action::NavPose_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<def_msg::action::NavPose_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<def_msg::action::NavPose_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__def_msg__action__NavPose_SendGoal_Response
    std::shared_ptr<def_msg::action::NavPose_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__def_msg__action__NavPose_SendGoal_Response
    std::shared_ptr<def_msg::action::NavPose_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NavPose_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const NavPose_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NavPose_SendGoal_Response_

// alias to use template instance with default allocator
using NavPose_SendGoal_Response =
  def_msg::action::NavPose_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace def_msg

namespace def_msg
{

namespace action
{

struct NavPose_SendGoal
{
  using Request = def_msg::action::NavPose_SendGoal_Request;
  using Response = def_msg::action::NavPose_SendGoal_Response;
};

}  // namespace action

}  // namespace def_msg


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__def_msg__action__NavPose_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__def_msg__action__NavPose_GetResult_Request __declspec(deprecated)
#endif

namespace def_msg
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct NavPose_GetResult_Request_
{
  using Type = NavPose_GetResult_Request_<ContainerAllocator>;

  explicit NavPose_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit NavPose_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    def_msg::action::NavPose_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const def_msg::action::NavPose_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<def_msg::action::NavPose_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<def_msg::action::NavPose_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      def_msg::action::NavPose_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<def_msg::action::NavPose_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      def_msg::action::NavPose_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<def_msg::action::NavPose_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<def_msg::action::NavPose_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<def_msg::action::NavPose_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__def_msg__action__NavPose_GetResult_Request
    std::shared_ptr<def_msg::action::NavPose_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__def_msg__action__NavPose_GetResult_Request
    std::shared_ptr<def_msg::action::NavPose_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NavPose_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const NavPose_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NavPose_GetResult_Request_

// alias to use template instance with default allocator
using NavPose_GetResult_Request =
  def_msg::action::NavPose_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace def_msg


// Include directives for member types
// Member 'result'
// already included above
// #include "def_msg/action/detail/nav_pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__def_msg__action__NavPose_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__def_msg__action__NavPose_GetResult_Response __declspec(deprecated)
#endif

namespace def_msg
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct NavPose_GetResult_Response_
{
  using Type = NavPose_GetResult_Response_<ContainerAllocator>;

  explicit NavPose_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit NavPose_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _result_type =
    def_msg::action::NavPose_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const def_msg::action::NavPose_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    def_msg::action::NavPose_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const def_msg::action::NavPose_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<def_msg::action::NavPose_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<def_msg::action::NavPose_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      def_msg::action::NavPose_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<def_msg::action::NavPose_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      def_msg::action::NavPose_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<def_msg::action::NavPose_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<def_msg::action::NavPose_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<def_msg::action::NavPose_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__def_msg__action__NavPose_GetResult_Response
    std::shared_ptr<def_msg::action::NavPose_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__def_msg__action__NavPose_GetResult_Response
    std::shared_ptr<def_msg::action::NavPose_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NavPose_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const NavPose_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NavPose_GetResult_Response_

// alias to use template instance with default allocator
using NavPose_GetResult_Response =
  def_msg::action::NavPose_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace def_msg

namespace def_msg
{

namespace action
{

struct NavPose_GetResult
{
  using Request = def_msg::action::NavPose_GetResult_Request;
  using Response = def_msg::action::NavPose_GetResult_Response;
};

}  // namespace action

}  // namespace def_msg


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "def_msg/action/detail/nav_pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__def_msg__action__NavPose_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__def_msg__action__NavPose_FeedbackMessage __declspec(deprecated)
#endif

namespace def_msg
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct NavPose_FeedbackMessage_
{
  using Type = NavPose_FeedbackMessage_<ContainerAllocator>;

  explicit NavPose_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit NavPose_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    feedback(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _feedback_type =
    def_msg::action::NavPose_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const def_msg::action::NavPose_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    def_msg::action::NavPose_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const def_msg::action::NavPose_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<def_msg::action::NavPose_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<def_msg::action::NavPose_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      def_msg::action::NavPose_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<def_msg::action::NavPose_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      def_msg::action::NavPose_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<def_msg::action::NavPose_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<def_msg::action::NavPose_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<def_msg::action::NavPose_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__def_msg__action__NavPose_FeedbackMessage
    std::shared_ptr<def_msg::action::NavPose_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__def_msg__action__NavPose_FeedbackMessage
    std::shared_ptr<def_msg::action::NavPose_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NavPose_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const NavPose_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NavPose_FeedbackMessage_

// alias to use template instance with default allocator
using NavPose_FeedbackMessage =
  def_msg::action::NavPose_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace def_msg

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace def_msg
{

namespace action
{

struct NavPose
{
  /// The goal message defined in the action definition.
  using Goal = def_msg::action::NavPose_Goal;
  /// The result message defined in the action definition.
  using Result = def_msg::action::NavPose_Result;
  /// The feedback message defined in the action definition.
  using Feedback = def_msg::action::NavPose_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = def_msg::action::NavPose_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = def_msg::action::NavPose_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = def_msg::action::NavPose_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct NavPose NavPose;

}  // namespace action

}  // namespace def_msg

#endif  // DEF_MSG__ACTION__DETAIL__NAV_POSE__STRUCT_HPP_
