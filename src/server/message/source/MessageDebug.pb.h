// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: MessageDebug.proto

#ifndef PROTOBUF_MessageDebug_2eproto__INCLUDED
#define PROTOBUF_MessageDebug_2eproto__INCLUDED

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
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace Message {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_MessageDebug_2eproto();
void protobuf_AssignDesc_MessageDebug_2eproto();
void protobuf_ShutdownFile_MessageDebug_2eproto();

class DebugRequest;
class NetTestRequest;

// ===================================================================

class DebugRequest : public ::google::protobuf::Message {
 public:
  DebugRequest();
  virtual ~DebugRequest();

  DebugRequest(const DebugRequest& from);

  inline DebugRequest& operator=(const DebugRequest& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const DebugRequest& default_instance();

  void Swap(DebugRequest* other);

  // implements Message ----------------------------------------------

  DebugRequest* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const DebugRequest& from);
  void MergeFrom(const DebugRequest& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated string strings = 1;
  inline int strings_size() const;
  inline void clear_strings();
  static const int kStringsFieldNumber = 1;
  inline const ::std::string& strings(int index) const;
  inline ::std::string* mutable_strings(int index);
  inline void set_strings(int index, const ::std::string& value);
  inline void set_strings(int index, const char* value);
  inline void set_strings(int index, const char* value, size_t size);
  inline ::std::string* add_strings();
  inline void add_strings(const ::std::string& value);
  inline void add_strings(const char* value);
  inline void add_strings(const char* value, size_t size);
  inline const ::google::protobuf::RepeatedPtrField< ::std::string>& strings() const;
  inline ::google::protobuf::RepeatedPtrField< ::std::string>* mutable_strings();

  // optional int64 pid = 2;
  inline bool has_pid() const;
  inline void clear_pid();
  static const int kPidFieldNumber = 2;
  inline ::google::protobuf::int64 pid() const;
  inline void set_pid(::google::protobuf::int64 value);

  // @@protoc_insertion_point(class_scope:Message.DebugRequest)
 private:
  inline void set_has_pid();
  inline void clear_has_pid();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::std::string> strings_;
  ::google::protobuf::int64 pid_;
  friend void  protobuf_AddDesc_MessageDebug_2eproto();
  friend void protobuf_AssignDesc_MessageDebug_2eproto();
  friend void protobuf_ShutdownFile_MessageDebug_2eproto();

  void InitAsDefaultInstance();
  static DebugRequest* default_instance_;
};
// -------------------------------------------------------------------

class NetTestRequest : public ::google::protobuf::Message {
 public:
  NetTestRequest();
  virtual ~NetTestRequest();

  NetTestRequest(const NetTestRequest& from);

  inline NetTestRequest& operator=(const NetTestRequest& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const NetTestRequest& default_instance();

  void Swap(NetTestRequest* other);

  // implements Message ----------------------------------------------

  NetTestRequest* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const NetTestRequest& from);
  void MergeFrom(const NetTestRequest& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required int32 no = 1;
  inline bool has_no() const;
  inline void clear_no();
  static const int kNoFieldNumber = 1;
  inline ::google::protobuf::int32 no() const;
  inline void set_no(::google::protobuf::int32 value);

  // repeated int32 idata = 2;
  inline int idata_size() const;
  inline void clear_idata();
  static const int kIdataFieldNumber = 2;
  inline ::google::protobuf::int32 idata(int index) const;
  inline void set_idata(int index, ::google::protobuf::int32 value);
  inline void add_idata(::google::protobuf::int32 value);
  inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
      idata() const;
  inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
      mutable_idata();

  // optional string sdata = 3;
  inline bool has_sdata() const;
  inline void clear_sdata();
  static const int kSdataFieldNumber = 3;
  inline const ::std::string& sdata() const;
  inline void set_sdata(const ::std::string& value);
  inline void set_sdata(const char* value);
  inline void set_sdata(const char* value, size_t size);
  inline ::std::string* mutable_sdata();
  inline ::std::string* release_sdata();
  inline void set_allocated_sdata(::std::string* sdata);

  // @@protoc_insertion_point(class_scope:Message.NetTestRequest)
 private:
  inline void set_has_no();
  inline void clear_has_no();
  inline void set_has_sdata();
  inline void clear_has_sdata();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 > idata_;
  ::std::string* sdata_;
  ::google::protobuf::int32 no_;
  friend void  protobuf_AddDesc_MessageDebug_2eproto();
  friend void protobuf_AssignDesc_MessageDebug_2eproto();
  friend void protobuf_ShutdownFile_MessageDebug_2eproto();

  void InitAsDefaultInstance();
  static NetTestRequest* default_instance_;
};
// ===================================================================


// ===================================================================

// DebugRequest

// repeated string strings = 1;
inline int DebugRequest::strings_size() const {
  return strings_.size();
}
inline void DebugRequest::clear_strings() {
  strings_.Clear();
}
inline const ::std::string& DebugRequest::strings(int index) const {
  // @@protoc_insertion_point(field_get:Message.DebugRequest.strings)
  return strings_.Get(index);
}
inline ::std::string* DebugRequest::mutable_strings(int index) {
  // @@protoc_insertion_point(field_mutable:Message.DebugRequest.strings)
  return strings_.Mutable(index);
}
inline void DebugRequest::set_strings(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:Message.DebugRequest.strings)
  strings_.Mutable(index)->assign(value);
}
inline void DebugRequest::set_strings(int index, const char* value) {
  strings_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:Message.DebugRequest.strings)
}
inline void DebugRequest::set_strings(int index, const char* value, size_t size) {
  strings_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:Message.DebugRequest.strings)
}
inline ::std::string* DebugRequest::add_strings() {
  return strings_.Add();
}
inline void DebugRequest::add_strings(const ::std::string& value) {
  strings_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:Message.DebugRequest.strings)
}
inline void DebugRequest::add_strings(const char* value) {
  strings_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:Message.DebugRequest.strings)
}
inline void DebugRequest::add_strings(const char* value, size_t size) {
  strings_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:Message.DebugRequest.strings)
}
inline const ::google::protobuf::RepeatedPtrField< ::std::string>&
DebugRequest::strings() const {
  // @@protoc_insertion_point(field_list:Message.DebugRequest.strings)
  return strings_;
}
inline ::google::protobuf::RepeatedPtrField< ::std::string>*
DebugRequest::mutable_strings() {
  // @@protoc_insertion_point(field_mutable_list:Message.DebugRequest.strings)
  return &strings_;
}

// optional int64 pid = 2;
inline bool DebugRequest::has_pid() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void DebugRequest::set_has_pid() {
  _has_bits_[0] |= 0x00000002u;
}
inline void DebugRequest::clear_has_pid() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void DebugRequest::clear_pid() {
  pid_ = GOOGLE_LONGLONG(0);
  clear_has_pid();
}
inline ::google::protobuf::int64 DebugRequest::pid() const {
  // @@protoc_insertion_point(field_get:Message.DebugRequest.pid)
  return pid_;
}
inline void DebugRequest::set_pid(::google::protobuf::int64 value) {
  set_has_pid();
  pid_ = value;
  // @@protoc_insertion_point(field_set:Message.DebugRequest.pid)
}

// -------------------------------------------------------------------

// NetTestRequest

// required int32 no = 1;
inline bool NetTestRequest::has_no() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void NetTestRequest::set_has_no() {
  _has_bits_[0] |= 0x00000001u;
}
inline void NetTestRequest::clear_has_no() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void NetTestRequest::clear_no() {
  no_ = 0;
  clear_has_no();
}
inline ::google::protobuf::int32 NetTestRequest::no() const {
  // @@protoc_insertion_point(field_get:Message.NetTestRequest.no)
  return no_;
}
inline void NetTestRequest::set_no(::google::protobuf::int32 value) {
  set_has_no();
  no_ = value;
  // @@protoc_insertion_point(field_set:Message.NetTestRequest.no)
}

// repeated int32 idata = 2;
inline int NetTestRequest::idata_size() const {
  return idata_.size();
}
inline void NetTestRequest::clear_idata() {
  idata_.Clear();
}
inline ::google::protobuf::int32 NetTestRequest::idata(int index) const {
  // @@protoc_insertion_point(field_get:Message.NetTestRequest.idata)
  return idata_.Get(index);
}
inline void NetTestRequest::set_idata(int index, ::google::protobuf::int32 value) {
  idata_.Set(index, value);
  // @@protoc_insertion_point(field_set:Message.NetTestRequest.idata)
}
inline void NetTestRequest::add_idata(::google::protobuf::int32 value) {
  idata_.Add(value);
  // @@protoc_insertion_point(field_add:Message.NetTestRequest.idata)
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
NetTestRequest::idata() const {
  // @@protoc_insertion_point(field_list:Message.NetTestRequest.idata)
  return idata_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
NetTestRequest::mutable_idata() {
  // @@protoc_insertion_point(field_mutable_list:Message.NetTestRequest.idata)
  return &idata_;
}

// optional string sdata = 3;
inline bool NetTestRequest::has_sdata() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void NetTestRequest::set_has_sdata() {
  _has_bits_[0] |= 0x00000004u;
}
inline void NetTestRequest::clear_has_sdata() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void NetTestRequest::clear_sdata() {
  if (sdata_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    sdata_->clear();
  }
  clear_has_sdata();
}
inline const ::std::string& NetTestRequest::sdata() const {
  // @@protoc_insertion_point(field_get:Message.NetTestRequest.sdata)
  return *sdata_;
}
inline void NetTestRequest::set_sdata(const ::std::string& value) {
  set_has_sdata();
  if (sdata_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    sdata_ = new ::std::string;
  }
  sdata_->assign(value);
  // @@protoc_insertion_point(field_set:Message.NetTestRequest.sdata)
}
inline void NetTestRequest::set_sdata(const char* value) {
  set_has_sdata();
  if (sdata_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    sdata_ = new ::std::string;
  }
  sdata_->assign(value);
  // @@protoc_insertion_point(field_set_char:Message.NetTestRequest.sdata)
}
inline void NetTestRequest::set_sdata(const char* value, size_t size) {
  set_has_sdata();
  if (sdata_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    sdata_ = new ::std::string;
  }
  sdata_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:Message.NetTestRequest.sdata)
}
inline ::std::string* NetTestRequest::mutable_sdata() {
  set_has_sdata();
  if (sdata_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    sdata_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:Message.NetTestRequest.sdata)
  return sdata_;
}
inline ::std::string* NetTestRequest::release_sdata() {
  clear_has_sdata();
  if (sdata_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = sdata_;
    sdata_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void NetTestRequest::set_allocated_sdata(::std::string* sdata) {
  if (sdata_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete sdata_;
  }
  if (sdata) {
    set_has_sdata();
    sdata_ = sdata;
  } else {
    clear_has_sdata();
    sdata_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:Message.NetTestRequest.sdata)
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace Message

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_MessageDebug_2eproto__INCLUDED
