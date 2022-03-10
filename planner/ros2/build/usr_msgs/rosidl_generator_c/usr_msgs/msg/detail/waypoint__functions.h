// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from usr_msgs:msg/Waypoint.idl
// generated code does not contain a copyright notice

#ifndef USR_MSGS__MSG__DETAIL__WAYPOINT__FUNCTIONS_H_
#define USR_MSGS__MSG__DETAIL__WAYPOINT__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "usr_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "usr_msgs/msg/detail/waypoint__struct.h"

/// Initialize msg/Waypoint message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * usr_msgs__msg__Waypoint
 * )) before or use
 * usr_msgs__msg__Waypoint__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_usr_msgs
bool
usr_msgs__msg__Waypoint__init(usr_msgs__msg__Waypoint * msg);

/// Finalize msg/Waypoint message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_usr_msgs
void
usr_msgs__msg__Waypoint__fini(usr_msgs__msg__Waypoint * msg);

/// Create msg/Waypoint message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * usr_msgs__msg__Waypoint__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_usr_msgs
usr_msgs__msg__Waypoint *
usr_msgs__msg__Waypoint__create();

/// Destroy msg/Waypoint message.
/**
 * It calls
 * usr_msgs__msg__Waypoint__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_usr_msgs
void
usr_msgs__msg__Waypoint__destroy(usr_msgs__msg__Waypoint * msg);


/// Initialize array of msg/Waypoint messages.
/**
 * It allocates the memory for the number of elements and calls
 * usr_msgs__msg__Waypoint__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_usr_msgs
bool
usr_msgs__msg__Waypoint__Sequence__init(usr_msgs__msg__Waypoint__Sequence * array, size_t size);

/// Finalize array of msg/Waypoint messages.
/**
 * It calls
 * usr_msgs__msg__Waypoint__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_usr_msgs
void
usr_msgs__msg__Waypoint__Sequence__fini(usr_msgs__msg__Waypoint__Sequence * array);

/// Create array of msg/Waypoint messages.
/**
 * It allocates the memory for the array and calls
 * usr_msgs__msg__Waypoint__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_usr_msgs
usr_msgs__msg__Waypoint__Sequence *
usr_msgs__msg__Waypoint__Sequence__create(size_t size);

/// Destroy array of msg/Waypoint messages.
/**
 * It calls
 * usr_msgs__msg__Waypoint__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_usr_msgs
void
usr_msgs__msg__Waypoint__Sequence__destroy(usr_msgs__msg__Waypoint__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // USR_MSGS__MSG__DETAIL__WAYPOINT__FUNCTIONS_H_
