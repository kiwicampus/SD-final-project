// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from usr_msgs:msg/Waypoint.idl
// generated code does not contain a copyright notice

#ifndef USR_MSGS__MSG__DETAIL__WAYPOINT__STRUCT_HPP_
#define USR_MSGS__MSG__DETAIL__WAYPOINT__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__usr_msgs__msg__Waypoint __attribute__((deprecated))
#else
# define DEPRECATED__usr_msgs__msg__Waypoint __declspec(deprecated)
#endif

namespace usr_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Waypoint_
{
  using Type = Waypoint_<ContainerAllocator>;

  explicit Waypoint_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0;
      this->x = 0;
      this->y = 0;
      this->t = 0.0f;
      this->dt = 0.0f;
    }
  }

  explicit Waypoint_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0;
      this->x = 0;
      this->y = 0;
      this->t = 0.0f;
      this->dt = 0.0f;
    }
  }

  // field types and members
  using _id_type =
    int8_t;
  _id_type id;
  using _x_type =
    int16_t;
  _x_type x;
  using _y_type =
    int16_t;
  _y_type y;
  using _t_type =
    float;
  _t_type t;
  using _dt_type =
    float;
  _dt_type dt;

  // setters for named parameter idiom
  Type & set__id(
    const int8_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__x(
    const int16_t & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const int16_t & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__t(
    const float & _arg)
  {
    this->t = _arg;
    return *this;
  }
  Type & set__dt(
    const float & _arg)
  {
    this->dt = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    usr_msgs::msg::Waypoint_<ContainerAllocator> *;
  using ConstRawPtr =
    const usr_msgs::msg::Waypoint_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<usr_msgs::msg::Waypoint_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<usr_msgs::msg::Waypoint_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      usr_msgs::msg::Waypoint_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<usr_msgs::msg::Waypoint_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      usr_msgs::msg::Waypoint_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<usr_msgs::msg::Waypoint_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<usr_msgs::msg::Waypoint_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<usr_msgs::msg::Waypoint_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__usr_msgs__msg__Waypoint
    std::shared_ptr<usr_msgs::msg::Waypoint_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__usr_msgs__msg__Waypoint
    std::shared_ptr<usr_msgs::msg::Waypoint_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Waypoint_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->t != other.t) {
      return false;
    }
    if (this->dt != other.dt) {
      return false;
    }
    return true;
  }
  bool operator!=(const Waypoint_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Waypoint_

// alias to use template instance with default allocator
using Waypoint =
  usr_msgs::msg::Waypoint_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace usr_msgs

#endif  // USR_MSGS__MSG__DETAIL__WAYPOINT__STRUCT_HPP_
