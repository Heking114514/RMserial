// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from def_msg:msg/GobalInformation.idl
// generated code does not contain a copyright notice
#include "def_msg/msg/detail/gobal_information__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
def_msg__msg__GobalInformation__init(def_msg__msg__GobalInformation * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    def_msg__msg__GobalInformation__fini(msg);
    return false;
  }
  // battery
  // life_extra
  // color
  // bullet_extra
  // fault_flag
  // launch
  // arm
  // base_hp_our
  // base_hp_enemy
  // judge_warning
  // stage_remain_time
  // game_progress
  return true;
}

void
def_msg__msg__GobalInformation__fini(def_msg__msg__GobalInformation * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // battery
  // life_extra
  // color
  // bullet_extra
  // fault_flag
  // launch
  // arm
  // base_hp_our
  // base_hp_enemy
  // judge_warning
  // stage_remain_time
  // game_progress
}

bool
def_msg__msg__GobalInformation__are_equal(const def_msg__msg__GobalInformation * lhs, const def_msg__msg__GobalInformation * rhs)
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
  // battery
  if (lhs->battery != rhs->battery) {
    return false;
  }
  // life_extra
  if (lhs->life_extra != rhs->life_extra) {
    return false;
  }
  // color
  if (lhs->color != rhs->color) {
    return false;
  }
  // bullet_extra
  if (lhs->bullet_extra != rhs->bullet_extra) {
    return false;
  }
  // fault_flag
  if (lhs->fault_flag != rhs->fault_flag) {
    return false;
  }
  // launch
  if (lhs->launch != rhs->launch) {
    return false;
  }
  // arm
  if (lhs->arm != rhs->arm) {
    return false;
  }
  // base_hp_our
  if (lhs->base_hp_our != rhs->base_hp_our) {
    return false;
  }
  // base_hp_enemy
  if (lhs->base_hp_enemy != rhs->base_hp_enemy) {
    return false;
  }
  // judge_warning
  if (lhs->judge_warning != rhs->judge_warning) {
    return false;
  }
  // stage_remain_time
  if (lhs->stage_remain_time != rhs->stage_remain_time) {
    return false;
  }
  // game_progress
  if (lhs->game_progress != rhs->game_progress) {
    return false;
  }
  return true;
}

bool
def_msg__msg__GobalInformation__copy(
  const def_msg__msg__GobalInformation * input,
  def_msg__msg__GobalInformation * output)
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
  // battery
  output->battery = input->battery;
  // life_extra
  output->life_extra = input->life_extra;
  // color
  output->color = input->color;
  // bullet_extra
  output->bullet_extra = input->bullet_extra;
  // fault_flag
  output->fault_flag = input->fault_flag;
  // launch
  output->launch = input->launch;
  // arm
  output->arm = input->arm;
  // base_hp_our
  output->base_hp_our = input->base_hp_our;
  // base_hp_enemy
  output->base_hp_enemy = input->base_hp_enemy;
  // judge_warning
  output->judge_warning = input->judge_warning;
  // stage_remain_time
  output->stage_remain_time = input->stage_remain_time;
  // game_progress
  output->game_progress = input->game_progress;
  return true;
}

def_msg__msg__GobalInformation *
def_msg__msg__GobalInformation__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  def_msg__msg__GobalInformation * msg = (def_msg__msg__GobalInformation *)allocator.allocate(sizeof(def_msg__msg__GobalInformation), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(def_msg__msg__GobalInformation));
  bool success = def_msg__msg__GobalInformation__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
def_msg__msg__GobalInformation__destroy(def_msg__msg__GobalInformation * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    def_msg__msg__GobalInformation__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
def_msg__msg__GobalInformation__Sequence__init(def_msg__msg__GobalInformation__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  def_msg__msg__GobalInformation * data = NULL;

  if (size) {
    data = (def_msg__msg__GobalInformation *)allocator.zero_allocate(size, sizeof(def_msg__msg__GobalInformation), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = def_msg__msg__GobalInformation__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        def_msg__msg__GobalInformation__fini(&data[i - 1]);
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
def_msg__msg__GobalInformation__Sequence__fini(def_msg__msg__GobalInformation__Sequence * array)
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
      def_msg__msg__GobalInformation__fini(&array->data[i]);
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

def_msg__msg__GobalInformation__Sequence *
def_msg__msg__GobalInformation__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  def_msg__msg__GobalInformation__Sequence * array = (def_msg__msg__GobalInformation__Sequence *)allocator.allocate(sizeof(def_msg__msg__GobalInformation__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = def_msg__msg__GobalInformation__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
def_msg__msg__GobalInformation__Sequence__destroy(def_msg__msg__GobalInformation__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    def_msg__msg__GobalInformation__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
def_msg__msg__GobalInformation__Sequence__are_equal(const def_msg__msg__GobalInformation__Sequence * lhs, const def_msg__msg__GobalInformation__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!def_msg__msg__GobalInformation__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
def_msg__msg__GobalInformation__Sequence__copy(
  const def_msg__msg__GobalInformation__Sequence * input,
  def_msg__msg__GobalInformation__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(def_msg__msg__GobalInformation);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    def_msg__msg__GobalInformation * data =
      (def_msg__msg__GobalInformation *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!def_msg__msg__GobalInformation__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          def_msg__msg__GobalInformation__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!def_msg__msg__GobalInformation__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
