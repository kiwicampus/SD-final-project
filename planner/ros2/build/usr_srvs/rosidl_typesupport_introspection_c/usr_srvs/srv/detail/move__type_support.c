// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from usr_srvs:srv/Move.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "usr_srvs/srv/detail/move__rosidl_typesupport_introspection_c.h"
#include "usr_srvs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "usr_srvs/srv/detail/move__functions.h"
#include "usr_srvs/srv/detail/move__struct.h"


// Include directives for member types
// Member `waypoints`
#include "usr_msgs/msg/waypoint.h"
// Member `waypoints`
#include "usr_msgs/msg/detail/waypoint__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Move_Request__rosidl_typesupport_introspection_c__Move_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  usr_srvs__srv__Move_Request__init(message_memory);
}

void Move_Request__rosidl_typesupport_introspection_c__Move_Request_fini_function(void * message_memory)
{
  usr_srvs__srv__Move_Request__fini(message_memory);
}

size_t Move_Request__rosidl_typesupport_introspection_c__size_function__Waypoint__waypoints(
  const void * untyped_member)
{
  const usr_msgs__msg__Waypoint__Sequence * member =
    (const usr_msgs__msg__Waypoint__Sequence *)(untyped_member);
  return member->size;
}

const void * Move_Request__rosidl_typesupport_introspection_c__get_const_function__Waypoint__waypoints(
  const void * untyped_member, size_t index)
{
  const usr_msgs__msg__Waypoint__Sequence * member =
    (const usr_msgs__msg__Waypoint__Sequence *)(untyped_member);
  return &member->data[index];
}

void * Move_Request__rosidl_typesupport_introspection_c__get_function__Waypoint__waypoints(
  void * untyped_member, size_t index)
{
  usr_msgs__msg__Waypoint__Sequence * member =
    (usr_msgs__msg__Waypoint__Sequence *)(untyped_member);
  return &member->data[index];
}

bool Move_Request__rosidl_typesupport_introspection_c__resize_function__Waypoint__waypoints(
  void * untyped_member, size_t size)
{
  usr_msgs__msg__Waypoint__Sequence * member =
    (usr_msgs__msg__Waypoint__Sequence *)(untyped_member);
  usr_msgs__msg__Waypoint__Sequence__fini(member);
  return usr_msgs__msg__Waypoint__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember Move_Request__rosidl_typesupport_introspection_c__Move_Request_message_member_array[1] = {
  {
    "waypoints",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(usr_srvs__srv__Move_Request, waypoints),  // bytes offset in struct
    NULL,  // default value
    Move_Request__rosidl_typesupport_introspection_c__size_function__Waypoint__waypoints,  // size() function pointer
    Move_Request__rosidl_typesupport_introspection_c__get_const_function__Waypoint__waypoints,  // get_const(index) function pointer
    Move_Request__rosidl_typesupport_introspection_c__get_function__Waypoint__waypoints,  // get(index) function pointer
    Move_Request__rosidl_typesupport_introspection_c__resize_function__Waypoint__waypoints  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Move_Request__rosidl_typesupport_introspection_c__Move_Request_message_members = {
  "usr_srvs__srv",  // message namespace
  "Move_Request",  // message name
  1,  // number of fields
  sizeof(usr_srvs__srv__Move_Request),
  Move_Request__rosidl_typesupport_introspection_c__Move_Request_message_member_array,  // message members
  Move_Request__rosidl_typesupport_introspection_c__Move_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  Move_Request__rosidl_typesupport_introspection_c__Move_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Move_Request__rosidl_typesupport_introspection_c__Move_Request_message_type_support_handle = {
  0,
  &Move_Request__rosidl_typesupport_introspection_c__Move_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_usr_srvs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, usr_srvs, srv, Move_Request)() {
  Move_Request__rosidl_typesupport_introspection_c__Move_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, usr_msgs, msg, Waypoint)();
  if (!Move_Request__rosidl_typesupport_introspection_c__Move_Request_message_type_support_handle.typesupport_identifier) {
    Move_Request__rosidl_typesupport_introspection_c__Move_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Move_Request__rosidl_typesupport_introspection_c__Move_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "usr_srvs/srv/detail/move__rosidl_typesupport_introspection_c.h"
// already included above
// #include "usr_srvs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "usr_srvs/srv/detail/move__functions.h"
// already included above
// #include "usr_srvs/srv/detail/move__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void Move_Response__rosidl_typesupport_introspection_c__Move_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  usr_srvs__srv__Move_Response__init(message_memory);
}

void Move_Response__rosidl_typesupport_introspection_c__Move_Response_fini_function(void * message_memory)
{
  usr_srvs__srv__Move_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Move_Response__rosidl_typesupport_introspection_c__Move_Response_message_member_array[1] = {
  {
    "completed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(usr_srvs__srv__Move_Response, completed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Move_Response__rosidl_typesupport_introspection_c__Move_Response_message_members = {
  "usr_srvs__srv",  // message namespace
  "Move_Response",  // message name
  1,  // number of fields
  sizeof(usr_srvs__srv__Move_Response),
  Move_Response__rosidl_typesupport_introspection_c__Move_Response_message_member_array,  // message members
  Move_Response__rosidl_typesupport_introspection_c__Move_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  Move_Response__rosidl_typesupport_introspection_c__Move_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Move_Response__rosidl_typesupport_introspection_c__Move_Response_message_type_support_handle = {
  0,
  &Move_Response__rosidl_typesupport_introspection_c__Move_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_usr_srvs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, usr_srvs, srv, Move_Response)() {
  if (!Move_Response__rosidl_typesupport_introspection_c__Move_Response_message_type_support_handle.typesupport_identifier) {
    Move_Response__rosidl_typesupport_introspection_c__Move_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Move_Response__rosidl_typesupport_introspection_c__Move_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "usr_srvs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "usr_srvs/srv/detail/move__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers usr_srvs__srv__detail__move__rosidl_typesupport_introspection_c__Move_service_members = {
  "usr_srvs__srv",  // service namespace
  "Move",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // usr_srvs__srv__detail__move__rosidl_typesupport_introspection_c__Move_Request_message_type_support_handle,
  NULL  // response message
  // usr_srvs__srv__detail__move__rosidl_typesupport_introspection_c__Move_Response_message_type_support_handle
};

static rosidl_service_type_support_t usr_srvs__srv__detail__move__rosidl_typesupport_introspection_c__Move_service_type_support_handle = {
  0,
  &usr_srvs__srv__detail__move__rosidl_typesupport_introspection_c__Move_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, usr_srvs, srv, Move_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, usr_srvs, srv, Move_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_usr_srvs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, usr_srvs, srv, Move)() {
  if (!usr_srvs__srv__detail__move__rosidl_typesupport_introspection_c__Move_service_type_support_handle.typesupport_identifier) {
    usr_srvs__srv__detail__move__rosidl_typesupport_introspection_c__Move_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)usr_srvs__srv__detail__move__rosidl_typesupport_introspection_c__Move_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, usr_srvs, srv, Move_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, usr_srvs, srv, Move_Response)()->data;
  }

  return &usr_srvs__srv__detail__move__rosidl_typesupport_introspection_c__Move_service_type_support_handle;
}
