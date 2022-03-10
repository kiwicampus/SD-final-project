// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from usr_msgs:msg/Kiwibot.idl
// generated code does not contain a copyright notice

#ifndef USR_MSGS__MSG__DETAIL__KIWIBOT__STRUCT_HPP_
#define USR_MSGS__MSG__DETAIL__KIWIBOT__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__usr_msgs__msg__Kiwibot __attribute__((deprecated))
#else
# define DEPRECATED__usr_msgs__msg__Kiwibot __declspec(deprecated)
#endif

namespace usr_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Kiwibot_
{
  using Type = Kiwibot_<ContainerAllocator>;

  explicit Kiwibot_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pos_x = 0;
      this->pos_y = 0;
      this->dist = 0.0f;
      this->speed = 0.0f;
      this->time = 0.0f;
      this->yaw = 0.0f;
      this->moving = false;
    }
  }

  explicit Kiwibot_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pos_x = 0;
      this->pos_y = 0;
      this->dist = 0.0f;
      this->speed = 0.0f;
      this->time = 0.0f;
      this->yaw = 0.0f;
      this->moving = false;
    }
  }

  // field types and members
  using _pos_x_type =
    int16_t;
  _pos_x_type pos_x;
  using _pos_y_type =
    int16_t;
  _pos_y_type pos_y;
  using _dist_type =
    float;
  _dist_type dist;
  using _speed_type =
    float;
  _speed_type speed;
  using _time_type =
    float;
  _time_type time;
  using _yaw_type =
    float;
  _yaw_type yaw;
  using _moving_type =
    bool;
  _moving_type moving;

  // setters for named parameter idiom
  Type & set__pos_x(
    const int16_t & _arg)
  {
    this->pos_x = _arg;
    return *this;
  }
  Type & set__pos_y(
    const int16_t & _arg)
  {
    this->pos_y = _arg;
    return *this;
  }
  Type & set__dist(
    const float & _arg)
  {
    this->dist = _arg;
    return *this;
  }
  Type & set__speed(
    const float & _arg)
  {
    this->speed = _arg;
    return *this;
  }
  Type & set__time(
    const float & _arg)
  {
    this->time = _arg;
    return *this;
  }
  Type & set__yaw(
    const float & _arg)
  {
    this->yaw = _arg;
    return *this;
  }
  Type & set__moving(
    const bool & _arg)
  {
    this->moving = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    usr_msgs::msg::Kiwibot_<ContainerAllocator> *;
  using ConstRawPtr =
    const usr_msgs::msg::Kiwibot_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<usr_msgs::msg::Kiwibot_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<usr_msgs::msg::Kiwibot_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      usr_msgs::msg::Kiwibot_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<usr_msgs::msg::Kiwibot_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      usr_msgs::msg::Kiwibot_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<usr_msgs::msg::Kiwibot_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<usr_msgs::msg::Kiwibot_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<usr_msgs::msg::Kiwibot_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__usr_msgs__msg__Kiwibot
    std::shared_ptr<usr_msgs::msg::Kiwibot_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__usr_msgs__msg__Kiwibot
    std::shared_ptr<usr_msgs::msg::Kiwibot_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Kiwibot_ & other) const
  {
    if (this->pos_x != other.pos_x) {
      return false;
    }
    if (this->pos_y != other.pos_y) {
      return false;
    }
    if (this->dist != other.dist) {
      return false;
    }
    if (this->speed != other.speed) {
      return false;
    }
    if (this->time != other.time) {
      return false;
    }
    if (this->yaw != other.yaw) {
      return false;
    }
    if (this->moving != other.moving) {
      return false;
    }
    return true;
  }
  bool operator!=(const Kiwibot_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Kiwibot_

// alias to use template instance with default allocator
using Kiwibot =
  usr_msgs::msg::Kiwibot_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace usr_msgs

#endif  // USR_MSGS__MSG__DETAIL__KIWIBOT__STRUCT_HPP_
