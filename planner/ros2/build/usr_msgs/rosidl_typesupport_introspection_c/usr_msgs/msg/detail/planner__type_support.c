// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from usr_msgs:msg/Planner.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "usr_msgs/msg/detail/planner__rosidl_typesupport_introspection_c.h"
#include "usr_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "usr_msgs/msg/detail/planner__functions.h"
#include "usr_msgs/msg/detail/planner__struct.h"


// Include directives for member types
// Member `land_marks`
#include "usr_msgs/msg/land_mark.h"
// Member `land_marks`
#include "usr_msgs/msg/detail/land_mark__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Planner__rosidl_typesupport_introspection_c__Planner_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  usr_msgs__msg__Planner__init(message_memory);
}

void Planner__rosidl_typesupport_introspection_c__Planner_fini_function(void * message_memory)
{
  usr_msgs__msg__Planner__fini(message_memory);
}

size_t Planner__rosidl_typesupport_introspection_c__size_function__LandMark__land_marks(
  const void * untyped_member)
{
  const usr_msgs__msg__LandMark__Sequence * member =
    (const usr_msgs__msg__LandMark__Sequence *)(untyped_member);
  return member->size;
}

const void * Planner__rosidl_typesupport_introspection_c__get_const_function__LandMark__land_marks(
  const void * untyped_member, size_t index)
{
  const usr_msgs__msg__LandMark__Sequence * member =
    (const usr_msgs__msg__LandMark__Sequence *)(untyped_member);
  return &member->data[index];
}

void * Planner__rosidl_typesupport_introspection_c__get_function__LandMark__land_marks(
  void * untyped_member, size_t index)
{
  usr_msgs__msg__LandMark__Sequence * member =
    (usr_msgs__msg__LandMark__Sequence *)(untyped_member);
  return &member->data[index];
}

bool Planner__rosidl_typesupport_introspection_c__resize_function__LandMark__land_marks(
  void * untyped_member, size_t size)
{
  usr_msgs__msg__LandMark__Sequence * member =
    (usr_msgs__msg__LandMark__Sequence *)(untyped_member);
  usr_msgs__msg__LandMark__Sequence__fini(member);
  return usr_msgs__msg__LandMark__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember Planner__rosidl_typesupport_introspection_c__Planner_message_member_array[4] = {
  {
    "land_marks",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(usr_msgs__msg__Planner, land_marks),  // bytes offset in struct
    NULL,  // default value
    Planner__rosidl_typesupport_introspection_c__size_function__LandMark__land_marks,  // size() function pointer
    Planner__rosidl_typesupport_introspection_c__get_const_function__LandMark__land_marks,  // get_const(index) function pointer
    Planner__rosidl_typesupport_introspection_c__get_function__LandMark__land_marks,  // get(index) function pointer
    Planner__rosidl_typesupport_introspection_c__resize_function__LandMark__land_marks  // resize(index) function pointer
  },
  {
    "distance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(usr_msgs__msg__Planner, distance),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "duration",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(usr_msgs__msg__Planner, duration),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "difficulty",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(usr_msgs__msg__Planner, difficulty),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Planner__rosidl_typesupport_introspection_c__Planner_message_members = {
  "usr_msgs__msg",  // message namespace
  "Planner",  // message name
  4,  // number of fields
  sizeof(usr_msgs__msg__Planner),
  Planner__rosidl_typesupport_introspection_c__Planner_message_member_array,  // message members
  Planner__rosidl_typesupport_introspection_c__Planner_init_function,  // function to initialize message memory (memory has to be allocated)
  Planner__rosidl_typesupport_introspection_c__Planner_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Planner__rosidl_typesupport_introspection_c__Planner_message_type_support_handle = {
  0,
  &Planner__rosidl_typesupport_introspection_c__Planner_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_usr_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, usr_msgs, msg, Planner)() {
  Planner__rosidl_typesupport_introspection_c__Planner_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, usr_msgs, msg, LandMark)();
  if (!Planner__rosidl_typesupport_introspection_c__Planner_message_type_support_handle.typesupport_identifier) {
    Planner__rosidl_typesupport_introspection_c__Planner_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Planner__rosidl_typesupport_introspection_c__Planner_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
