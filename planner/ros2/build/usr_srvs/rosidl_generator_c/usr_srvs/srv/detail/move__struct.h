// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from usr_srvs:srv/Move.idl
// generated code does not contain a copyright notice

#ifndef USR_SRVS__SRV__DETAIL__MOVE__STRUCT_H_
#define USR_SRVS__SRV__DETAIL__MOVE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'waypoints'
#include "usr_msgs/msg/detail/waypoint__struct.h"

// Struct defined in srv/Move in the package usr_srvs.
typedef struct usr_srvs__srv__Move_Request
{
  usr_msgs__msg__Waypoint__Sequence waypoints;
} usr_srvs__srv__Move_Request;

// Struct for a sequence of usr_srvs__srv__Move_Request.
typedef struct usr_srvs__srv__Move_Request__Sequence
{
  usr_srvs__srv__Move_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} usr_srvs__srv__Move_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/Move in the package usr_srvs.
typedef struct usr_srvs__srv__Move_Response
{
  bool completed;
} usr_srvs__srv__Move_Response;

// Struct for a sequence of usr_srvs__srv__Move_Response.
typedef struct usr_srvs__srv__Move_Response__Sequence
{
  usr_srvs__srv__Move_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} usr_srvs__srv__Move_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // USR_SRVS__SRV__DETAIL__MOVE__STRUCT_H_
