// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from usr_msgs:msg/Kiwibot.idl
// generated code does not contain a copyright notice
#include "usr_msgs/msg/detail/kiwibot__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
usr_msgs__msg__Kiwibot__init(usr_msgs__msg__Kiwibot * msg)
{
  if (!msg) {
    return false;
  }
  // pos_x
  // pos_y
  // dist
  // speed
  // time
  // yaw
  // moving
  return true;
}

void
usr_msgs__msg__Kiwibot__fini(usr_msgs__msg__Kiwibot * msg)
{
  if (!msg) {
    return;
  }
  // pos_x
  // pos_y
  // dist
  // speed
  // time
  // yaw
  // moving
}

usr_msgs__msg__Kiwibot *
usr_msgs__msg__Kiwibot__create()
{
  usr_msgs__msg__Kiwibot * msg = (usr_msgs__msg__Kiwibot *)malloc(sizeof(usr_msgs__msg__Kiwibot));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(usr_msgs__msg__Kiwibot));
  bool success = usr_msgs__msg__Kiwibot__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
usr_msgs__msg__Kiwibot__destroy(usr_msgs__msg__Kiwibot * msg)
{
  if (msg) {
    usr_msgs__msg__Kiwibot__fini(msg);
  }
  free(msg);
}


bool
usr_msgs__msg__Kiwibot__Sequence__init(usr_msgs__msg__Kiwibot__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  usr_msgs__msg__Kiwibot * data = NULL;
  if (size) {
    data = (usr_msgs__msg__Kiwibot *)calloc(size, sizeof(usr_msgs__msg__Kiwibot));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = usr_msgs__msg__Kiwibot__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        usr_msgs__msg__Kiwibot__fini(&data[i - 1]);
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
usr_msgs__msg__Kiwibot__Sequence__fini(usr_msgs__msg__Kiwibot__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      usr_msgs__msg__Kiwibot__fini(&array->data[i]);
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

usr_msgs__msg__Kiwibot__Sequence *
usr_msgs__msg__Kiwibot__Sequence__create(size_t size)
{
  usr_msgs__msg__Kiwibot__Sequence * array = (usr_msgs__msg__Kiwibot__Sequence *)malloc(sizeof(usr_msgs__msg__Kiwibot__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = usr_msgs__msg__Kiwibot__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
usr_msgs__msg__Kiwibot__Sequence__destroy(usr_msgs__msg__Kiwibot__Sequence * array)
{
  if (array) {
    usr_msgs__msg__Kiwibot__Sequence__fini(array);
  }
  free(array);
}
