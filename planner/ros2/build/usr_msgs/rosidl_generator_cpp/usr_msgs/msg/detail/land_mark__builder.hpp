// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from usr_msgs:msg/LandMark.idl
// generated code does not contain a copyright notice

#ifndef USR_MSGS__MSG__DETAIL__LAND_MARK__BUILDER_HPP_
#define USR_MSGS__MSG__DETAIL__LAND_MARK__BUILDER_HPP_

#include "usr_msgs/msg/detail/land_mark__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace usr_msgs
{

namespace msg
{

namespace builder
{

class Init_LandMark_y
{
public:
  explicit Init_LandMark_y(::usr_msgs::msg::LandMark & msg)
  : msg_(msg)
  {}
  ::usr_msgs::msg::LandMark y(::usr_msgs::msg::LandMark::_y_type arg)
  {
    msg_.y = std::move(arg);
    return std::move(msg_);
  }

private:
  ::usr_msgs::msg::LandMark msg_;
};

class Init_LandMark_x
{
public:
  explicit Init_LandMark_x(::usr_msgs::msg::LandMark & msg)
  : msg_(msg)
  {}
  Init_LandMark_y x(::usr_msgs::msg::LandMark::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_LandMark_y(msg_);
  }

private:
  ::usr_msgs::msg::LandMark msg_;
};

class Init_LandMark_id
{
public:
  explicit Init_LandMark_id(::usr_msgs::msg::LandMark & msg)
  : msg_(msg)
  {}
  Init_LandMark_x id(::usr_msgs::msg::LandMark::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_LandMark_x(msg_);
  }

private:
  ::usr_msgs::msg::LandMark msg_;
};

class Init_LandMark_neighbors
{
public:
  Init_LandMark_neighbors()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LandMark_id neighbors(::usr_msgs::msg::LandMark::_neighbors_type arg)
  {
    msg_.neighbors = std::move(arg);
    return Init_LandMark_id(msg_);
  }

private:
  ::usr_msgs::msg::LandMark msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::usr_msgs::msg::LandMark>()
{
  return usr_msgs::msg::builder::Init_LandMark_neighbors();
}

}  // namespace usr_msgs

#endif  // USR_MSGS__MSG__DETAIL__LAND_MARK__BUILDER_HPP_
