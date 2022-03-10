// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from usr_msgs:msg/LandMark.idl
// generated code does not contain a copyright notice
#include "usr_msgs/msg/detail/land_mark__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `neighbors`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
usr_msgs__msg__LandMark__init(usr_msgs__msg__LandMark * msg)
{
  if (!msg) {
    return false;
  }
  // neighbors
  if (!rosidl_runtime_c__int8__Sequence__init(&msg->neighbors, 0)) {
    usr_msgs__msg__LandMark__fini(msg);
    return false;
  }
  // id
  // x
  // y
  return true;
}

void
usr_msgs__msg__LandMark__fini(usr_msgs__msg__LandMark * msg)
{
  if (!msg) {
    return;
  }
  // neighbors
  rosidl_runtime_c__int8__Sequence__fini(&msg->neighbors);
  // id
  // x
  // y
}

usr_msgs__msg__LandMark *
usr_msgs__msg__LandMark__create()
{
  usr_msgs__msg__LandMark * msg = (usr_msgs__msg__LandMark *)malloc(sizeof(usr_msgs__msg__LandMark));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(usr_msgs__msg__LandMark));
  bool success = usr_msgs__msg__LandMark__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
usr_msgs__msg__LandMark__destroy(usr_msgs__msg__LandMark * msg)
{
  if (msg) {
    usr_msgs__msg__LandMark__fini(msg);
  }
  free(msg);
}


bool
usr_msgs__msg__LandMark__Sequence__init(usr_msgs__msg__LandMark__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  usr_msgs__msg__LandMark * data = NULL;
  if (size) {
    data = (usr_msgs__msg__LandMark *)calloc(size, sizeof(usr_msgs__msg__LandMark));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = usr_msgs__msg__LandMark__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        usr_msgs__msg__LandMark__fini(&data[i - 1]);
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
usr_msgs__msg__LandMark__Sequence__fini(usr_msgs__msg__LandMark__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      usr_msgs__msg__LandMark__fini(&array->data[i]);
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

usr_msgs__msg__LandMark__Sequence *
usr_msgs__msg__LandMark__Sequence__create(size_t size)
{
  usr_msgs__msg__LandMark__Sequence * array = (usr_msgs__msg__LandMark__Sequence *)malloc(sizeof(usr_msgs__msg__LandMark__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = usr_msgs__msg__LandMark__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
usr_msgs__msg__LandMark__Sequence__destroy(usr_msgs__msg__LandMark__Sequence * array)
{
  if (array) {
    usr_msgs__msg__LandMark__Sequence__fini(array);
  }
  free(array);
}
