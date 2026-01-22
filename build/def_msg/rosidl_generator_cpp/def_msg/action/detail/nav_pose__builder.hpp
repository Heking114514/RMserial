// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from def_msg:action/NavPose.idl
// generated code does not contain a copyright notice

#ifndef DEF_MSG__ACTION__DETAIL__NAV_POSE__BUILDER_HPP_
#define DEF_MSG__ACTION__DETAIL__NAV_POSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "def_msg/action/detail/nav_pose__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace def_msg
{

namespace action
{

namespace builder
{

class Init_NavPose_Goal_order
{
public:
  explicit Init_NavPose_Goal_order(::def_msg::action::NavPose_Goal & msg)
  : msg_(msg)
  {}
  ::def_msg::action::NavPose_Goal order(::def_msg::action::NavPose_Goal::_order_type arg)
  {
    msg_.order = std::move(arg);
    return std::move(msg_);
  }

private:
  ::def_msg::action::NavPose_Goal msg_;
};

class Init_NavPose_Goal_w
{
public:
  explicit Init_NavPose_Goal_w(::def_msg::action::NavPose_Goal & msg)
  : msg_(msg)
  {}
  Init_NavPose_Goal_order w(::def_msg::action::NavPose_Goal::_w_type arg)
  {
    msg_.w = std::move(arg);
    return Init_NavPose_Goal_order(msg_);
  }

private:
  ::def_msg::action::NavPose_Goal msg_;
};

class Init_NavPose_Goal_y
{
public:
  explicit Init_NavPose_Goal_y(::def_msg::action::NavPose_Goal & msg)
  : msg_(msg)
  {}
  Init_NavPose_Goal_w y(::def_msg::action::NavPose_Goal::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_NavPose_Goal_w(msg_);
  }

private:
  ::def_msg::action::NavPose_Goal msg_;
};

class Init_NavPose_Goal_x
{
public:
  Init_NavPose_Goal_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NavPose_Goal_y x(::def_msg::action::NavPose_Goal::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_NavPose_Goal_y(msg_);
  }

private:
  ::def_msg::action::NavPose_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::def_msg::action::NavPose_Goal>()
{
  return def_msg::action::builder::Init_NavPose_Goal_x();
}

}  // namespace def_msg


namespace def_msg
{

namespace action
{

namespace builder
{

class Init_NavPose_Result_reached
{
public:
  Init_NavPose_Result_reached()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::def_msg::action::NavPose_Result reached(::def_msg::action::NavPose_Result::_reached_type arg)
  {
    msg_.reached = std::move(arg);
    return std::move(msg_);
  }

private:
  ::def_msg::action::NavPose_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::def_msg::action::NavPose_Result>()
{
  return def_msg::action::builder::Init_NavPose_Result_reached();
}

}  // namespace def_msg


namespace def_msg
{

namespace action
{

namespace builder
{

class Init_NavPose_Feedback_dis_w
{
public:
  explicit Init_NavPose_Feedback_dis_w(::def_msg::action::NavPose_Feedback & msg)
  : msg_(msg)
  {}
  ::def_msg::action::NavPose_Feedback dis_w(::def_msg::action::NavPose_Feedback::_dis_w_type arg)
  {
    msg_.dis_w = std::move(arg);
    return std::move(msg_);
  }

private:
  ::def_msg::action::NavPose_Feedback msg_;
};

class Init_NavPose_Feedback_dis_y
{
public:
  explicit Init_NavPose_Feedback_dis_y(::def_msg::action::NavPose_Feedback & msg)
  : msg_(msg)
  {}
  Init_NavPose_Feedback_dis_w dis_y(::def_msg::action::NavPose_Feedback::_dis_y_type arg)
  {
    msg_.dis_y = std::move(arg);
    return Init_NavPose_Feedback_dis_w(msg_);
  }

private:
  ::def_msg::action::NavPose_Feedback msg_;
};

class Init_NavPose_Feedback_dis_x
{
public:
  Init_NavPose_Feedback_dis_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NavPose_Feedback_dis_y dis_x(::def_msg::action::NavPose_Feedback::_dis_x_type arg)
  {
    msg_.dis_x = std::move(arg);
    return Init_NavPose_Feedback_dis_y(msg_);
  }

private:
  ::def_msg::action::NavPose_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::def_msg::action::NavPose_Feedback>()
{
  return def_msg::action::builder::Init_NavPose_Feedback_dis_x();
}

}  // namespace def_msg


namespace def_msg
{

namespace action
{

namespace builder
{

class Init_NavPose_SendGoal_Request_goal
{
public:
  explicit Init_NavPose_SendGoal_Request_goal(::def_msg::action::NavPose_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::def_msg::action::NavPose_SendGoal_Request goal(::def_msg::action::NavPose_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::def_msg::action::NavPose_SendGoal_Request msg_;
};

class Init_NavPose_SendGoal_Request_goal_id
{
public:
  Init_NavPose_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NavPose_SendGoal_Request_goal goal_id(::def_msg::action::NavPose_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_NavPose_SendGoal_Request_goal(msg_);
  }

private:
  ::def_msg::action::NavPose_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::def_msg::action::NavPose_SendGoal_Request>()
{
  return def_msg::action::builder::Init_NavPose_SendGoal_Request_goal_id();
}

}  // namespace def_msg


namespace def_msg
{

namespace action
{

namespace builder
{

class Init_NavPose_SendGoal_Response_stamp
{
public:
  explicit Init_NavPose_SendGoal_Response_stamp(::def_msg::action::NavPose_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::def_msg::action::NavPose_SendGoal_Response stamp(::def_msg::action::NavPose_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::def_msg::action::NavPose_SendGoal_Response msg_;
};

class Init_NavPose_SendGoal_Response_accepted
{
public:
  Init_NavPose_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NavPose_SendGoal_Response_stamp accepted(::def_msg::action::NavPose_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_NavPose_SendGoal_Response_stamp(msg_);
  }

private:
  ::def_msg::action::NavPose_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::def_msg::action::NavPose_SendGoal_Response>()
{
  return def_msg::action::builder::Init_NavPose_SendGoal_Response_accepted();
}

}  // namespace def_msg


namespace def_msg
{

namespace action
{

namespace builder
{

class Init_NavPose_GetResult_Request_goal_id
{
public:
  Init_NavPose_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::def_msg::action::NavPose_GetResult_Request goal_id(::def_msg::action::NavPose_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::def_msg::action::NavPose_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::def_msg::action::NavPose_GetResult_Request>()
{
  return def_msg::action::builder::Init_NavPose_GetResult_Request_goal_id();
}

}  // namespace def_msg


namespace def_msg
{

namespace action
{

namespace builder
{

class Init_NavPose_GetResult_Response_result
{
public:
  explicit Init_NavPose_GetResult_Response_result(::def_msg::action::NavPose_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::def_msg::action::NavPose_GetResult_Response result(::def_msg::action::NavPose_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::def_msg::action::NavPose_GetResult_Response msg_;
};

class Init_NavPose_GetResult_Response_status
{
public:
  Init_NavPose_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NavPose_GetResult_Response_result status(::def_msg::action::NavPose_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_NavPose_GetResult_Response_result(msg_);
  }

private:
  ::def_msg::action::NavPose_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::def_msg::action::NavPose_GetResult_Response>()
{
  return def_msg::action::builder::Init_NavPose_GetResult_Response_status();
}

}  // namespace def_msg


namespace def_msg
{

namespace action
{

namespace builder
{

class Init_NavPose_FeedbackMessage_feedback
{
public:
  explicit Init_NavPose_FeedbackMessage_feedback(::def_msg::action::NavPose_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::def_msg::action::NavPose_FeedbackMessage feedback(::def_msg::action::NavPose_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::def_msg::action::NavPose_FeedbackMessage msg_;
};

class Init_NavPose_FeedbackMessage_goal_id
{
public:
  Init_NavPose_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NavPose_FeedbackMessage_feedback goal_id(::def_msg::action::NavPose_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_NavPose_FeedbackMessage_feedback(msg_);
  }

private:
  ::def_msg::action::NavPose_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::def_msg::action::NavPose_FeedbackMessage>()
{
  return def_msg::action::builder::Init_NavPose_FeedbackMessage_goal_id();
}

}  // namespace def_msg

#endif  // DEF_MSG__ACTION__DETAIL__NAV_POSE__BUILDER_HPP_
