// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interface_practice:msg/Sphere.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE_PRACTICE__MSG__DETAIL__SPHERE__BUILDER_HPP_
#define INTERFACE_PRACTICE__MSG__DETAIL__SPHERE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interface_practice/msg/detail/sphere__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interface_practice
{

namespace msg
{

namespace builder
{

class Init_Sphere_radius
{
public:
  explicit Init_Sphere_radius(::interface_practice::msg::Sphere & msg)
  : msg_(msg)
  {}
  ::interface_practice::msg::Sphere radius(::interface_practice::msg::Sphere::_radius_type arg)
  {
    msg_.radius = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interface_practice::msg::Sphere msg_;
};

class Init_Sphere_center
{
public:
  Init_Sphere_center()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Sphere_radius center(::interface_practice::msg::Sphere::_center_type arg)
  {
    msg_.center = std::move(arg);
    return Init_Sphere_radius(msg_);
  }

private:
  ::interface_practice::msg::Sphere msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::interface_practice::msg::Sphere>()
{
  return interface_practice::msg::builder::Init_Sphere_center();
}

}  // namespace interface_practice

#endif  // INTERFACE_PRACTICE__MSG__DETAIL__SPHERE__BUILDER_HPP_
