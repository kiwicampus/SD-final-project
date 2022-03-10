// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from usr_msgs:msg/LandMark.idl
// generated code does not contain a copyright notice

#ifndef USR_MSGS__MSG__DETAIL__LAND_MARK__TRAITS_HPP_
#define USR_MSGS__MSG__DETAIL__LAND_MARK__TRAITS_HPP_

#include "usr_msgs/msg/detail/land_mark__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const usr_msgs::msg::LandMark & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: neighbors
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.neighbors.size() == 0) {
      out << "neighbors: []\n";
    } else {
      out << "neighbors:\n";
      for (auto item : msg.neighbors) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const usr_msgs::msg::LandMark & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<usr_msgs::msg::LandMark>()
{
  return "usr_msgs::msg::LandMark";
}

template<>
inline const char * name<usr_msgs::msg::LandMark>()
{
  return "usr_msgs/msg/LandMark";
}

template<>
struct has_fixed_size<usr_msgs::msg::LandMark>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<usr_msgs::msg::LandMark>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<usr_msgs::msg::LandMark>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // USR_MSGS__MSG__DETAIL__LAND_MARK__TRAITS_HPP_
