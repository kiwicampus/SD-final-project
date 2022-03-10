// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from usr_srvs:srv/Turn.idl
// generated code does not contain a copyright notice

#ifndef USR_SRVS__SRV__DETAIL__TURN__STRUCT_H_
#define USR_SRVS__SRV__DETAIL__TURN__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'turn_ref'
#include "usr_msgs/msg/detail/turn_ref__struct.h"

// Struct defined in srv/Turn in the package usr_srvs.
typedef struct usr_srvs__srv__Turn_Request
{
  usr_msgs__msg__TurnRef__Sequence turn_ref;
} usr_srvs__srv__Turn_Request;

// Struct for a sequence of usr_srvs__srv__Turn_Request.
typedef struct usr_srvs__srv__Turn_Request__Sequence
{
  usr_srvs__srv__Turn_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} usr_srvs__srv__Turn_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/Turn in the package usr_srvs.
typedef struct usr_srvs__srv__Turn_Response
{
  bool completed;
} usr_srvs__srv__Turn_Response;

// Struct for a sequence of usr_srvs__srv__Turn_Response.
typedef struct usr_srvs__srv__Turn_Response__Sequence
{
  usr_srvs__srv__Turn_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} usr_srvs__srv__Turn_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // USR_SRVS__SRV__DETAIL__TURN__STRUCT_H_
