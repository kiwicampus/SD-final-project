// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from usr_msgs:msg/Planner.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "usr_msgs/msg/detail/planner__struct.h"
#include "usr_msgs/msg/detail/planner__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "usr_msgs/msg/detail/land_mark__functions.h"
// end nested array functions include
bool usr_msgs__msg__land_mark__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * usr_msgs__msg__land_mark__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool usr_msgs__msg__planner__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[30];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("usr_msgs.msg._planner.Planner", full_classname_dest, 29) == 0);
  }
  usr_msgs__msg__Planner * ros_message = _ros_message;
  {  // land_marks
    PyObject * field = PyObject_GetAttrString(_pymsg, "land_marks");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'land_marks'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!usr_msgs__msg__LandMark__Sequence__init(&(ros_message->land_marks), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create usr_msgs__msg__LandMark__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    usr_msgs__msg__LandMark * dest = ros_message->land_marks.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!usr_msgs__msg__land_mark__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // distance
    PyObject * field = PyObject_GetAttrString(_pymsg, "distance");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->distance = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // duration
    PyObject * field = PyObject_GetAttrString(_pymsg, "duration");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->duration = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // difficulty
    PyObject * field = PyObject_GetAttrString(_pymsg, "difficulty");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->difficulty = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * usr_msgs__msg__planner__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Planner */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("usr_msgs.msg._planner");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Planner");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  usr_msgs__msg__Planner * ros_message = (usr_msgs__msg__Planner *)raw_ros_message;
  {  // land_marks
    PyObject * field = NULL;
    size_t size = ros_message->land_marks.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    usr_msgs__msg__LandMark * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->land_marks.data[i]);
      PyObject * pyitem = usr_msgs__msg__land_mark__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "land_marks", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // distance
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->distance);
    {
      int rc = PyObject_SetAttrString(_pymessage, "distance", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // duration
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->duration);
    {
      int rc = PyObject_SetAttrString(_pymessage, "duration", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // difficulty
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->difficulty);
    {
      int rc = PyObject_SetAttrString(_pymessage, "difficulty", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
