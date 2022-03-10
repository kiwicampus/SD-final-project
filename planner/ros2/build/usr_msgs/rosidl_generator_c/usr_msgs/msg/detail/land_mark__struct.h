// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from usr_msgs:msg/LandMark.idl
// generated code does not contain a copyright notice

#ifndef USR_MSGS__MSG__DETAIL__LAND_MARK__STRUCT_H_
#define USR_MSGS__MSG__DETAIL__LAND_MARK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'neighbors'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in msg/LandMark in the package usr_msgs.
typedef struct usr_msgs__msg__LandMark
{
  rosidl_runtime_c__int8__Sequence neighbors;
  int8_t id;
  int32_t x;
  int32_t y;
} usr_msgs__msg__LandMark;

// Struct for a sequence of usr_msgs__msg__LandMark.
typedef struct usr_msgs__msg__LandMark__Sequence
{
  usr_msgs__msg__LandMark * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} usr_msgs__msg__LandMark__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // USR_MSGS__MSG__DETAIL__LAND_MARK__STRUCT_H_
