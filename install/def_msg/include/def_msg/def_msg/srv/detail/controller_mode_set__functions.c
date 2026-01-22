// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from def_msg:srv/ControllerModeSet.idl
// generated code does not contain a copyright notice
#include "def_msg/srv/detail/controller_mode_set__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
def_msg__srv__ControllerModeSet_Request__init(def_msg__srv__ControllerModeSet_Request * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    def_msg__srv__ControllerModeSet_Request__fini(msg);
    return false;
  }
  // mode
  return true;
}

void
def_msg__srv__ControllerModeSet_Request__fini(def_msg__srv__ControllerModeSet_Request * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // mode
}

bool
def_msg__srv__ControllerModeSet_Request__are_equal(const def_msg__srv__ControllerModeSet_Request * lhs, const def_msg__srv__ControllerModeSet_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // mode
  if (lhs->mode != rhs->mode) {
    return false;
  }
  return true;
}

bool
def_msg__srv__ControllerModeSet_Request__copy(
  const def_msg__srv__ControllerModeSet_Request * input,
  def_msg__srv__ControllerModeSet_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // mode
  output->mode = input->mode;
  return true;
}

def_msg__srv__ControllerModeSet_Request *
def_msg__srv__ControllerModeSet_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  def_msg__srv__ControllerModeSet_Request * msg = (def_msg__srv__ControllerModeSet_Request *)allocator.allocate(sizeof(def_msg__srv__ControllerModeSet_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(def_msg__srv__ControllerModeSet_Request));
  bool success = def_msg__srv__ControllerModeSet_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
def_msg__srv__ControllerModeSet_Request__destroy(def_msg__srv__ControllerModeSet_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    def_msg__srv__ControllerModeSet_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
def_msg__srv__ControllerModeSet_Request__Sequence__init(def_msg__srv__ControllerModeSet_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  def_msg__srv__ControllerModeSet_Request * data = NULL;

  if (size) {
    data = (def_msg__srv__ControllerModeSet_Request *)allocator.zero_allocate(size, sizeof(def_msg__srv__ControllerModeSet_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = def_msg__srv__ControllerModeSet_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        def_msg__srv__ControllerModeSet_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
def_msg__srv__ControllerModeSet_Request__Sequence__fini(def_msg__srv__ControllerModeSet_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      def_msg__srv__ControllerModeSet_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

def_msg__srv__ControllerModeSet_Request__Sequence *
def_msg__srv__ControllerModeSet_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  def_msg__srv__ControllerModeSet_Request__Sequence * array = (def_msg__srv__ControllerModeSet_Request__Sequence *)allocator.allocate(sizeof(def_msg__srv__ControllerModeSet_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = def_msg__srv__ControllerModeSet_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
def_msg__srv__ControllerModeSet_Request__Sequence__destroy(def_msg__srv__ControllerModeSet_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    def_msg__srv__ControllerModeSet_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
def_msg__srv__ControllerModeSet_Request__Sequence__are_equal(const def_msg__srv__ControllerModeSet_Request__Sequence * lhs, const def_msg__srv__ControllerModeSet_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!def_msg__srv__ControllerModeSet_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
def_msg__srv__ControllerModeSet_Request__Sequence__copy(
  const def_msg__srv__ControllerModeSet_Request__Sequence * input,
  def_msg__srv__ControllerModeSet_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(def_msg__srv__ControllerModeSet_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    def_msg__srv__ControllerModeSet_Request * data =
      (def_msg__srv__ControllerModeSet_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!def_msg__srv__ControllerModeSet_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          def_msg__srv__ControllerModeSet_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!def_msg__srv__ControllerModeSet_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
def_msg__srv__ControllerModeSet_Response__init(def_msg__srv__ControllerModeSet_Response * msg)
{
  if (!msg) {
    return false;
  }
  // result
  // loop_times
  return true;
}

void
def_msg__srv__ControllerModeSet_Response__fini(def_msg__srv__ControllerModeSet_Response * msg)
{
  if (!msg) {
    return;
  }
  // result
  // loop_times
}

bool
def_msg__srv__ControllerModeSet_Response__are_equal(const def_msg__srv__ControllerModeSet_Response * lhs, const def_msg__srv__ControllerModeSet_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // result
  if (lhs->result != rhs->result) {
    return false;
  }
  // loop_times
  if (lhs->loop_times != rhs->loop_times) {
    return false;
  }
  return true;
}

bool
def_msg__srv__ControllerModeSet_Response__copy(
  const def_msg__srv__ControllerModeSet_Response * input,
  def_msg__srv__ControllerModeSet_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // result
  output->result = input->result;
  // loop_times
  output->loop_times = input->loop_times;
  return true;
}

def_msg__srv__ControllerModeSet_Response *
def_msg__srv__ControllerModeSet_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  def_msg__srv__ControllerModeSet_Response * msg = (def_msg__srv__ControllerModeSet_Response *)allocator.allocate(sizeof(def_msg__srv__ControllerModeSet_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(def_msg__srv__ControllerModeSet_Response));
  bool success = def_msg__srv__ControllerModeSet_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
def_msg__srv__ControllerModeSet_Response__destroy(def_msg__srv__ControllerModeSet_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    def_msg__srv__ControllerModeSet_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
def_msg__srv__ControllerModeSet_Response__Sequence__init(def_msg__srv__ControllerModeSet_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  def_msg__srv__ControllerModeSet_Response * data = NULL;

  if (size) {
    data = (def_msg__srv__ControllerModeSet_Response *)allocator.zero_allocate(size, sizeof(def_msg__srv__ControllerModeSet_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = def_msg__srv__ControllerModeSet_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        def_msg__srv__ControllerModeSet_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
def_msg__srv__ControllerModeSet_Response__Sequence__fini(def_msg__srv__ControllerModeSet_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      def_msg__srv__ControllerModeSet_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

def_msg__srv__ControllerModeSet_Response__Sequence *
def_msg__srv__ControllerModeSet_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  def_msg__srv__ControllerModeSet_Response__Sequence * array = (def_msg__srv__ControllerModeSet_Response__Sequence *)allocator.allocate(sizeof(def_msg__srv__ControllerModeSet_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = def_msg__srv__ControllerModeSet_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
def_msg__srv__ControllerModeSet_Response__Sequence__destroy(def_msg__srv__ControllerModeSet_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    def_msg__srv__ControllerModeSet_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
def_msg__srv__ControllerModeSet_Response__Sequence__are_equal(const def_msg__srv__ControllerModeSet_Response__Sequence * lhs, const def_msg__srv__ControllerModeSet_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!def_msg__srv__ControllerModeSet_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
def_msg__srv__ControllerModeSet_Response__Sequence__copy(
  const def_msg__srv__ControllerModeSet_Response__Sequence * input,
  def_msg__srv__ControllerModeSet_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(def_msg__srv__ControllerModeSet_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    def_msg__srv__ControllerModeSet_Response * data =
      (def_msg__srv__ControllerModeSet_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!def_msg__srv__ControllerModeSet_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          def_msg__srv__ControllerModeSet_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!def_msg__srv__ControllerModeSet_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
