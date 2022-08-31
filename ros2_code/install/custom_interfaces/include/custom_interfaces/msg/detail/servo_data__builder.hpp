// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_interfaces:msg/ServoData.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__MSG__DETAIL__SERVO_DATA__BUILDER_HPP_
#define CUSTOM_INTERFACES__MSG__DETAIL__SERVO_DATA__BUILDER_HPP_

#include "custom_interfaces/msg/detail/servo_data__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace custom_interfaces
{

namespace msg
{

namespace builder
{

class Init_ServoData_position
{
public:
  Init_ServoData_position()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::custom_interfaces::msg::ServoData position(::custom_interfaces::msg::ServoData::_position_type arg)
  {
    msg_.position = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces::msg::ServoData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::msg::ServoData>()
{
  return custom_interfaces::msg::builder::Init_ServoData_position();
}

}  // namespace custom_interfaces

#endif  // CUSTOM_INTERFACES__MSG__DETAIL__SERVO_DATA__BUILDER_HPP_
