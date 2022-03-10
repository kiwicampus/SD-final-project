// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from usr_msgs:msg/Planner.idl
// generated code does not contain a copyright notice

#ifndef USR_MSGS__MSG__DETAIL__PLANNER__TRAITS_HPP_
#define USR_MSGS__MSG__DETAIL__PLANNER__TRAITS_HPP_

#include "usr_msgs/msg/detail/planner__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'land_marks'
#include "usr_msgs/msg/detail/land_mark__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const usr_msgs::msg::Planner & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: land_marks
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.land_marks.size() == 0) {
      out << "land_marks: []\n";
    } else {
      out << "land_marks:\n";
      for (auto item : msg.land_marks) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: distance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "distance: ";
    value_to_yaml(msg.distance, out);
    out << "\n";
  }

  // member: duration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "duration: ";
    value_to_yaml(msg.duration, out);
    out << "\n";
  }

  // member: difficulty
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "difficulty: ";
    value_to_yaml(msg.difficulty, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const usr_msgs::msg::Planner & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<usr_msgs::msg::Planner>()
{
  return "usr_msgs::msg::Planner";
}

template<>
inline const char * name<usr_msgs::msg::Planner>()
{
  return "usr_msgs/msg/Planner";
}

template<>
struct has_fixed_size<usr_msgs::msg::Planner>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<usr_msgs::msg::Planner>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<usr_msgs::msg::Planner>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // USR_MSGS__MSG__DETAIL__PLANNER__TRAITS_HPP_
