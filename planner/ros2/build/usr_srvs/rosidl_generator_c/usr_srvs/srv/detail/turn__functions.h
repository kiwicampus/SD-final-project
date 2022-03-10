// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from usr_srvs:srv/Turn.idl
// generated code does not contain a copyright notice

#ifndef USR_SRVS__SRV__DETAIL__TURN__FUNCTIONS_H_
#define USR_SRVS__SRV__DETAIL__TURN__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "usr_srvs/msg/rosidl_generator_c__visibility_control.h"

#include "usr_srvs/srv/detail/turn__struct.h"

/// Initialize srv/Turn message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * usr_srvs__srv__Turn_Request
 * )) before or use
 * usr_srvs__srv__Turn_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_usr_srvs
bool
usr_srvs__srv__Turn_Request__init(usr_srvs__srv__Turn_Request * msg);

/// Finalize srv/Turn message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_usr_srvs
void
usr_srvs__srv__Turn_Request__fini(usr_srvs__srv__Turn_Request * msg);

/// Create srv/Turn message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * usr_srvs__srv__Turn_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_usr_srvs
usr_srvs__srv__Turn_Request *
usr_srvs__srv__Turn_Request__create();

/// Destroy srv/Turn message.
/**
 * It calls
 * usr_srvs__srv__Turn_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_usr_srvs
void
usr_srvs__srv__Turn_Request__destroy(usr_srvs__srv__Turn_Request * msg);


/// Initialize array of srv/Turn messages.
/**
 * It allocates the memory for the number of elements and calls
 * usr_srvs__srv__Turn_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_usr_srvs
bool
usr_srvs__srv__Turn_Request__Sequence__init(usr_srvs__srv__Turn_Request__Sequence * array, size_t size);

/// Finalize array of srv/Turn messages.
/**
 * It calls
 * usr_srvs__srv__Turn_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_usr_srvs
void
usr_srvs__srv__Turn_Request__Sequence__fini(usr_srvs__srv__Turn_Request__Sequence * array);

/// Create array of srv/Turn messages.
/**
 * It allocates the memory for the array and calls
 * usr_srvs__srv__Turn_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_usr_srvs
usr_srvs__srv__Turn_Request__Sequence *
usr_srvs__srv__Turn_Request__Sequence__create(size_t size);

/// Destroy array of srv/Turn messages.
/**
 * It calls
 * usr_srvs__srv__Turn_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_usr_srvs
void
usr_srvs__srv__Turn_Request__Sequence__destroy(usr_srvs__srv__Turn_Request__Sequence * array);

/// Initialize srv/Turn message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * usr_srvs__srv__Turn_Response
 * )) before or use
 * usr_srvs__srv__Turn_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_usr_srvs
bool
usr_srvs__srv__Turn_Response__init(usr_srvs__srv__Turn_Response * msg);

/// Finalize srv/Turn message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_usr_srvs
void
usr_srvs__srv__Turn_Response__fini(usr_srvs__srv__Turn_Response * msg);

/// Create srv/Turn message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * usr_srvs__srv__Turn_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_usr_srvs
usr_srvs__srv__Turn_Response *
usr_srvs__srv__Turn_Response__create();

/// Destroy srv/Turn message.
/**
 * It calls
 * usr_srvs__srv__Turn_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_usr_srvs
void
usr_srvs__srv__Turn_Response__destroy(usr_srvs__srv__Turn_Response * msg);


/// Initialize array of srv/Turn messages.
/**
 * It allocates the memory for the number of elements and calls
 * usr_srvs__srv__Turn_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_usr_srvs
bool
usr_srvs__srv__Turn_Response__Sequence__init(usr_srvs__srv__Turn_Response__Sequence * array, size_t size);

/// Finalize array of srv/Turn messages.
/**
 * It calls
 * usr_srvs__srv__Turn_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_usr_srvs
void
usr_srvs__srv__Turn_Response__Sequence__fini(usr_srvs__srv__Turn_Response__Sequence * array);

/// Create array of srv/Turn messages.
/**
 * It allocates the memory for the array and calls
 * usr_srvs__srv__Turn_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_usr_srvs
usr_srvs__srv__Turn_Response__Sequence *
usr_srvs__srv__Turn_Response__Sequence__create(size_t size);

/// Destroy array of srv/Turn messages.
/**
 * It calls
 * usr_srvs__srv__Turn_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_usr_srvs
void
usr_srvs__srv__Turn_Response__Sequence__destroy(usr_srvs__srv__Turn_Response__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // USR_SRVS__SRV__DETAIL__TURN__FUNCTIONS_H_
