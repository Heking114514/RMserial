// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from def_msg:msg/GobalInformation.idl
// generated code does not contain a copyright notice

#ifndef DEF_MSG__MSG__DETAIL__GOBAL_INFORMATION__FUNCTIONS_H_
#define DEF_MSG__MSG__DETAIL__GOBAL_INFORMATION__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "def_msg/msg/rosidl_generator_c__visibility_control.h"

#include "def_msg/msg/detail/gobal_information__struct.h"

/// Initialize msg/GobalInformation message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * def_msg__msg__GobalInformation
 * )) before or use
 * def_msg__msg__GobalInformation__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_def_msg
bool
def_msg__msg__GobalInformation__init(def_msg__msg__GobalInformation * msg);

/// Finalize msg/GobalInformation message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_def_msg
void
def_msg__msg__GobalInformation__fini(def_msg__msg__GobalInformation * msg);

/// Create msg/GobalInformation message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * def_msg__msg__GobalInformation__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_def_msg
def_msg__msg__GobalInformation *
def_msg__msg__GobalInformation__create();

/// Destroy msg/GobalInformation message.
/**
 * It calls
 * def_msg__msg__GobalInformation__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_def_msg
void
def_msg__msg__GobalInformation__destroy(def_msg__msg__GobalInformation * msg);

/// Check for msg/GobalInformation message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_def_msg
bool
def_msg__msg__GobalInformation__are_equal(const def_msg__msg__GobalInformation * lhs, const def_msg__msg__GobalInformation * rhs);

/// Copy a msg/GobalInformation message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_def_msg
bool
def_msg__msg__GobalInformation__copy(
  const def_msg__msg__GobalInformation * input,
  def_msg__msg__GobalInformation * output);

/// Initialize array of msg/GobalInformation messages.
/**
 * It allocates the memory for the number of elements and calls
 * def_msg__msg__GobalInformation__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_def_msg
bool
def_msg__msg__GobalInformation__Sequence__init(def_msg__msg__GobalInformation__Sequence * array, size_t size);

/// Finalize array of msg/GobalInformation messages.
/**
 * It calls
 * def_msg__msg__GobalInformation__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_def_msg
void
def_msg__msg__GobalInformation__Sequence__fini(def_msg__msg__GobalInformation__Sequence * array);

/// Create array of msg/GobalInformation messages.
/**
 * It allocates the memory for the array and calls
 * def_msg__msg__GobalInformation__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_def_msg
def_msg__msg__GobalInformation__Sequence *
def_msg__msg__GobalInformation__Sequence__create(size_t size);

/// Destroy array of msg/GobalInformation messages.
/**
 * It calls
 * def_msg__msg__GobalInformation__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_def_msg
void
def_msg__msg__GobalInformation__Sequence__destroy(def_msg__msg__GobalInformation__Sequence * array);

/// Check for msg/GobalInformation message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_def_msg
bool
def_msg__msg__GobalInformation__Sequence__are_equal(const def_msg__msg__GobalInformation__Sequence * lhs, const def_msg__msg__GobalInformation__Sequence * rhs);

/// Copy an array of msg/GobalInformation messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_def_msg
bool
def_msg__msg__GobalInformation__Sequence__copy(
  const def_msg__msg__GobalInformation__Sequence * input,
  def_msg__msg__GobalInformation__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // DEF_MSG__MSG__DETAIL__GOBAL_INFORMATION__FUNCTIONS_H_
