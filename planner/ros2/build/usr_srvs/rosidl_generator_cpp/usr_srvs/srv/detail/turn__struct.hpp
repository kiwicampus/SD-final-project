// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from usr_srvs:srv/Turn.idl
// generated code does not contain a copyright notice

#ifndef USR_SRVS__SRV__DETAIL__TURN__STRUCT_HPP_
#define USR_SRVS__SRV__DETAIL__TURN__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'turn_ref'
#include "usr_msgs/msg/detail/turn_ref__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__usr_srvs__srv__Turn_Request __attribute__((deprecated))
#else
# define DEPRECATED__usr_srvs__srv__Turn_Request __declspec(deprecated)
#endif

namespace usr_srvs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Turn_Request_
{
  using Type = Turn_Request_<ContainerAllocator>;

  explicit Turn_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit Turn_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _turn_ref_type =
    std::vector<usr_msgs::msg::TurnRef_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<usr_msgs::msg::TurnRef_<ContainerAllocator>>>;
  _turn_ref_type turn_ref;

  // setters for named parameter idiom
  Type & set__turn_ref(
    const std::vector<usr_msgs::msg::TurnRef_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<usr_msgs::msg::TurnRef_<ContainerAllocator>>> & _arg)
  {
    this->turn_ref = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    usr_srvs::srv::Turn_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const usr_srvs::srv::Turn_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<usr_srvs::srv::Turn_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<usr_srvs::srv::Turn_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      usr_srvs::srv::Turn_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<usr_srvs::srv::Turn_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      usr_srvs::srv::Turn_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<usr_srvs::srv::Turn_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<usr_srvs::srv::Turn_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<usr_srvs::srv::Turn_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__usr_srvs__srv__Turn_Request
    std::shared_ptr<usr_srvs::srv::Turn_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__usr_srvs__srv__Turn_Request
    std::shared_ptr<usr_srvs::srv::Turn_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Turn_Request_ & other) const
  {
    if (this->turn_ref != other.turn_ref) {
      return false;
    }
    return true;
  }
  bool operator!=(const Turn_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Turn_Request_

// alias to use template instance with default allocator
using Turn_Request =
  usr_srvs::srv::Turn_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace usr_srvs


#ifndef _WIN32
# define DEPRECATED__usr_srvs__srv__Turn_Response __attribute__((deprecated))
#else
# define DEPRECATED__usr_srvs__srv__Turn_Response __declspec(deprecated)
#endif

namespace usr_srvs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Turn_Response_
{
  using Type = Turn_Response_<ContainerAllocator>;

  explicit Turn_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->completed = false;
    }
  }

  explicit Turn_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->completed = false;
    }
  }

  // field types and members
  using _completed_type =
    bool;
  _completed_type completed;

  // setters for named parameter idiom
  Type & set__completed(
    const bool & _arg)
  {
    this->completed = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    usr_srvs::srv::Turn_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const usr_srvs::srv::Turn_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<usr_srvs::srv::Turn_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<usr_srvs::srv::Turn_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      usr_srvs::srv::Turn_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<usr_srvs::srv::Turn_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      usr_srvs::srv::Turn_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<usr_srvs::srv::Turn_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<usr_srvs::srv::Turn_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<usr_srvs::srv::Turn_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__usr_srvs__srv__Turn_Response
    std::shared_ptr<usr_srvs::srv::Turn_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__usr_srvs__srv__Turn_Response
    std::shared_ptr<usr_srvs::srv::Turn_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Turn_Response_ & other) const
  {
    if (this->completed != other.completed) {
      return false;
    }
    return true;
  }
  bool operator!=(const Turn_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Turn_Response_

// alias to use template instance with default allocator
using Turn_Response =
  usr_srvs::srv::Turn_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace usr_srvs

namespace usr_srvs
{

namespace srv
{

struct Turn
{
  using Request = usr_srvs::srv::Turn_Request;
  using Response = usr_srvs::srv::Turn_Response;
};

}  // namespace srv

}  // namespace usr_srvs

#endif  // USR_SRVS__SRV__DETAIL__TURN__STRUCT_HPP_
