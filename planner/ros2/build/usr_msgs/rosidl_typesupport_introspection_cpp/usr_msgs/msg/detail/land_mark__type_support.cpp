// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from usr_msgs:msg/LandMark.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "usr_msgs/msg/detail/land_mark__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace usr_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void LandMark_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) usr_msgs::msg::LandMark(_init);
}

void LandMark_fini_function(void * message_memory)
{
  auto typed_message = static_cast<usr_msgs::msg::LandMark *>(message_memory);
  typed_message->~LandMark();
}

size_t size_function__LandMark__neighbors(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int8_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__LandMark__neighbors(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int8_t> *>(untyped_member);
  return &member[index];
}

void * get_function__LandMark__neighbors(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int8_t> *>(untyped_member);
  return &member[index];
}

void resize_function__LandMark__neighbors(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int8_t> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember LandMark_message_member_array[4] = {
  {
    "neighbors",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(usr_msgs::msg::LandMark, neighbors),  // bytes offset in struct
    nullptr,  // default value
    size_function__LandMark__neighbors,  // size() function pointer
    get_const_function__LandMark__neighbors,  // get_const(index) function pointer
    get_function__LandMark__neighbors,  // get(index) function pointer
    resize_function__LandMark__neighbors  // resize(index) function pointer
  },
  {
    "id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(usr_msgs::msg::LandMark, id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "x",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(usr_msgs::msg::LandMark, x),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "y",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(usr_msgs::msg::LandMark, y),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers LandMark_message_members = {
  "usr_msgs::msg",  // message namespace
  "LandMark",  // message name
  4,  // number of fields
  sizeof(usr_msgs::msg::LandMark),
  LandMark_message_member_array,  // message members
  LandMark_init_function,  // function to initialize message memory (memory has to be allocated)
  LandMark_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t LandMark_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &LandMark_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace usr_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<usr_msgs::msg::LandMark>()
{
  return &::usr_msgs::msg::rosidl_typesupport_introspection_cpp::LandMark_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, usr_msgs, msg, LandMark)() {
  return &::usr_msgs::msg::rosidl_typesupport_introspection_cpp::LandMark_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
