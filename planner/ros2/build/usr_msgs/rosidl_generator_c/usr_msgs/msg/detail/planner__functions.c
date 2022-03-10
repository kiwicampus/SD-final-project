// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from usr_msgs:msg/Planner.idl
// generated code does not contain a copyright notice
#include "usr_msgs/msg/detail/planner__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `land_marks`
#include "usr_msgs/msg/detail/land_mark__functions.h"

bool
usr_msgs__msg__Planner__init(usr_msgs__msg__Planner * msg)
{
  if (!msg) {
    return false;
  }
  // land_marks
  if (!usr_msgs__msg__LandMark__Sequence__init(&msg->land_marks, 0)) {
    usr_msgs__msg__Planner__fini(msg);
    return false;
  }
  // distance
  // duration
  // difficulty
  return true;
}

void
usr_msgs__msg__Planner__fini(usr_msgs__msg__Planner * msg)
{
  if (!msg) {
    return;
  }
  // land_marks
  usr_msgs__msg__LandMark__Sequence__fini(&msg->land_marks);
  // distance
  // duration
  // difficulty
}

usr_msgs__msg__Planner *
usr_msgs__msg__Planner__create()
{
  usr_msgs__msg__Planner * msg = (usr_msgs__msg__Planner *)malloc(sizeof(usr_msgs__msg__Planner));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(usr_msgs__msg__Planner));
  bool success = usr_msgs__msg__Planner__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
usr_msgs__msg__Planner__destroy(usr_msgs__msg__Planner * msg)
{
  if (msg) {
    usr_msgs__msg__Planner__fini(msg);
  }
  free(msg);
}


bool
usr_msgs__msg__Planner__Sequence__init(usr_msgs__msg__Planner__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  usr_msgs__msg__Planner * data = NULL;
  if (size) {
    data = (usr_msgs__msg__Planner *)calloc(size, sizeof(usr_msgs__msg__Planner));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = usr_msgs__msg__Planner__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        usr_msgs__msg__Planner__fini(&data[i - 1]);
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
usr_msgs__msg__Planner__Sequence__fini(usr_msgs__msg__Planner__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      usr_msgs__msg__Planner__fini(&array->data[i]);
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

usr_msgs__msg__Planner__Sequence *
usr_msgs__msg__Planner__Sequence__create(size_t size)
{
  usr_msgs__msg__Planner__Sequence * array = (usr_msgs__msg__Planner__Sequence *)malloc(sizeof(usr_msgs__msg__Planner__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = usr_msgs__msg__Planner__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
usr_msgs__msg__Planner__Sequence__destroy(usr_msgs__msg__Planner__Sequence * array)
{
  if (array) {
    usr_msgs__msg__Planner__Sequence__fini(array);
  }
  free(array);
}
