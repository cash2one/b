// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: MessageTypeDefine.proto

#ifndef PROTOBUF_MessageTypeDefine_2eproto__INCLUDED
#define PROTOBUF_MessageTypeDefine_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2006000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_enum_reflection.h>
// @@protoc_insertion_point(includes)

namespace Message {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_MessageTypeDefine_2eproto();
void protobuf_AssignDesc_MessageTypeDefine_2eproto();
void protobuf_ShutdownFile_MessageTypeDefine_2eproto();


enum MsgDefine {
  MSG_SERVER_BEGIN = 0,
  MSG_SERVER_REGISTER = 1,
  MSG_SERVER_SYNCSERVER = 2,
  MSG_SERVER_SYNCGATELOAD = 3,
  MSG_SERVER_WORLD_REQUEST = 4,
  MSG_SERVER_WORLD_RESPONSE = 5,
  MSG_SERVER_NET_ACCEPT = 6,
  MSG_SERVER_NET_CLOSE = 7,
  MSG_SERVER_NET_CONNECT = 8,
  MSG_SERVER_NET_RESPONE = 9,
  MSG_COMMON_ERROR = 100,
  MSG_COMMON_EVENT = 101,
  MSG_GAMEOBJ_CREATE = 200,
  MSG_GAMEOBJ_REMOVE = 201,
  MSG_GAMEOBJ_OBJFIELD_SETI32 = 202,
  MSG_GAMEOBJ_OBJFIELD_SETI64 = 203,
  MSG_GAMEOBJ_OBJFIELD_SETSTR = 204,
  MSG_GAMEOBJ_OBJFIELD_SETALL = 205,
  MSG_GAMEOBJ_MAPFIELD_ADD = 206,
  MSG_GAMEOBJ_MAPFIELD_DEL = 207,
  MSG_GAMEOBJ_MAPFIELD_SETALL = 208,
  MSG_GAMEOBJ_MAPFIELD_SETI32 = 209,
  MSG_GAMEOBJ_MAPFIELD_SETI64 = 210,
  MSG_GAMEOBJ_MAPFIELD_SETSTR = 211,
  MSG_GAMEOBJ_SYNC = 212,
  MSG_GAMEOBJ_SYNC_OBJFIELD = 213,
  MSG_GAMEOBJ_SYNC_MAPFIELD = 214,
  MSG_GAMEOBJ_SYNC_FINISH = 215,
  MSG_GAMEOBJ_LOAD_REQUEST = 216,
  MSG_GAMEOBJ_LOGIN_REQUEST = 217,
  MSG_USER_lOGIN_REQUEST = 301,
  MSG_USER_DISPLACE = 302,
  MSG_USER_GET_GATESVR = 303,
  MSG_USER_HEART_RESPONSE = 304,
  MSG_PLAYER_LOGIN_REQUEST = 400,
  MSG_PLAYER_LOGOUT_REQEUST = 401,
  MSG_PLAYER_CHECKNAME_REQUEST = 402,
  MSG_PLAYER_CHECKNAME_RESPONSE = 403,
  MSG_PLAYER_LOAD_COUNT = 404,
  MSG_PLAYER_LOAD_DATA = 405,
  MSG_PLAYER_LOAD_OVER = 406,
  MSG_PLAYER_SYNC_ATTRINT = 407,
  MSG_PLAYER_SYNC_ATTRI64 = 408,
  MSG_ITEM_DATA_SYNC = 500,
  MSG_ITEM_DELETE_SYNC = 501,
  MSG_ITEM_ATTRINT_SYNC = 502,
  MSG_ITEM_ATTRI64_SYNC = 503,
  MSG_SERVER_END = 29999,
  MSG_CLIENT_BEGIN = 30000,
  MSG_REQUEST_USER_CHECK = 30001,
  MSG_REQUEST_GUEST_CHECK = 30002,
  MSG_REQUEST_USER_LOGIN = 30003,
  MSG_REQUEST_USER_LOGOUT = 30004,
  MSG_REQUEST_USER_HEART = 30005,
  MSG_REQUEST_PLAYER_CREATE = 30006,
  MSG_REQUEST_PLAYER_DELETE = 30007,
  MSG_REQUEST_PLAYER_OBSERVE = 30008,
  MSG_REQUEST_ITEM_USE = 30100,
  MSG_REQUEST_ITEM_DELETE = 30101,
  MSG_REQUEST_ITEM_SELL = 30102,
  MSG_REQUEST_ITEM_EQUIP = 30103,
  MSG_REQUEST_ITEM_UNEQUIP = 30104,
  MSG_REQUEST_DEBUG = 60000,
  MSG_REQUEST_NET_TEST = 60001,
  MSG_CLIENT_END = 65535
};
bool MsgDefine_IsValid(int value);
const MsgDefine MsgDefine_MIN = MSG_SERVER_BEGIN;
const MsgDefine MsgDefine_MAX = MSG_CLIENT_END;
const int MsgDefine_ARRAYSIZE = MsgDefine_MAX + 1;

const ::google::protobuf::EnumDescriptor* MsgDefine_descriptor();
inline const ::std::string& MsgDefine_Name(MsgDefine value) {
  return ::google::protobuf::internal::NameOfEnum(
    MsgDefine_descriptor(), value);
}
inline bool MsgDefine_Parse(
    const ::std::string& name, MsgDefine* value) {
  return ::google::protobuf::internal::ParseNamedEnum<MsgDefine>(
    MsgDefine_descriptor(), name, value);
}
// ===================================================================


// ===================================================================


// ===================================================================


// @@protoc_insertion_point(namespace_scope)

}  // namespace Message

#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::Message::MsgDefine> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::Message::MsgDefine>() {
  return ::Message::MsgDefine_descriptor();
}

}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_MessageTypeDefine_2eproto__INCLUDED
