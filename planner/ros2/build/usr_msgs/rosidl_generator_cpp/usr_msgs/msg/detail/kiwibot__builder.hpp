// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from usr_msgs:msg/Kiwibot.idl
// generated code does not contain a copyright notice

#ifndef USR_MSGS__MSG__DETAIL__KIWIBOT__BUILDER_HPP_
#define USR_MSGS__MSG__DETAIL__KIWIBOT__BUILDER_HPP_

#include "usr_msgs/msg/detail/kiwibot__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace usr_msgs
{

namespace msg
{

namespace builder
{

class Init_Kiwibot_moving
{
public:
  explicit Init_Kiwibot_moving(::usr_msgs::msg::Kiwibot & msg)
  : msg_(msg)
  {}
  ::usr_msgs::msg::Kiwibot moving(::usr_msgs::msg::Kiwibot::_moving_type arg)
  {
    msg_.moving = std::move(arg);
    return std::move(msg_);
  }

private:
  ::usr_msgs::msg::Kiwibot msg_;
};

class Init_Kiwibot_yaw
{
public:
  explicit Init_Kiwibot_yaw(::usr_msgs::msg::Kiwibot & msg)
  : msg_(msg)
  {}
  Init_Kiwibot_moving yaw(::usr_msgs::msg::Kiwibot::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return Init_Kiwibot_moving(msg_);
  }

private:
  ::usr_msgs::msg::Kiwibot msg_;
};

class Init_Kiwibot_time
{
public:
  explicit Init_Kiwibot_time(::usr_msgs::msg::Kiwibot & msg)
  : msg_(msg)
  {}
  Init_Kiwibot_yaw time(::usr_msgs::msg::Kiwibot::_time_type arg)
  {
    msg_.time = std::move(arg);
    return Init_Kiwibot_yaw(msg_);
  }

private:
  ::usr_msgs::msg::Kiwibot msg_;
};

class Init_Kiwibot_speed
{
public:
  explicit Init_Kiwibot_speed(::usr_msgs::msg::Kiwibot & msg)
  : msg_(msg)
  {}
  Init_Kiwibot_time speed(::usr_msgs::msg::Kiwibot::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return Init_Kiwibot_time(msg_);
  }

private:
  ::usr_msgs::msg::Kiwibot msg_;
};

class Init_Kiwibot_dist
{
public:
  explicit Init_Kiwibot_dist(::usr_msgs::msg::Kiwibot & msg)
  : msg_(msg)
  {}
  Init_Kiwibot_speed dist(::usr_msgs::msg::Kiwibot::_dist_type arg)
  {
    msg_.dist = std::move(arg);
    return Init_Kiwibot_speed(msg_);
  }

private:
  ::usr_msgs::msg::Kiwibot msg_;
};

class Init_Kiwibot_pos_y
{
public:
  explicit Init_Kiwibot_pos_y(::usr_msgs::msg::Kiwibot & msg)
  : msg_(msg)
  {}
  Init_Kiwibot_dist pos_y(::usr_msgs::msg::Kiwibot::_pos_y_type arg)
  {
    msg_.pos_y = std::move(arg);
    return Init_Kiwibot_dist(msg_);
  }

private:
  ::usr_msgs::msg::Kiwibot msg_;
};

class Init_Kiwibot_pos_x
{
public:
  Init_Kiwibot_pos_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Kiwibot_pos_y pos_x(::usr_msgs::msg::Kiwibot::_pos_x_type arg)
  {
    msg_.pos_x = std::move(arg);
    return Init_Kiwibot_pos_y(msg_);
  }

private:
  ::usr_msgs::msg::Kiwibot msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::usr_msgs::msg::Kiwibot>()
{
  return usr_msgs::msg::builder::Init_Kiwibot_pos_x();
}

}  // namespace usr_msgs

#endif  // USR_MSGS__MSG__DETAIL__KIWIBOT__BUILDER_HPP_
