// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interface_practice:msg/Num.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE_PRACTICE__MSG__DETAIL__NUM__BUILDER_HPP_
#define INTERFACE_PRACTICE__MSG__DETAIL__NUM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interface_practice/msg/detail/num__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interface_practice
{

namespace msg
{

namespace builder
{

class Init_Num_num
{
public:
  Init_Num_num()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::interface_practice::msg::Num num(::interface_practice::msg::Num::_num_type arg)
  {
    msg_.num = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interface_practice::msg::Num msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::interface_practice::msg::Num>()
{
  return interface_practice::msg::builder::Init_Num_num();
}

}  // namespace interface_practice

#endif  // INTERFACE_PRACTICE__MSG__DETAIL__NUM__BUILDER_HPP_
