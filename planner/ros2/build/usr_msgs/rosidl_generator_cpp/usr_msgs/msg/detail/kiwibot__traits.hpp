// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from usr_msgs:msg/Kiwibot.idl
// generated code does not contain a copyright notice

#ifndef USR_MSGS__MSG__DETAIL__KIWIBOT__TRAITS_HPP_
#define USR_MSGS__MSG__DETAIL__KIWIBOT__TRAITS_HPP_

#include "usr_msgs/msg/detail/kiwibot__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const usr_msgs::msg::Kiwibot & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: pos_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pos_x: ";
    value_to_yaml(msg.pos_x, out);
    out << "\n";
  }

  // member: pos_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pos_y: ";
    value_to_yaml(msg.pos_y, out);
    out << "\n";
  }

  // member: dist
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dist: ";
    value_to_yaml(msg.dist, out);
    out << "\n";
  }

  // member: speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed: ";
    value_to_yaml(msg.speed, out);
    out << "\n";
  }

  // member: time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time: ";
    value_to_yaml(msg.time, out);
    out << "\n";
  }

  // member: yaw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw: ";
    value_to_yaml(msg.yaw, out);
    out << "\n";
  }

  // member: moving
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "moving: ";
    value_to_yaml(msg.moving, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const usr_msgs::msg::Kiwibot & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<usr_msgs::msg::Kiwibot>()
{
  return "usr_msgs::msg::Kiwibot";
}

template<>
inline const char * name<usr_msgs::msg::Kiwibot>()
{
  return "usr_msgs/msg/Kiwibot";
}

template<>
struct has_fixed_size<usr_msgs::msg::Kiwibot>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<usr_msgs::msg::Kiwibot>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<usr_msgs::msg::Kiwibot>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // USR_MSGS__MSG__DETAIL__KIWIBOT__TRAITS_HPP_
