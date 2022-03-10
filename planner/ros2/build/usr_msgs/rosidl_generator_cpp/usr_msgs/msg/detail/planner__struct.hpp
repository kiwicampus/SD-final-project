// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from usr_msgs:msg/Planner.idl
// generated code does not contain a copyright notice

#ifndef USR_MSGS__MSG__DETAIL__PLANNER__STRUCT_HPP_
#define USR_MSGS__MSG__DETAIL__PLANNER__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'land_marks'
#include "usr_msgs/msg/detail/land_mark__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__usr_msgs__msg__Planner __attribute__((deprecated))
#else
# define DEPRECATED__usr_msgs__msg__Planner __declspec(deprecated)
#endif

namespace usr_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Planner_
{
  using Type = Planner_<ContainerAllocator>;

  explicit Planner_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->distance = 0.0f;
      this->duration = 0.0f;
      this->difficulty = 0.0f;
    }
  }

  explicit Planner_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->distance = 0.0f;
      this->duration = 0.0f;
      this->difficulty = 0.0f;
    }
  }

  // field types and members
  using _land_marks_type =
    std::vector<usr_msgs::msg::LandMark_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<usr_msgs::msg::LandMark_<ContainerAllocator>>>;
  _land_marks_type land_marks;
  using _distance_type =
    float;
  _distance_type distance;
  using _duration_type =
    float;
  _duration_type duration;
  using _difficulty_type =
    float;
  _difficulty_type difficulty;

  // setters for named parameter idiom
  Type & set__land_marks(
    const std::vector<usr_msgs::msg::LandMark_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<usr_msgs::msg::LandMark_<ContainerAllocator>>> & _arg)
  {
    this->land_marks = _arg;
    return *this;
  }
  Type & set__distance(
    const float & _arg)
  {
    this->distance = _arg;
    return *this;
  }
  Type & set__duration(
    const float & _arg)
  {
    this->duration = _arg;
    return *this;
  }
  Type & set__difficulty(
    const float & _arg)
  {
    this->difficulty = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    usr_msgs::msg::Planner_<ContainerAllocator> *;
  using ConstRawPtr =
    const usr_msgs::msg::Planner_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<usr_msgs::msg::Planner_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<usr_msgs::msg::Planner_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      usr_msgs::msg::Planner_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<usr_msgs::msg::Planner_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      usr_msgs::msg::Planner_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<usr_msgs::msg::Planner_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<usr_msgs::msg::Planner_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<usr_msgs::msg::Planner_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__usr_msgs__msg__Planner
    std::shared_ptr<usr_msgs::msg::Planner_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__usr_msgs__msg__Planner
    std::shared_ptr<usr_msgs::msg::Planner_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Planner_ & other) const
  {
    if (this->land_marks != other.land_marks) {
      return false;
    }
    if (this->distance != other.distance) {
      return false;
    }
    if (this->duration != other.duration) {
      return false;
    }
    if (this->difficulty != other.difficulty) {
      return false;
    }
    return true;
  }
  bool operator!=(const Planner_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Planner_

// alias to use template instance with default allocator
using Planner =
  usr_msgs::msg::Planner_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace usr_msgs

#endif  // USR_MSGS__MSG__DETAIL__PLANNER__STRUCT_HPP_
