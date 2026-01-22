// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from def_msg:action/NavPose.idl
// generated code does not contain a copyright notice
#include "def_msg/action/detail/nav_pose__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `x`
// Member `y`
// Member `w`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
def_msg__action__NavPose_Goal__init(def_msg__action__NavPose_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // x
  if (!rosidl_runtime_c__float__Sequence__init(&msg->x, 0)) {
    def_msg__action__NavPose_Goal__fini(msg);
    return false;
  }
  // y
  if (!rosidl_runtime_c__float__Sequence__init(&msg->y, 0)) {
    def_msg__action__NavPose_Goal__fini(msg);
    return false;
  }
  // w
  if (!rosidl_runtime_c__float__Sequence__init(&msg->w, 0)) {
    def_msg__action__NavPose_Goal__fini(msg);
    return false;
  }
  // order
  return true;
}

void
def_msg__action__NavPose_Goal__fini(def_msg__action__NavPose_Goal * msg)
{
  if (!msg) {
    return;
  }
  // x
  rosidl_runtime_c__float__Sequence__fini(&msg->x);
  // y
  rosidl_runtime_c__float__Sequence__fini(&msg->y);
  // w
  rosidl_runtime_c__float__Sequence__fini(&msg->w);
  // order
}

bool
def_msg__action__NavPose_Goal__are_equal(const def_msg__action__NavPose_Goal * lhs, const def_msg__action__NavPose_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // x
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->x), &(rhs->x)))
  {
    return false;
  }
  // y
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->y), &(rhs->y)))
  {
    return false;
  }
  // w
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->w), &(rhs->w)))
  {
    return false;
  }
  // order
  if (lhs->order != rhs->order) {
    return false;
  }
  return true;
}

bool
def_msg__action__NavPose_Goal__copy(
  const def_msg__action__NavPose_Goal * input,
  def_msg__action__NavPose_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // x
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->x), &(output->x)))
  {
    return false;
  }
  // y
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->y), &(output->y)))
  {
    return false;
  }
  // w
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->w), &(output->w)))
  {
    return false;
  }
  // order
  output->order = input->order;
  return true;
}

def_msg__action__NavPose_Goal *
def_msg__action__NavPose_Goal__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  def_msg__action__NavPose_Goal * msg = (def_msg__action__NavPose_Goal *)allocator.allocate(sizeof(def_msg__action__NavPose_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(def_msg__action__NavPose_Goal));
  bool success = def_msg__action__NavPose_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
def_msg__action__NavPose_Goal__destroy(def_msg__action__NavPose_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    def_msg__action__NavPose_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
def_msg__action__NavPose_Goal__Sequence__init(def_msg__action__NavPose_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  def_msg__action__NavPose_Goal * data = NULL;

  if (size) {
    data = (def_msg__action__NavPose_Goal *)allocator.zero_allocate(size, sizeof(def_msg__action__NavPose_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = def_msg__action__NavPose_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        def_msg__action__NavPose_Goal__fini(&data[i - 1]);
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
def_msg__action__NavPose_Goal__Sequence__fini(def_msg__action__NavPose_Goal__Sequence * array)
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
      def_msg__action__NavPose_Goal__fini(&array->data[i]);
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

def_msg__action__NavPose_Goal__Sequence *
def_msg__action__NavPose_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  def_msg__action__NavPose_Goal__Sequence * array = (def_msg__action__NavPose_Goal__Sequence *)allocator.allocate(sizeof(def_msg__action__NavPose_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = def_msg__action__NavPose_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
def_msg__action__NavPose_Goal__Sequence__destroy(def_msg__action__NavPose_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    def_msg__action__NavPose_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
def_msg__action__NavPose_Goal__Sequence__are_equal(const def_msg__action__NavPose_Goal__Sequence * lhs, const def_msg__action__NavPose_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!def_msg__action__NavPose_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
def_msg__action__NavPose_Goal__Sequence__copy(
  const def_msg__action__NavPose_Goal__Sequence * input,
  def_msg__action__NavPose_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(def_msg__action__NavPose_Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    def_msg__action__NavPose_Goal * data =
      (def_msg__action__NavPose_Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!def_msg__action__NavPose_Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          def_msg__action__NavPose_Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!def_msg__action__NavPose_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
def_msg__action__NavPose_Result__init(def_msg__action__NavPose_Result * msg)
{
  if (!msg) {
    return false;
  }
  // reached
  return true;
}

void
def_msg__action__NavPose_Result__fini(def_msg__action__NavPose_Result * msg)
{
  if (!msg) {
    return;
  }
  // reached
}

bool
def_msg__action__NavPose_Result__are_equal(const def_msg__action__NavPose_Result * lhs, const def_msg__action__NavPose_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // reached
  if (lhs->reached != rhs->reached) {
    return false;
  }
  return true;
}

bool
def_msg__action__NavPose_Result__copy(
  const def_msg__action__NavPose_Result * input,
  def_msg__action__NavPose_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // reached
  output->reached = input->reached;
  return true;
}

def_msg__action__NavPose_Result *
def_msg__action__NavPose_Result__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  def_msg__action__NavPose_Result * msg = (def_msg__action__NavPose_Result *)allocator.allocate(sizeof(def_msg__action__NavPose_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(def_msg__action__NavPose_Result));
  bool success = def_msg__action__NavPose_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
def_msg__action__NavPose_Result__destroy(def_msg__action__NavPose_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    def_msg__action__NavPose_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
def_msg__action__NavPose_Result__Sequence__init(def_msg__action__NavPose_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  def_msg__action__NavPose_Result * data = NULL;

  if (size) {
    data = (def_msg__action__NavPose_Result *)allocator.zero_allocate(size, sizeof(def_msg__action__NavPose_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = def_msg__action__NavPose_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        def_msg__action__NavPose_Result__fini(&data[i - 1]);
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
def_msg__action__NavPose_Result__Sequence__fini(def_msg__action__NavPose_Result__Sequence * array)
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
      def_msg__action__NavPose_Result__fini(&array->data[i]);
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

def_msg__action__NavPose_Result__Sequence *
def_msg__action__NavPose_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  def_msg__action__NavPose_Result__Sequence * array = (def_msg__action__NavPose_Result__Sequence *)allocator.allocate(sizeof(def_msg__action__NavPose_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = def_msg__action__NavPose_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
def_msg__action__NavPose_Result__Sequence__destroy(def_msg__action__NavPose_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    def_msg__action__NavPose_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
def_msg__action__NavPose_Result__Sequence__are_equal(const def_msg__action__NavPose_Result__Sequence * lhs, const def_msg__action__NavPose_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!def_msg__action__NavPose_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
def_msg__action__NavPose_Result__Sequence__copy(
  const def_msg__action__NavPose_Result__Sequence * input,
  def_msg__action__NavPose_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(def_msg__action__NavPose_Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    def_msg__action__NavPose_Result * data =
      (def_msg__action__NavPose_Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!def_msg__action__NavPose_Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          def_msg__action__NavPose_Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!def_msg__action__NavPose_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
def_msg__action__NavPose_Feedback__init(def_msg__action__NavPose_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // dis_x
  // dis_y
  // dis_w
  return true;
}

void
def_msg__action__NavPose_Feedback__fini(def_msg__action__NavPose_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // dis_x
  // dis_y
  // dis_w
}

bool
def_msg__action__NavPose_Feedback__are_equal(const def_msg__action__NavPose_Feedback * lhs, const def_msg__action__NavPose_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // dis_x
  if (lhs->dis_x != rhs->dis_x) {
    return false;
  }
  // dis_y
  if (lhs->dis_y != rhs->dis_y) {
    return false;
  }
  // dis_w
  if (lhs->dis_w != rhs->dis_w) {
    return false;
  }
  return true;
}

bool
def_msg__action__NavPose_Feedback__copy(
  const def_msg__action__NavPose_Feedback * input,
  def_msg__action__NavPose_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // dis_x
  output->dis_x = input->dis_x;
  // dis_y
  output->dis_y = input->dis_y;
  // dis_w
  output->dis_w = input->dis_w;
  return true;
}

def_msg__action__NavPose_Feedback *
def_msg__action__NavPose_Feedback__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  def_msg__action__NavPose_Feedback * msg = (def_msg__action__NavPose_Feedback *)allocator.allocate(sizeof(def_msg__action__NavPose_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(def_msg__action__NavPose_Feedback));
  bool success = def_msg__action__NavPose_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
def_msg__action__NavPose_Feedback__destroy(def_msg__action__NavPose_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    def_msg__action__NavPose_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
def_msg__action__NavPose_Feedback__Sequence__init(def_msg__action__NavPose_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  def_msg__action__NavPose_Feedback * data = NULL;

  if (size) {
    data = (def_msg__action__NavPose_Feedback *)allocator.zero_allocate(size, sizeof(def_msg__action__NavPose_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = def_msg__action__NavPose_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        def_msg__action__NavPose_Feedback__fini(&data[i - 1]);
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
def_msg__action__NavPose_Feedback__Sequence__fini(def_msg__action__NavPose_Feedback__Sequence * array)
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
      def_msg__action__NavPose_Feedback__fini(&array->data[i]);
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

def_msg__action__NavPose_Feedback__Sequence *
def_msg__action__NavPose_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  def_msg__action__NavPose_Feedback__Sequence * array = (def_msg__action__NavPose_Feedback__Sequence *)allocator.allocate(sizeof(def_msg__action__NavPose_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = def_msg__action__NavPose_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
def_msg__action__NavPose_Feedback__Sequence__destroy(def_msg__action__NavPose_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    def_msg__action__NavPose_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
def_msg__action__NavPose_Feedback__Sequence__are_equal(const def_msg__action__NavPose_Feedback__Sequence * lhs, const def_msg__action__NavPose_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!def_msg__action__NavPose_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
def_msg__action__NavPose_Feedback__Sequence__copy(
  const def_msg__action__NavPose_Feedback__Sequence * input,
  def_msg__action__NavPose_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(def_msg__action__NavPose_Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    def_msg__action__NavPose_Feedback * data =
      (def_msg__action__NavPose_Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!def_msg__action__NavPose_Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          def_msg__action__NavPose_Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!def_msg__action__NavPose_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "def_msg/action/detail/nav_pose__functions.h"

bool
def_msg__action__NavPose_SendGoal_Request__init(def_msg__action__NavPose_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    def_msg__action__NavPose_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!def_msg__action__NavPose_Goal__init(&msg->goal)) {
    def_msg__action__NavPose_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
def_msg__action__NavPose_SendGoal_Request__fini(def_msg__action__NavPose_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  def_msg__action__NavPose_Goal__fini(&msg->goal);
}

bool
def_msg__action__NavPose_SendGoal_Request__are_equal(const def_msg__action__NavPose_SendGoal_Request * lhs, const def_msg__action__NavPose_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!def_msg__action__NavPose_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
def_msg__action__NavPose_SendGoal_Request__copy(
  const def_msg__action__NavPose_SendGoal_Request * input,
  def_msg__action__NavPose_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!def_msg__action__NavPose_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

def_msg__action__NavPose_SendGoal_Request *
def_msg__action__NavPose_SendGoal_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  def_msg__action__NavPose_SendGoal_Request * msg = (def_msg__action__NavPose_SendGoal_Request *)allocator.allocate(sizeof(def_msg__action__NavPose_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(def_msg__action__NavPose_SendGoal_Request));
  bool success = def_msg__action__NavPose_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
def_msg__action__NavPose_SendGoal_Request__destroy(def_msg__action__NavPose_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    def_msg__action__NavPose_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
def_msg__action__NavPose_SendGoal_Request__Sequence__init(def_msg__action__NavPose_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  def_msg__action__NavPose_SendGoal_Request * data = NULL;

  if (size) {
    data = (def_msg__action__NavPose_SendGoal_Request *)allocator.zero_allocate(size, sizeof(def_msg__action__NavPose_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = def_msg__action__NavPose_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        def_msg__action__NavPose_SendGoal_Request__fini(&data[i - 1]);
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
def_msg__action__NavPose_SendGoal_Request__Sequence__fini(def_msg__action__NavPose_SendGoal_Request__Sequence * array)
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
      def_msg__action__NavPose_SendGoal_Request__fini(&array->data[i]);
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

def_msg__action__NavPose_SendGoal_Request__Sequence *
def_msg__action__NavPose_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  def_msg__action__NavPose_SendGoal_Request__Sequence * array = (def_msg__action__NavPose_SendGoal_Request__Sequence *)allocator.allocate(sizeof(def_msg__action__NavPose_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = def_msg__action__NavPose_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
def_msg__action__NavPose_SendGoal_Request__Sequence__destroy(def_msg__action__NavPose_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    def_msg__action__NavPose_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
def_msg__action__NavPose_SendGoal_Request__Sequence__are_equal(const def_msg__action__NavPose_SendGoal_Request__Sequence * lhs, const def_msg__action__NavPose_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!def_msg__action__NavPose_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
def_msg__action__NavPose_SendGoal_Request__Sequence__copy(
  const def_msg__action__NavPose_SendGoal_Request__Sequence * input,
  def_msg__action__NavPose_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(def_msg__action__NavPose_SendGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    def_msg__action__NavPose_SendGoal_Request * data =
      (def_msg__action__NavPose_SendGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!def_msg__action__NavPose_SendGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          def_msg__action__NavPose_SendGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!def_msg__action__NavPose_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
def_msg__action__NavPose_SendGoal_Response__init(def_msg__action__NavPose_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    def_msg__action__NavPose_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
def_msg__action__NavPose_SendGoal_Response__fini(def_msg__action__NavPose_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
def_msg__action__NavPose_SendGoal_Response__are_equal(const def_msg__action__NavPose_SendGoal_Response * lhs, const def_msg__action__NavPose_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
def_msg__action__NavPose_SendGoal_Response__copy(
  const def_msg__action__NavPose_SendGoal_Response * input,
  def_msg__action__NavPose_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

def_msg__action__NavPose_SendGoal_Response *
def_msg__action__NavPose_SendGoal_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  def_msg__action__NavPose_SendGoal_Response * msg = (def_msg__action__NavPose_SendGoal_Response *)allocator.allocate(sizeof(def_msg__action__NavPose_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(def_msg__action__NavPose_SendGoal_Response));
  bool success = def_msg__action__NavPose_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
def_msg__action__NavPose_SendGoal_Response__destroy(def_msg__action__NavPose_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    def_msg__action__NavPose_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
def_msg__action__NavPose_SendGoal_Response__Sequence__init(def_msg__action__NavPose_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  def_msg__action__NavPose_SendGoal_Response * data = NULL;

  if (size) {
    data = (def_msg__action__NavPose_SendGoal_Response *)allocator.zero_allocate(size, sizeof(def_msg__action__NavPose_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = def_msg__action__NavPose_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        def_msg__action__NavPose_SendGoal_Response__fini(&data[i - 1]);
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
def_msg__action__NavPose_SendGoal_Response__Sequence__fini(def_msg__action__NavPose_SendGoal_Response__Sequence * array)
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
      def_msg__action__NavPose_SendGoal_Response__fini(&array->data[i]);
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

def_msg__action__NavPose_SendGoal_Response__Sequence *
def_msg__action__NavPose_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  def_msg__action__NavPose_SendGoal_Response__Sequence * array = (def_msg__action__NavPose_SendGoal_Response__Sequence *)allocator.allocate(sizeof(def_msg__action__NavPose_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = def_msg__action__NavPose_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
def_msg__action__NavPose_SendGoal_Response__Sequence__destroy(def_msg__action__NavPose_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    def_msg__action__NavPose_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
def_msg__action__NavPose_SendGoal_Response__Sequence__are_equal(const def_msg__action__NavPose_SendGoal_Response__Sequence * lhs, const def_msg__action__NavPose_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!def_msg__action__NavPose_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
def_msg__action__NavPose_SendGoal_Response__Sequence__copy(
  const def_msg__action__NavPose_SendGoal_Response__Sequence * input,
  def_msg__action__NavPose_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(def_msg__action__NavPose_SendGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    def_msg__action__NavPose_SendGoal_Response * data =
      (def_msg__action__NavPose_SendGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!def_msg__action__NavPose_SendGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          def_msg__action__NavPose_SendGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!def_msg__action__NavPose_SendGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
def_msg__action__NavPose_GetResult_Request__init(def_msg__action__NavPose_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    def_msg__action__NavPose_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
def_msg__action__NavPose_GetResult_Request__fini(def_msg__action__NavPose_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
def_msg__action__NavPose_GetResult_Request__are_equal(const def_msg__action__NavPose_GetResult_Request * lhs, const def_msg__action__NavPose_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
def_msg__action__NavPose_GetResult_Request__copy(
  const def_msg__action__NavPose_GetResult_Request * input,
  def_msg__action__NavPose_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

def_msg__action__NavPose_GetResult_Request *
def_msg__action__NavPose_GetResult_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  def_msg__action__NavPose_GetResult_Request * msg = (def_msg__action__NavPose_GetResult_Request *)allocator.allocate(sizeof(def_msg__action__NavPose_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(def_msg__action__NavPose_GetResult_Request));
  bool success = def_msg__action__NavPose_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
def_msg__action__NavPose_GetResult_Request__destroy(def_msg__action__NavPose_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    def_msg__action__NavPose_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
def_msg__action__NavPose_GetResult_Request__Sequence__init(def_msg__action__NavPose_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  def_msg__action__NavPose_GetResult_Request * data = NULL;

  if (size) {
    data = (def_msg__action__NavPose_GetResult_Request *)allocator.zero_allocate(size, sizeof(def_msg__action__NavPose_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = def_msg__action__NavPose_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        def_msg__action__NavPose_GetResult_Request__fini(&data[i - 1]);
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
def_msg__action__NavPose_GetResult_Request__Sequence__fini(def_msg__action__NavPose_GetResult_Request__Sequence * array)
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
      def_msg__action__NavPose_GetResult_Request__fini(&array->data[i]);
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

def_msg__action__NavPose_GetResult_Request__Sequence *
def_msg__action__NavPose_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  def_msg__action__NavPose_GetResult_Request__Sequence * array = (def_msg__action__NavPose_GetResult_Request__Sequence *)allocator.allocate(sizeof(def_msg__action__NavPose_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = def_msg__action__NavPose_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
def_msg__action__NavPose_GetResult_Request__Sequence__destroy(def_msg__action__NavPose_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    def_msg__action__NavPose_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
def_msg__action__NavPose_GetResult_Request__Sequence__are_equal(const def_msg__action__NavPose_GetResult_Request__Sequence * lhs, const def_msg__action__NavPose_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!def_msg__action__NavPose_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
def_msg__action__NavPose_GetResult_Request__Sequence__copy(
  const def_msg__action__NavPose_GetResult_Request__Sequence * input,
  def_msg__action__NavPose_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(def_msg__action__NavPose_GetResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    def_msg__action__NavPose_GetResult_Request * data =
      (def_msg__action__NavPose_GetResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!def_msg__action__NavPose_GetResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          def_msg__action__NavPose_GetResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!def_msg__action__NavPose_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "def_msg/action/detail/nav_pose__functions.h"

bool
def_msg__action__NavPose_GetResult_Response__init(def_msg__action__NavPose_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!def_msg__action__NavPose_Result__init(&msg->result)) {
    def_msg__action__NavPose_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
def_msg__action__NavPose_GetResult_Response__fini(def_msg__action__NavPose_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  def_msg__action__NavPose_Result__fini(&msg->result);
}

bool
def_msg__action__NavPose_GetResult_Response__are_equal(const def_msg__action__NavPose_GetResult_Response * lhs, const def_msg__action__NavPose_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!def_msg__action__NavPose_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
def_msg__action__NavPose_GetResult_Response__copy(
  const def_msg__action__NavPose_GetResult_Response * input,
  def_msg__action__NavPose_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!def_msg__action__NavPose_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

def_msg__action__NavPose_GetResult_Response *
def_msg__action__NavPose_GetResult_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  def_msg__action__NavPose_GetResult_Response * msg = (def_msg__action__NavPose_GetResult_Response *)allocator.allocate(sizeof(def_msg__action__NavPose_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(def_msg__action__NavPose_GetResult_Response));
  bool success = def_msg__action__NavPose_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
def_msg__action__NavPose_GetResult_Response__destroy(def_msg__action__NavPose_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    def_msg__action__NavPose_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
def_msg__action__NavPose_GetResult_Response__Sequence__init(def_msg__action__NavPose_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  def_msg__action__NavPose_GetResult_Response * data = NULL;

  if (size) {
    data = (def_msg__action__NavPose_GetResult_Response *)allocator.zero_allocate(size, sizeof(def_msg__action__NavPose_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = def_msg__action__NavPose_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        def_msg__action__NavPose_GetResult_Response__fini(&data[i - 1]);
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
def_msg__action__NavPose_GetResult_Response__Sequence__fini(def_msg__action__NavPose_GetResult_Response__Sequence * array)
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
      def_msg__action__NavPose_GetResult_Response__fini(&array->data[i]);
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

def_msg__action__NavPose_GetResult_Response__Sequence *
def_msg__action__NavPose_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  def_msg__action__NavPose_GetResult_Response__Sequence * array = (def_msg__action__NavPose_GetResult_Response__Sequence *)allocator.allocate(sizeof(def_msg__action__NavPose_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = def_msg__action__NavPose_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
def_msg__action__NavPose_GetResult_Response__Sequence__destroy(def_msg__action__NavPose_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    def_msg__action__NavPose_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
def_msg__action__NavPose_GetResult_Response__Sequence__are_equal(const def_msg__action__NavPose_GetResult_Response__Sequence * lhs, const def_msg__action__NavPose_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!def_msg__action__NavPose_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
def_msg__action__NavPose_GetResult_Response__Sequence__copy(
  const def_msg__action__NavPose_GetResult_Response__Sequence * input,
  def_msg__action__NavPose_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(def_msg__action__NavPose_GetResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    def_msg__action__NavPose_GetResult_Response * data =
      (def_msg__action__NavPose_GetResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!def_msg__action__NavPose_GetResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          def_msg__action__NavPose_GetResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!def_msg__action__NavPose_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "def_msg/action/detail/nav_pose__functions.h"

bool
def_msg__action__NavPose_FeedbackMessage__init(def_msg__action__NavPose_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    def_msg__action__NavPose_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!def_msg__action__NavPose_Feedback__init(&msg->feedback)) {
    def_msg__action__NavPose_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
def_msg__action__NavPose_FeedbackMessage__fini(def_msg__action__NavPose_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  def_msg__action__NavPose_Feedback__fini(&msg->feedback);
}

bool
def_msg__action__NavPose_FeedbackMessage__are_equal(const def_msg__action__NavPose_FeedbackMessage * lhs, const def_msg__action__NavPose_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!def_msg__action__NavPose_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
def_msg__action__NavPose_FeedbackMessage__copy(
  const def_msg__action__NavPose_FeedbackMessage * input,
  def_msg__action__NavPose_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!def_msg__action__NavPose_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

def_msg__action__NavPose_FeedbackMessage *
def_msg__action__NavPose_FeedbackMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  def_msg__action__NavPose_FeedbackMessage * msg = (def_msg__action__NavPose_FeedbackMessage *)allocator.allocate(sizeof(def_msg__action__NavPose_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(def_msg__action__NavPose_FeedbackMessage));
  bool success = def_msg__action__NavPose_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
def_msg__action__NavPose_FeedbackMessage__destroy(def_msg__action__NavPose_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    def_msg__action__NavPose_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
def_msg__action__NavPose_FeedbackMessage__Sequence__init(def_msg__action__NavPose_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  def_msg__action__NavPose_FeedbackMessage * data = NULL;

  if (size) {
    data = (def_msg__action__NavPose_FeedbackMessage *)allocator.zero_allocate(size, sizeof(def_msg__action__NavPose_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = def_msg__action__NavPose_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        def_msg__action__NavPose_FeedbackMessage__fini(&data[i - 1]);
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
def_msg__action__NavPose_FeedbackMessage__Sequence__fini(def_msg__action__NavPose_FeedbackMessage__Sequence * array)
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
      def_msg__action__NavPose_FeedbackMessage__fini(&array->data[i]);
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

def_msg__action__NavPose_FeedbackMessage__Sequence *
def_msg__action__NavPose_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  def_msg__action__NavPose_FeedbackMessage__Sequence * array = (def_msg__action__NavPose_FeedbackMessage__Sequence *)allocator.allocate(sizeof(def_msg__action__NavPose_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = def_msg__action__NavPose_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
def_msg__action__NavPose_FeedbackMessage__Sequence__destroy(def_msg__action__NavPose_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    def_msg__action__NavPose_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
def_msg__action__NavPose_FeedbackMessage__Sequence__are_equal(const def_msg__action__NavPose_FeedbackMessage__Sequence * lhs, const def_msg__action__NavPose_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!def_msg__action__NavPose_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
def_msg__action__NavPose_FeedbackMessage__Sequence__copy(
  const def_msg__action__NavPose_FeedbackMessage__Sequence * input,
  def_msg__action__NavPose_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(def_msg__action__NavPose_FeedbackMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    def_msg__action__NavPose_FeedbackMessage * data =
      (def_msg__action__NavPose_FeedbackMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!def_msg__action__NavPose_FeedbackMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          def_msg__action__NavPose_FeedbackMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!def_msg__action__NavPose_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
