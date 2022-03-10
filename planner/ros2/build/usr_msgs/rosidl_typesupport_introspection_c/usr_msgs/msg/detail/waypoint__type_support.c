// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from usr_msgs:msg/Waypoint.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "usr_msgs/msg/detail/waypoint__rosidl_typesupport_introspection_c.h"
#include "usr_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "usr_msgs/msg/detail/waypoint__functions.h"
#include "usr_msgs/msg/detail/waypoint__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void Waypoint__rosidl_typesupport_introspection_c__Waypoint_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  usr_msgs__msg__Waypoint__init(message_memory);
}

void Waypoint__rosidl_typesupport_introspection_c__Waypoint_fini_function(void * message_memory)
{
  usr_msgs__msg__Waypoint__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Waypoint__rosidl_typesupport_introspection_c__Waypoint_message_member_array[5] = {
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(usr_msgs__msg__Waypoint, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(usr_msgs__msg__Waypoint, x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(usr_msgs__msg__Waypoint, y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "t",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(usr_msgs__msg__Waypoint, t),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "dt",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(usr_msgs__msg__Waypoint, dt),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Waypoint__rosidl_typesupport_introspection_c__Waypoint_message_members = {
  "usr_msgs__msg",  // message namespace
  "Waypoint",  // message name
  5,  // number of fields
  sizeof(usr_msgs__msg__Waypoint),
  Waypoint__rosidl_typesupport_introspection_c__Waypoint_message_member_array,  // message members
  Waypoint__rosidl_typesupport_introspection_c__Waypoint_init_function,  // function to initialize message memory (memory has to be allocated)
  Waypoint__rosidl_typesupport_introspection_c__Waypoint_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Waypoint__rosidl_typesupport_introspection_c__Waypoint_message_type_support_handle = {
  0,
  &Waypoint__rosidl_typesupport_introspection_c__Waypoint_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_usr_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, usr_msgs, msg, Waypoint)() {
  if (!Waypoint__rosidl_typesupport_introspection_c__Waypoint_message_type_support_handle.typesupport_identifier) {
    Waypoint__rosidl_typesupport_introspection_c__Waypoint_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Waypoint__rosidl_typesupport_introspection_c__Waypoint_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
