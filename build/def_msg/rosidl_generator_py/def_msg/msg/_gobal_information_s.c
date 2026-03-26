// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from def_msg:msg/GobalInformation.idl
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
#include "def_msg/msg/detail/gobal_information__struct.h"
#include "def_msg/msg/detail/gobal_information__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool def_msg__msg__gobal_information__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[48];
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
    assert(strncmp("def_msg.msg._gobal_information.GobalInformation", full_classname_dest, 47) == 0);
  }
  def_msg__msg__GobalInformation * ros_message = _ros_message;
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
  {  // battery
    PyObject * field = PyObject_GetAttrString(_pymsg, "battery");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->battery = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // life_extra
    PyObject * field = PyObject_GetAttrString(_pymsg, "life_extra");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->life_extra = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // color
    PyObject * field = PyObject_GetAttrString(_pymsg, "color");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->color = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // bullet_extra
    PyObject * field = PyObject_GetAttrString(_pymsg, "bullet_extra");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->bullet_extra = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // fault_flag
    PyObject * field = PyObject_GetAttrString(_pymsg, "fault_flag");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->fault_flag = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // launch
    PyObject * field = PyObject_GetAttrString(_pymsg, "launch");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->launch = (Py_True == field);
    Py_DECREF(field);
  }
  {  // arm
    PyObject * field = PyObject_GetAttrString(_pymsg, "arm");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->arm = (Py_True == field);
    Py_DECREF(field);
  }
  {  // base_hp_our
    PyObject * field = PyObject_GetAttrString(_pymsg, "base_hp_our");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->base_hp_our = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // base_hp_enemy
    PyObject * field = PyObject_GetAttrString(_pymsg, "base_hp_enemy");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->base_hp_enemy = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // judge_warning
    PyObject * field = PyObject_GetAttrString(_pymsg, "judge_warning");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->judge_warning = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // stage_remain_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "stage_remain_time");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->stage_remain_time = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // game_progress
    PyObject * field = PyObject_GetAttrString(_pymsg, "game_progress");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->game_progress = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * def_msg__msg__gobal_information__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of GobalInformation */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("def_msg.msg._gobal_information");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "GobalInformation");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  def_msg__msg__GobalInformation * ros_message = (def_msg__msg__GobalInformation *)raw_ros_message;
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
  {  // battery
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->battery);
    {
      int rc = PyObject_SetAttrString(_pymessage, "battery", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // life_extra
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->life_extra);
    {
      int rc = PyObject_SetAttrString(_pymessage, "life_extra", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // color
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->color);
    {
      int rc = PyObject_SetAttrString(_pymessage, "color", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bullet_extra
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->bullet_extra);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bullet_extra", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fault_flag
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->fault_flag);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fault_flag", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // launch
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->launch ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "launch", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // arm
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->arm ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "arm", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // base_hp_our
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->base_hp_our);
    {
      int rc = PyObject_SetAttrString(_pymessage, "base_hp_our", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // base_hp_enemy
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->base_hp_enemy);
    {
      int rc = PyObject_SetAttrString(_pymessage, "base_hp_enemy", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // judge_warning
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->judge_warning);
    {
      int rc = PyObject_SetAttrString(_pymessage, "judge_warning", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // stage_remain_time
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->stage_remain_time);
    {
      int rc = PyObject_SetAttrString(_pymessage, "stage_remain_time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // game_progress
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->game_progress);
    {
      int rc = PyObject_SetAttrString(_pymessage, "game_progress", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
