// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from usr_srvs:srv/Turn.idl
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
#include "usr_srvs/srv/detail/turn__struct.h"
#include "usr_srvs/srv/detail/turn__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "usr_msgs/msg/detail/turn_ref__functions.h"
// end nested array functions include
ROSIDL_GENERATOR_C_IMPORT
bool usr_msgs__msg__turn_ref__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * usr_msgs__msg__turn_ref__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool usr_srvs__srv__turn__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[32];
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
    assert(strncmp("usr_srvs.srv._turn.Turn_Request", full_classname_dest, 31) == 0);
  }
  usr_srvs__srv__Turn_Request * ros_message = _ros_message;
  {  // turn_ref
    PyObject * field = PyObject_GetAttrString(_pymsg, "turn_ref");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'turn_ref'");
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
    if (!usr_msgs__msg__TurnRef__Sequence__init(&(ros_message->turn_ref), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create usr_msgs__msg__TurnRef__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    usr_msgs__msg__TurnRef * dest = ros_message->turn_ref.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!usr_msgs__msg__turn_ref__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * usr_srvs__srv__turn__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Turn_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("usr_srvs.srv._turn");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Turn_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  usr_srvs__srv__Turn_Request * ros_message = (usr_srvs__srv__Turn_Request *)raw_ros_message;
  {  // turn_ref
    PyObject * field = NULL;
    size_t size = ros_message->turn_ref.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    usr_msgs__msg__TurnRef * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->turn_ref.data[i]);
      PyObject * pyitem = usr_msgs__msg__turn_ref__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "turn_ref", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "usr_srvs/srv/detail/turn__struct.h"
// already included above
// #include "usr_srvs/srv/detail/turn__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool usr_srvs__srv__turn__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[33];
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
    assert(strncmp("usr_srvs.srv._turn.Turn_Response", full_classname_dest, 32) == 0);
  }
  usr_srvs__srv__Turn_Response * ros_message = _ros_message;
  {  // completed
    PyObject * field = PyObject_GetAttrString(_pymsg, "completed");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->completed = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * usr_srvs__srv__turn__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Turn_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("usr_srvs.srv._turn");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Turn_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  usr_srvs__srv__Turn_Response * ros_message = (usr_srvs__srv__Turn_Response *)raw_ros_message;
  {  // completed
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->completed ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "completed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
