// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from usr_msgs:msg/Waypoint.idl
// generated code does not contain a copyright notice

#ifndef USR_MSGS__MSG__DETAIL__WAYPOINT__BUILDER_HPP_
#define USR_MSGS__MSG__DETAIL__WAYPOINT__BUILDER_HPP_

#include "usr_msgs/msg/detail/waypoint__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace usr_msgs
{

namespace msg
{

namespace builder
{

class Init_Waypoint_dt
{
public:
  explicit Init_Waypoint_dt(::usr_msgs::msg::Waypoint & msg)
  : msg_(msg)
  {}
  ::usr_msgs::msg::Waypoint dt(::usr_msgs::msg::Waypoint::_dt_type arg)
  {
    msg_.dt = std::move(arg);
    return std::move(msg_);
  }

private:
  ::usr_msgs::msg::Waypoint msg_;
};

class Init_Waypoint_t
{
public:
  explicit Init_Waypoint_t(::usr_msgs::msg::Waypoint & msg)
  : msg_(msg)
  {}
  Init_Waypoint_dt t(::usr_msgs::msg::Waypoint::_t_type arg)
  {
    msg_.t = std::move(arg);
    return Init_Waypoint_dt(msg_);
  }

private:
  ::usr_msgs::msg::Waypoint msg_;
};

class Init_Waypoint_y
{
public:
  explicit Init_Waypoint_y(::usr_msgs::msg::Waypoint & msg)
  : msg_(msg)
  {}
  Init_Waypoint_t y(::usr_msgs::msg::Waypoint::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_Waypoint_t(msg_);
  }

private:
  ::usr_msgs::msg::Waypoint msg_;
};

class Init_Waypoint_x
{
public:
  explicit Init_Waypoint_x(::usr_msgs::msg::Waypoint & msg)
  : msg_(msg)
  {}
  Init_Waypoint_y x(::usr_msgs::msg::Waypoint::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Waypoint_y(msg_);
  }

private:
  ::usr_msgs::msg::Waypoint msg_;
};

class Init_Waypoint_id
{
public:
  Init_Waypoint_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Waypoint_x id(::usr_msgs::msg::Waypoint::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_Waypoint_x(msg_);
  }

private:
  ::usr_msgs::msg::Waypoint msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::usr_msgs::msg::Waypoint>()
{
  return usr_msgs::msg::builder::Init_Waypoint_id();
}

}  // namespace usr_msgs

#endif  // USR_MSGS__MSG__DETAIL__WAYPOINT__BUILDER_HPP_
