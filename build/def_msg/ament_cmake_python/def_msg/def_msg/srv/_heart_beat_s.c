// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from def_msg:srv/HeartBeat.idl
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
#include "def_msg/srv/detail/heart_beat__struct.h"
#include "def_msg/srv/detail/heart_beat__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool def_msg__srv__heart_beat__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[42];
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
    assert(strncmp("def_msg.srv._heart_beat.HeartBeat_Request", full_classname_dest, 41) == 0);
  }
  def_msg__srv__HeartBeat_Request * ros_message = _ros_message;
  {  // header
    PyObject * field = PyObject_GetAttrString(_pymsg, "header");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__header__convert_from_py(field, &ros_message->header)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // set_launch
    PyObject * field = PyObject_GetAttrString(_pymsg, "set_launch");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->set_launch = (Py_True == field);
    Py_DECREF(field);
  }
  {  // set_arm
    PyObject * field = PyObject_GetAttrString(_pymsg, "set_arm");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->set_arm = (Py_True == field);
    Py_DECREF(field);
  }
  {  // fault_flag
    PyObject * field = PyObject_GetAttrString(_pymsg, "fault_flag");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->fault_flag = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * def_msg__srv__heart_beat__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of HeartBeat_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("def_msg.srv._heart_beat");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "HeartBeat_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  def_msg__srv__HeartBeat_Request * ros_message = (def_msg__srv__HeartBeat_Request *)raw_ros_message;
  {  // header
    PyObject * field = NULL;
    field = std_msgs__msg__header__convert_to_py(&ros_message->header);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "header", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // set_launch
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->set_launch ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "set_launch", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // set_arm
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->set_arm ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "set_arm", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fault_flag
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->fault_flag);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fault_flag", field);
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
// #include "def_msg/srv/detail/heart_beat__struct.h"
// already included above
// #include "def_msg/srv/detail/heart_beat__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool def_msg__srv__heart_beat__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[43];
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
    assert(strncmp("def_msg.srv._heart_beat.HeartBeat_Response", full_classname_dest, 42) == 0);
  }
  def_msg__srv__HeartBeat_Response * ros_message = _ros_message;
  {  // result
    PyObject * field = PyObject_GetAttrString(_pymsg, "result");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->result = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * def_msg__srv__heart_beat__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of HeartBeat_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("def_msg.srv._heart_beat");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "HeartBeat_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  def_msg__srv__HeartBeat_Response * ros_message = (def_msg__srv__HeartBeat_Response *)raw_ros_message;
  {  // result
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->result ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "result", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
