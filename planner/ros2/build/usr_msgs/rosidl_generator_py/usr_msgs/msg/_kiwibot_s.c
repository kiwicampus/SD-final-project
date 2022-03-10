// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from usr_msgs:msg/Kiwibot.idl
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
#include "usr_msgs/msg/detail/kiwibot__struct.h"
#include "usr_msgs/msg/detail/kiwibot__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool usr_msgs__msg__kiwibot__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("usr_msgs.msg._kiwibot.Kiwibot", full_classname_dest, 29) == 0);
  }
  usr_msgs__msg__Kiwibot * ros_message = _ros_message;
  {  // pos_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "pos_x");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->pos_x = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // pos_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "pos_y");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->pos_y = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // dist
    PyObject * field = PyObject_GetAttrString(_pymsg, "dist");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->dist = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "speed");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->speed = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // time
    PyObject * field = PyObject_GetAttrString(_pymsg, "time");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->time = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // yaw
    PyObject * field = PyObject_GetAttrString(_pymsg, "yaw");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->yaw = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // moving
    PyObject * field = PyObject_GetAttrString(_pymsg, "moving");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->moving = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * usr_msgs__msg__kiwibot__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Kiwibot */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("usr_msgs.msg._kiwibot");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Kiwibot");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  usr_msgs__msg__Kiwibot * ros_message = (usr_msgs__msg__Kiwibot *)raw_ros_message;
  {  // pos_x
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->pos_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pos_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pos_y
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->pos_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pos_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dist
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->dist);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dist", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // speed
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // time
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->time);
    {
      int rc = PyObject_SetAttrString(_pymessage, "time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // yaw
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->yaw);
    {
      int rc = PyObject_SetAttrString(_pymessage, "yaw", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // moving
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->moving ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "moving", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
