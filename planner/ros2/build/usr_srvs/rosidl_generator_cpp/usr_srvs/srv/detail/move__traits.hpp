// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from usr_srvs:srv/Move.idl
// generated code does not contain a copyright notice

#ifndef USR_SRVS__SRV__DETAIL__MOVE__TRAITS_HPP_
#define USR_SRVS__SRV__DETAIL__MOVE__TRAITS_HPP_

#include "usr_srvs/srv/detail/move__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'waypoints'
#include "usr_msgs/msg/detail/waypoint__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const usr_srvs::srv::Move_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: waypoints
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.waypoints.size() == 0) {
      out << "waypoints: []\n";
    } else {
      out << "waypoints:\n";
      for (auto item : msg.waypoints) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const usr_srvs::srv::Move_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<usr_srvs::srv::Move_Request>()
{
  return "usr_srvs::srv::Move_Request";
}

template<>
inline const char * name<usr_srvs::srv::Move_Request>()
{
  return "usr_srvs/srv/Move_Request";
}

template<>
struct has_fixed_size<usr_srvs::srv::Move_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<usr_srvs::srv::Move_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<usr_srvs::srv::Move_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

inline void to_yaml(
  const usr_srvs::srv::Move_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: completed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "completed: ";
    value_to_yaml(msg.completed, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const usr_srvs::srv::Move_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<usr_srvs::srv::Move_Response>()
{
  return "usr_srvs::srv::Move_Response";
}

template<>
inline const char * name<usr_srvs::srv::Move_Response>()
{
  return "usr_srvs/srv/Move_Response";
}

template<>
struct has_fixed_size<usr_srvs::srv::Move_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<usr_srvs::srv::Move_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<usr_srvs::srv::Move_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<usr_srvs::srv::Move>()
{
  return "usr_srvs::srv::Move";
}

template<>
inline const char * name<usr_srvs::srv::Move>()
{
  return "usr_srvs/srv/Move";
}

template<>
struct has_fixed_size<usr_srvs::srv::Move>
  : std::integral_constant<
    bool,
    has_fixed_size<usr_srvs::srv::Move_Request>::value &&
    has_fixed_size<usr_srvs::srv::Move_Response>::value
  >
{
};

template<>
struct has_bounded_size<usr_srvs::srv::Move>
  : std::integral_constant<
    bool,
    has_bounded_size<usr_srvs::srv::Move_Request>::value &&
    has_bounded_size<usr_srvs::srv::Move_Response>::value
  >
{
};

template<>
struct is_service<usr_srvs::srv::Move>
  : std::true_type
{
};

template<>
struct is_service_request<usr_srvs::srv::Move_Request>
  : std::true_type
{
};

template<>
struct is_service_response<usr_srvs::srv::Move_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // USR_SRVS__SRV__DETAIL__MOVE__TRAITS_HPP_
