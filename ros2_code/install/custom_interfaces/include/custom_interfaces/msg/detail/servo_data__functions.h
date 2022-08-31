// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from custom_interfaces:msg/ServoData.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__MSG__DETAIL__SERVO_DATA__FUNCTIONS_H_
#define CUSTOM_INTERFACES__MSG__DETAIL__SERVO_DATA__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "custom_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "custom_interfaces/msg/detail/servo_data__struct.h"

/// Initialize msg/ServoData message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * custom_interfaces__msg__ServoData
 * )) before or use
 * custom_interfaces__msg__ServoData__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_interfaces
bool
custom_interfaces__msg__ServoData__init(custom_interfaces__msg__ServoData * msg);

/// Finalize msg/ServoData message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_interfaces
void
custom_interfaces__msg__ServoData__fini(custom_interfaces__msg__ServoData * msg);

/// Create msg/ServoData message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * custom_interfaces__msg__ServoData__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_interfaces
custom_interfaces__msg__ServoData *
custom_interfaces__msg__ServoData__create();

/// Destroy msg/ServoData message.
/**
 * It calls
 * custom_interfaces__msg__ServoData__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_interfaces
void
custom_interfaces__msg__ServoData__destroy(custom_interfaces__msg__ServoData * msg);


/// Initialize array of msg/ServoData messages.
/**
 * It allocates the memory for the number of elements and calls
 * custom_interfaces__msg__ServoData__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_interfaces
bool
custom_interfaces__msg__ServoData__Sequence__init(custom_interfaces__msg__ServoData__Sequence * array, size_t size);

/// Finalize array of msg/ServoData messages.
/**
 * It calls
 * custom_interfaces__msg__ServoData__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_interfaces
void
custom_interfaces__msg__ServoData__Sequence__fini(custom_interfaces__msg__ServoData__Sequence * array);

/// Create array of msg/ServoData messages.
/**
 * It allocates the memory for the array and calls
 * custom_interfaces__msg__ServoData__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_interfaces
custom_interfaces__msg__ServoData__Sequence *
custom_interfaces__msg__ServoData__Sequence__create(size_t size);

/// Destroy array of msg/ServoData messages.
/**
 * It calls
 * custom_interfaces__msg__ServoData__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_interfaces
void
custom_interfaces__msg__ServoData__Sequence__destroy(custom_interfaces__msg__ServoData__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_INTERFACES__MSG__DETAIL__SERVO_DATA__FUNCTIONS_H_
