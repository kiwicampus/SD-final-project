// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from usr_srvs:srv/Turn.idl
// generated code does not contain a copyright notice

#ifndef USR_SRVS__SRV__DETAIL__TURN__BUILDER_HPP_
#define USR_SRVS__SRV__DETAIL__TURN__BUILDER_HPP_

#include "usr_srvs/srv/detail/turn__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace usr_srvs
{

namespace srv
{

namespace builder
{

class Init_Turn_Request_turn_ref
{
public:
  Init_Turn_Request_turn_ref()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::usr_srvs::srv::Turn_Request turn_ref(::usr_srvs::srv::Turn_Request::_turn_ref_type arg)
  {
    msg_.turn_ref = std::move(arg);
    return std::move(msg_);
  }

private:
  ::usr_srvs::srv::Turn_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::usr_srvs::srv::Turn_Request>()
{
  return usr_srvs::srv::builder::Init_Turn_Request_turn_ref();
}

}  // namespace usr_srvs


namespace usr_srvs
{

namespace srv
{

namespace builder
{

class Init_Turn_Response_completed
{
public:
  Init_Turn_Response_completed()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::usr_srvs::srv::Turn_Response completed(::usr_srvs::srv::Turn_Response::_completed_type arg)
  {
    msg_.completed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::usr_srvs::srv::Turn_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::usr_srvs::srv::Turn_Response>()
{
  return usr_srvs::srv::builder::Init_Turn_Response_completed();
}

}  // namespace usr_srvs

#endif  // USR_SRVS__SRV__DETAIL__TURN__BUILDER_HPP_
