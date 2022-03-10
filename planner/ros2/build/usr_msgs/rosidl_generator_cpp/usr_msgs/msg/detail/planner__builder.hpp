// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from usr_msgs:msg/Planner.idl
// generated code does not contain a copyright notice

#ifndef USR_MSGS__MSG__DETAIL__PLANNER__BUILDER_HPP_
#define USR_MSGS__MSG__DETAIL__PLANNER__BUILDER_HPP_

#include "usr_msgs/msg/detail/planner__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace usr_msgs
{

namespace msg
{

namespace builder
{

class Init_Planner_difficulty
{
public:
  explicit Init_Planner_difficulty(::usr_msgs::msg::Planner & msg)
  : msg_(msg)
  {}
  ::usr_msgs::msg::Planner difficulty(::usr_msgs::msg::Planner::_difficulty_type arg)
  {
    msg_.difficulty = std::move(arg);
    return std::move(msg_);
  }

private:
  ::usr_msgs::msg::Planner msg_;
};

class Init_Planner_duration
{
public:
  explicit Init_Planner_duration(::usr_msgs::msg::Planner & msg)
  : msg_(msg)
  {}
  Init_Planner_difficulty duration(::usr_msgs::msg::Planner::_duration_type arg)
  {
    msg_.duration = std::move(arg);
    return Init_Planner_difficulty(msg_);
  }

private:
  ::usr_msgs::msg::Planner msg_;
};

class Init_Planner_distance
{
public:
  explicit Init_Planner_distance(::usr_msgs::msg::Planner & msg)
  : msg_(msg)
  {}
  Init_Planner_duration distance(::usr_msgs::msg::Planner::_distance_type arg)
  {
    msg_.distance = std::move(arg);
    return Init_Planner_duration(msg_);
  }

private:
  ::usr_msgs::msg::Planner msg_;
};

class Init_Planner_land_marks
{
public:
  Init_Planner_land_marks()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Planner_distance land_marks(::usr_msgs::msg::Planner::_land_marks_type arg)
  {
    msg_.land_marks = std::move(arg);
    return Init_Planner_distance(msg_);
  }

private:
  ::usr_msgs::msg::Planner msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::usr_msgs::msg::Planner>()
{
  return usr_msgs::msg::builder::Init_Planner_land_marks();
}

}  // namespace usr_msgs

#endif  // USR_MSGS__MSG__DETAIL__PLANNER__BUILDER_HPP_
