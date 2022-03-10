// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from usr_msgs:msg/Kiwibot.idl
// generated code does not contain a copyright notice

#ifndef USR_MSGS__MSG__DETAIL__KIWIBOT__STRUCT_H_
#define USR_MSGS__MSG__DETAIL__KIWIBOT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/Kiwibot in the package usr_msgs.
typedef struct usr_msgs__msg__Kiwibot
{
  int16_t pos_x;
  int16_t pos_y;
  float dist;
  float speed;
  float time;
  float yaw;
  bool moving;
} usr_msgs__msg__Kiwibot;

// Struct for a sequence of usr_msgs__msg__Kiwibot.
typedef struct usr_msgs__msg__Kiwibot__Sequence
{
  usr_msgs__msg__Kiwibot * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} usr_msgs__msg__Kiwibot__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // USR_MSGS__MSG__DETAIL__KIWIBOT__STRUCT_H_
