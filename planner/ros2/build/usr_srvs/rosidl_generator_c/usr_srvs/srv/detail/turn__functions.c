// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from usr_srvs:srv/Turn.idl
// generated code does not contain a copyright notice
#include "usr_srvs/srv/detail/turn__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// Include directives for member types
// Member `turn_ref`
#include "usr_msgs/msg/detail/turn_ref__functions.h"

bool
usr_srvs__srv__Turn_Request__init(usr_srvs__srv__Turn_Request * msg)
{
  if (!msg) {
    return false;
  }
  // turn_ref
  if (!usr_msgs__msg__TurnRef__Sequence__init(&msg->turn_ref, 0)) {
    usr_srvs__srv__Turn_Request__fini(msg);
    return false;
  }
  return true;
}

void
usr_srvs__srv__Turn_Request__fini(usr_srvs__srv__Turn_Request * msg)
{
  if (!msg) {
    return;
  }
  // turn_ref
  usr_msgs__msg__TurnRef__Sequence__fini(&msg->turn_ref);
}

usr_srvs__srv__Turn_Request *
usr_srvs__srv__Turn_Request__create()
{
  usr_srvs__srv__Turn_Request * msg = (usr_srvs__srv__Turn_Request *)malloc(sizeof(usr_srvs__srv__Turn_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(usr_srvs__srv__Turn_Request));
  bool success = usr_srvs__srv__Turn_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
usr_srvs__srv__Turn_Request__destroy(usr_srvs__srv__Turn_Request * msg)
{
  if (msg) {
    usr_srvs__srv__Turn_Request__fini(msg);
  }
  free(msg);
}


bool
usr_srvs__srv__Turn_Request__Sequence__init(usr_srvs__srv__Turn_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  usr_srvs__srv__Turn_Request * data = NULL;
  if (size) {
    data = (usr_srvs__srv__Turn_Request *)calloc(size, sizeof(usr_srvs__srv__Turn_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = usr_srvs__srv__Turn_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        usr_srvs__srv__Turn_Request__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
usr_srvs__srv__Turn_Request__Sequence__fini(usr_srvs__srv__Turn_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      usr_srvs__srv__Turn_Request__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

usr_srvs__srv__Turn_Request__Sequence *
usr_srvs__srv__Turn_Request__Sequence__create(size_t size)
{
  usr_srvs__srv__Turn_Request__Sequence * array = (usr_srvs__srv__Turn_Request__Sequence *)malloc(sizeof(usr_srvs__srv__Turn_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = usr_srvs__srv__Turn_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
usr_srvs__srv__Turn_Request__Sequence__destroy(usr_srvs__srv__Turn_Request__Sequence * array)
{
  if (array) {
    usr_srvs__srv__Turn_Request__Sequence__fini(array);
  }
  free(array);
}


bool
usr_srvs__srv__Turn_Response__init(usr_srvs__srv__Turn_Response * msg)
{
  if (!msg) {
    return false;
  }
  // completed
  return true;
}

void
usr_srvs__srv__Turn_Response__fini(usr_srvs__srv__Turn_Response * msg)
{
  if (!msg) {
    return;
  }
  // completed
}

usr_srvs__srv__Turn_Response *
usr_srvs__srv__Turn_Response__create()
{
  usr_srvs__srv__Turn_Response * msg = (usr_srvs__srv__Turn_Response *)malloc(sizeof(usr_srvs__srv__Turn_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(usr_srvs__srv__Turn_Response));
  bool success = usr_srvs__srv__Turn_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
usr_srvs__srv__Turn_Response__destroy(usr_srvs__srv__Turn_Response * msg)
{
  if (msg) {
    usr_srvs__srv__Turn_Response__fini(msg);
  }
  free(msg);
}


bool
usr_srvs__srv__Turn_Response__Sequence__init(usr_srvs__srv__Turn_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  usr_srvs__srv__Turn_Response * data = NULL;
  if (size) {
    data = (usr_srvs__srv__Turn_Response *)calloc(size, sizeof(usr_srvs__srv__Turn_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = usr_srvs__srv__Turn_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        usr_srvs__srv__Turn_Response__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
usr_srvs__srv__Turn_Response__Sequence__fini(usr_srvs__srv__Turn_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      usr_srvs__srv__Turn_Response__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

usr_srvs__srv__Turn_Response__Sequence *
usr_srvs__srv__Turn_Response__Sequence__create(size_t size)
{
  usr_srvs__srv__Turn_Response__Sequence * array = (usr_srvs__srv__Turn_Response__Sequence *)malloc(sizeof(usr_srvs__srv__Turn_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = usr_srvs__srv__Turn_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
usr_srvs__srv__Turn_Response__Sequence__destroy(usr_srvs__srv__Turn_Response__Sequence * array)
{
  if (array) {
    usr_srvs__srv__Turn_Response__Sequence__fini(array);
  }
  free(array);
}
