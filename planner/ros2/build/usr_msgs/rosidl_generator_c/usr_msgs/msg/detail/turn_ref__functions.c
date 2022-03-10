// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from usr_msgs:msg/TurnRef.idl
// generated code does not contain a copyright notice
#include "usr_msgs/msg/detail/turn_ref__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
usr_msgs__msg__TurnRef__init(usr_msgs__msg__TurnRef * msg)
{
  if (!msg) {
    return false;
  }
  // id
  // yaw
  // t
  // dt
  return true;
}

void
usr_msgs__msg__TurnRef__fini(usr_msgs__msg__TurnRef * msg)
{
  if (!msg) {
    return;
  }
  // id
  // yaw
  // t
  // dt
}

usr_msgs__msg__TurnRef *
usr_msgs__msg__TurnRef__create()
{
  usr_msgs__msg__TurnRef * msg = (usr_msgs__msg__TurnRef *)malloc(sizeof(usr_msgs__msg__TurnRef));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(usr_msgs__msg__TurnRef));
  bool success = usr_msgs__msg__TurnRef__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
usr_msgs__msg__TurnRef__destroy(usr_msgs__msg__TurnRef * msg)
{
  if (msg) {
    usr_msgs__msg__TurnRef__fini(msg);
  }
  free(msg);
}


bool
usr_msgs__msg__TurnRef__Sequence__init(usr_msgs__msg__TurnRef__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  usr_msgs__msg__TurnRef * data = NULL;
  if (size) {
    data = (usr_msgs__msg__TurnRef *)calloc(size, sizeof(usr_msgs__msg__TurnRef));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = usr_msgs__msg__TurnRef__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        usr_msgs__msg__TurnRef__fini(&data[i - 1]);
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
usr_msgs__msg__TurnRef__Sequence__fini(usr_msgs__msg__TurnRef__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      usr_msgs__msg__TurnRef__fini(&array->data[i]);
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

usr_msgs__msg__TurnRef__Sequence *
usr_msgs__msg__TurnRef__Sequence__create(size_t size)
{
  usr_msgs__msg__TurnRef__Sequence * array = (usr_msgs__msg__TurnRef__Sequence *)malloc(sizeof(usr_msgs__msg__TurnRef__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = usr_msgs__msg__TurnRef__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
usr_msgs__msg__TurnRef__Sequence__destroy(usr_msgs__msg__TurnRef__Sequence * array)
{
  if (array) {
    usr_msgs__msg__TurnRef__Sequence__fini(array);
  }
  free(array);
}
