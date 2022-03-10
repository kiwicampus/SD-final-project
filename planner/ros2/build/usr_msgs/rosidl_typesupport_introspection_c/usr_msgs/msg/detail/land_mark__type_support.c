// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from usr_msgs:msg/LandMark.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "usr_msgs/msg/detail/land_mark__rosidl_typesupport_introspection_c.h"
#include "usr_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "usr_msgs/msg/detail/land_mark__functions.h"
#include "usr_msgs/msg/detail/land_mark__struct.h"


// Include directives for member types
// Member `neighbors`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void LandMark__rosidl_typesupport_introspection_c__LandMark_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  usr_msgs__msg__LandMark__init(message_memory);
}

void LandMark__rosidl_typesupport_introspection_c__LandMark_fini_function(void * message_memory)
{
  usr_msgs__msg__LandMark__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember LandMark__rosidl_typesupport_introspection_c__LandMark_message_member_array[4] = {
  {
    "neighbors",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(usr_msgs__msg__LandMark, neighbors),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(usr_msgs__msg__LandMark, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(usr_msgs__msg__LandMark, x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(usr_msgs__msg__LandMark, y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers LandMark__rosidl_typesupport_introspection_c__LandMark_message_members = {
  "usr_msgs__msg",  // message namespace
  "LandMark",  // message name
  4,  // number of fields
  sizeof(usr_msgs__msg__LandMark),
  LandMark__rosidl_typesupport_introspection_c__LandMark_message_member_array,  // message members
  LandMark__rosidl_typesupport_introspection_c__LandMark_init_function,  // function to initialize message memory (memory has to be allocated)
  LandMark__rosidl_typesupport_introspection_c__LandMark_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t LandMark__rosidl_typesupport_introspection_c__LandMark_message_type_support_handle = {
  0,
  &LandMark__rosidl_typesupport_introspection_c__LandMark_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_usr_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, usr_msgs, msg, LandMark)() {
  if (!LandMark__rosidl_typesupport_introspection_c__LandMark_message_type_support_handle.typesupport_identifier) {
    LandMark__rosidl_typesupport_introspection_c__LandMark_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &LandMark__rosidl_typesupport_introspection_c__LandMark_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
