// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_interfaces:msg/ServoData.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__MSG__DETAIL__SERVO_DATA__STRUCT_H_
#define CUSTOM_INTERFACES__MSG__DETAIL__SERVO_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/ServoData in the package custom_interfaces.
typedef struct custom_interfaces__msg__ServoData
{
  double position;
} custom_interfaces__msg__ServoData;

// Struct for a sequence of custom_interfaces__msg__ServoData.
typedef struct custom_interfaces__msg__ServoData__Sequence
{
  custom_interfaces__msg__ServoData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_interfaces__msg__ServoData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_INTERFACES__MSG__DETAIL__SERVO_DATA__STRUCT_H_
