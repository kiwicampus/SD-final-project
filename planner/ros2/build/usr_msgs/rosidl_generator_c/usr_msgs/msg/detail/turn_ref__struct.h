// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from usr_msgs:msg/TurnRef.idl
// generated code does not contain a copyright notice

#ifndef USR_MSGS__MSG__DETAIL__TURN_REF__STRUCT_H_
#define USR_MSGS__MSG__DETAIL__TURN_REF__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/TurnRef in the package usr_msgs.
typedef struct usr_msgs__msg__TurnRef
{
  int8_t id;
  float yaw;
  float t;
  float dt;
} usr_msgs__msg__TurnRef;

// Struct for a sequence of usr_msgs__msg__TurnRef.
typedef struct usr_msgs__msg__TurnRef__Sequence
{
  usr_msgs__msg__TurnRef * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} usr_msgs__msg__TurnRef__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // USR_MSGS__MSG__DETAIL__TURN_REF__STRUCT_H_
