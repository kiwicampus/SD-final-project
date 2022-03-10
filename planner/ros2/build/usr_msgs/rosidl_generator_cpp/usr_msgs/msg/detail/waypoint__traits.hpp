// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from usr_msgs:msg/Waypoint.idl
// generated code does not contain a copyright notice

#ifndef USR_MSGS__MSG__DETAIL__WAYPOINT__TRAITS_HPP_
#define USR_MSGS__MSG__DETAIL__WAYPOINT__TRAITS_HPP_

#include "usr_msgs/msg/detail/waypoint__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const usr_msgs::msg::Waypoint & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    value_to_yaml(msg.id, out);
    out << "\n";
  }

  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    value_to_yaml(msg.x, out);
    out << "\n";
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y: ";
    value_to_yaml(msg.y, out);
    out << "\n";
  }

  // member: t
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "t: ";
    value_to_yaml(msg.t, out);
    out << "\n";
  }

  // member: dt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dt: ";
    value_to_yaml(msg.dt, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const usr_msgs::msg::Waypoint & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<usr_msgs::msg::Waypoint>()
{
  return "usr_msgs::msg::Waypoint";
}

template<>
inline const char * name<usr_msgs::msg::Waypoint>()
{
  return "usr_msgs/msg/Waypoint";
}

template<>
struct has_fixed_size<usr_msgs::msg::Waypoint>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<usr_msgs::msg::Waypoint>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<usr_msgs::msg::Waypoint>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // USR_MSGS__MSG__DETAIL__WAYPOINT__TRAITS_HPP_
