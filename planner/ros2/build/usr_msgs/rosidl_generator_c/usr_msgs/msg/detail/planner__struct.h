// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from usr_msgs:msg/Planner.idl
// generated code does not contain a copyright notice

#ifndef USR_MSGS__MSG__DETAIL__PLANNER__STRUCT_H_
#define USR_MSGS__MSG__DETAIL__PLANNER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'land_marks'
#include "usr_msgs/msg/detail/land_mark__struct.h"

// Struct defined in msg/Planner in the package usr_msgs.
typedef struct usr_msgs__msg__Planner
{
  usr_msgs__msg__LandMark__Sequence land_marks;
  float distance;
  float duration;
  float difficulty;
} usr_msgs__msg__Planner;

// Struct for a sequence of usr_msgs__msg__Planner.
typedef struct usr_msgs__msg__Planner__Sequence
{
  usr_msgs__msg__Planner * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} usr_msgs__msg__Planner__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // USR_MSGS__MSG__DETAIL__PLANNER__STRUCT_H_
