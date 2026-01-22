// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from def_msg:msg/CommonControl.idl
// generated code does not contain a copyright notice
#include "def_msg/msg/detail/common_control__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
def_msg__msg__CommonControl__init(def_msg__msg__CommonControl * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    def_msg__msg__CommonControl__fini(msg);
    return false;
  }
  // velocity_top
  // shoot
  return true;
}

void
def_msg__msg__CommonControl__fini(def_msg__msg__CommonControl * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // velocity_top
  // shoot
}

bool
def_msg__msg__CommonControl__are_equal(const def_msg__msg__CommonControl * lhs, const def_msg__msg__CommonControl * rhs)
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
  // velocity_top
  if (lhs->velocity_top != rhs->velocity_top) {
    return false;
  }
  // shoot
  if (lhs->shoot != rhs->shoot) {
    return false;
  }
  return true;
}

bool
def_msg__msg__CommonControl__copy(
  const def_msg__msg__CommonControl * input,
  def_msg__msg__CommonControl * output)
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
  // velocity_top
  output->velocity_top = input->velocity_top;
  // shoot
  output->shoot = input->shoot;
  return true;
}

def_msg__msg__CommonControl *
def_msg__msg__CommonControl__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  def_msg__msg__CommonControl * msg = (def_msg__msg__CommonControl *)allocator.allocate(sizeof(def_msg__msg__CommonControl), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(def_msg__msg__CommonControl));
  bool success = def_msg__msg__CommonControl__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
def_msg__msg__CommonControl__destroy(def_msg__msg__CommonControl * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    def_msg__msg__CommonControl__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
def_msg__msg__CommonControl__Sequence__init(def_msg__msg__CommonControl__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  def_msg__msg__CommonControl * data = NULL;

  if (size) {
    data = (def_msg__msg__CommonControl *)allocator.zero_allocate(size, sizeof(def_msg__msg__CommonControl), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = def_msg__msg__CommonControl__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        def_msg__msg__CommonControl__fini(&data[i - 1]);
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
def_msg__msg__CommonControl__Sequence__fini(def_msg__msg__CommonControl__Sequence * array)
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
      def_msg__msg__CommonControl__fini(&array->data[i]);
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

def_msg__msg__CommonControl__Sequence *
def_msg__msg__CommonControl__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  def_msg__msg__CommonControl__Sequence * array = (def_msg__msg__CommonControl__Sequence *)allocator.allocate(sizeof(def_msg__msg__CommonControl__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = def_msg__msg__CommonControl__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
def_msg__msg__CommonControl__Sequence__destroy(def_msg__msg__CommonControl__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    def_msg__msg__CommonControl__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
def_msg__msg__CommonControl__Sequence__are_equal(const def_msg__msg__CommonControl__Sequence * lhs, const def_msg__msg__CommonControl__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!def_msg__msg__CommonControl__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
def_msg__msg__CommonControl__Sequence__copy(
  const def_msg__msg__CommonControl__Sequence * input,
  def_msg__msg__CommonControl__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(def_msg__msg__CommonControl);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    def_msg__msg__CommonControl * data =
      (def_msg__msg__CommonControl *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!def_msg__msg__CommonControl__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          def_msg__msg__CommonControl__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!def_msg__msg__CommonControl__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
