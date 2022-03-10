// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from usr_srvs:srv/Move.idl
// generated code does not contain a copyright notice

#ifndef USR_SRVS__SRV__DETAIL__MOVE__BUILDER_HPP_
#define USR_SRVS__SRV__DETAIL__MOVE__BUILDER_HPP_

#include "usr_srvs/srv/detail/move__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace usr_srvs
{

namespace srv
{

namespace builder
{

class Init_Move_Request_waypoints
{
public:
  Init_Move_Request_waypoints()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::usr_srvs::srv::Move_Request waypoints(::usr_srvs::srv::Move_Request::_waypoints_type arg)
  {
    msg_.waypoints = std::move(arg);
    return std::move(msg_);
  }

private:
  ::usr_srvs::srv::Move_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::usr_srvs::srv::Move_Request>()
{
  return usr_srvs::srv::builder::Init_Move_Request_waypoints();
}

}  // namespace usr_srvs


namespace usr_srvs
{

namespace srv
{

namespace builder
{

class Init_Move_Response_completed
{
public:
  Init_Move_Response_completed()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::usr_srvs::srv::Move_Response completed(::usr_srvs::srv::Move_Response::_completed_type arg)
  {
    msg_.completed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::usr_srvs::srv::Move_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::usr_srvs::srv::Move_Response>()
{
  return usr_srvs::srv::builder::Init_Move_Response_completed();
}

}  // namespace usr_srvs

#endif  // USR_SRVS__SRV__DETAIL__MOVE__BUILDER_HPP_
