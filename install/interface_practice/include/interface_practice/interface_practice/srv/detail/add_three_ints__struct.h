// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interface_practice:srv/AddThreeInts.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE_PRACTICE__SRV__DETAIL__ADD_THREE_INTS__STRUCT_H_
#define INTERFACE_PRACTICE__SRV__DETAIL__ADD_THREE_INTS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/AddThreeInts in the package interface_practice.
typedef struct interface_practice__srv__AddThreeInts_Request
{
  int64_t a;
  int64_t b;
  int64_t c;
} interface_practice__srv__AddThreeInts_Request;

// Struct for a sequence of interface_practice__srv__AddThreeInts_Request.
typedef struct interface_practice__srv__AddThreeInts_Request__Sequence
{
  interface_practice__srv__AddThreeInts_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interface_practice__srv__AddThreeInts_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/AddThreeInts in the package interface_practice.
typedef struct interface_practice__srv__AddThreeInts_Response
{
  int64_t sum;
} interface_practice__srv__AddThreeInts_Response;

// Struct for a sequence of interface_practice__srv__AddThreeInts_Response.
typedef struct interface_practice__srv__AddThreeInts_Response__Sequence
{
  interface_practice__srv__AddThreeInts_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interface_practice__srv__AddThreeInts_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACE_PRACTICE__SRV__DETAIL__ADD_THREE_INTS__STRUCT_H_
