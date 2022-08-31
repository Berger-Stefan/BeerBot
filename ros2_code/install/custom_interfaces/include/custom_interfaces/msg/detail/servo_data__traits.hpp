// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from custom_interfaces:msg/ServoData.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__MSG__DETAIL__SERVO_DATA__TRAITS_HPP_
#define CUSTOM_INTERFACES__MSG__DETAIL__SERVO_DATA__TRAITS_HPP_

#include "custom_interfaces/msg/detail/servo_data__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<custom_interfaces::msg::ServoData>()
{
  return "custom_interfaces::msg::ServoData";
}

template<>
inline const char * name<custom_interfaces::msg::ServoData>()
{
  return "custom_interfaces/msg/ServoData";
}

template<>
struct has_fixed_size<custom_interfaces::msg::ServoData>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<custom_interfaces::msg::ServoData>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<custom_interfaces::msg::ServoData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CUSTOM_INTERFACES__MSG__DETAIL__SERVO_DATA__TRAITS_HPP_
