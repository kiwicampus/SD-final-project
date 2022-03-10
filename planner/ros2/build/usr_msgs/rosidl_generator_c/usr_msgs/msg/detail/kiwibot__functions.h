// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from usr_msgs:msg/Kiwibot.idl
// generated code does not contain a copyright notice

#ifndef USR_MSGS__MSG__DETAIL__KIWIBOT__FUNCTIONS_H_
#define USR_MSGS__MSG__DETAIL__KIWIBOT__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "usr_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "usr_msgs/msg/detail/kiwibot__struct.h"

/// Initialize msg/Kiwibot message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * usr_msgs__msg__Kiwibot
 * )) before or use
 * usr_msgs__msg__Kiwibot__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_usr_msgs
bool
usr_msgs__msg__Kiwibot__init(usr_msgs__msg__Kiwibot * msg);

/// Finalize msg/Kiwibot message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_usr_msgs
void
usr_msgs__msg__Kiwibot__fini(usr_msgs__msg__Kiwibot * msg);

/// Create msg/Kiwibot message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * usr_msgs__msg__Kiwibot__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_usr_msgs
usr_msgs__msg__Kiwibot *
usr_msgs__msg__Kiwibot__create();

/// Destroy msg/Kiwibot message.
/**
 * It calls
 * usr_msgs__msg__Kiwibot__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_usr_msgs
void
usr_msgs__msg__Kiwibot__destroy(usr_msgs__msg__Kiwibot * msg);


/// Initialize array of msg/Kiwibot messages.
/**
 * It allocates the memory for the number of elements and calls
 * usr_msgs__msg__Kiwibot__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_usr_msgs
bool
usr_msgs__msg__Kiwibot__Sequence__init(usr_msgs__msg__Kiwibot__Sequence * array, size_t size);

/// Finalize array of msg/Kiwibot messages.
/**
 * It calls
 * usr_msgs__msg__Kiwibot__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_usr_msgs
void
usr_msgs__msg__Kiwibot__Sequence__fini(usr_msgs__msg__Kiwibot__Sequence * array);

/// Create array of msg/Kiwibot messages.
/**
 * It allocates the memory for the array and calls
 * usr_msgs__msg__Kiwibot__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_usr_msgs
usr_msgs__msg__Kiwibot__Sequence *
usr_msgs__msg__Kiwibot__Sequence__create(size_t size);

/// Destroy array of msg/Kiwibot messages.
/**
 * It calls
 * usr_msgs__msg__Kiwibot__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_usr_msgs
void
usr_msgs__msg__Kiwibot__Sequence__destroy(usr_msgs__msg__Kiwibot__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // USR_MSGS__MSG__DETAIL__KIWIBOT__FUNCTIONS_H_
