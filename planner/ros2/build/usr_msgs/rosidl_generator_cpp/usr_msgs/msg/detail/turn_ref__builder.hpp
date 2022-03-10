// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from usr_msgs:msg/TurnRef.idl
// generated code does not contain a copyright notice

#ifndef USR_MSGS__MSG__DETAIL__TURN_REF__BUILDER_HPP_
#define USR_MSGS__MSG__DETAIL__TURN_REF__BUILDER_HPP_

#include "usr_msgs/msg/detail/turn_ref__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace usr_msgs
{

namespace msg
{

namespace builder
{

class Init_TurnRef_dt
{
public:
  explicit Init_TurnRef_dt(::usr_msgs::msg::TurnRef & msg)
  : msg_(msg)
  {}
  ::usr_msgs::msg::TurnRef dt(::usr_msgs::msg::TurnRef::_dt_type arg)
  {
    msg_.dt = std::move(arg);
    return std::move(msg_);
  }

private:
  ::usr_msgs::msg::TurnRef msg_;
};

class Init_TurnRef_t
{
public:
  explicit Init_TurnRef_t(::usr_msgs::msg::TurnRef & msg)
  : msg_(msg)
  {}
  Init_TurnRef_dt t(::usr_msgs::msg::TurnRef::_t_type arg)
  {
    msg_.t = std::move(arg);
    return Init_TurnRef_dt(msg_);
  }

private:
  ::usr_msgs::msg::TurnRef msg_;
};

class Init_TurnRef_yaw
{
public:
  explicit Init_TurnRef_yaw(::usr_msgs::msg::TurnRef & msg)
  : msg_(msg)
  {}
  Init_TurnRef_t yaw(::usr_msgs::msg::TurnRef::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return Init_TurnRef_t(msg_);
  }

private:
  ::usr_msgs::msg::TurnRef msg_;
};

class Init_TurnRef_id
{
public:
  Init_TurnRef_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TurnRef_yaw id(::usr_msgs::msg::TurnRef::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_TurnRef_yaw(msg_);
  }

private:
  ::usr_msgs::msg::TurnRef msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::usr_msgs::msg::TurnRef>()
{
  return usr_msgs::msg::builder::Init_TurnRef_id();
}

}  // namespace usr_msgs

#endif  // USR_MSGS__MSG__DETAIL__TURN_REF__BUILDER_HPP_
