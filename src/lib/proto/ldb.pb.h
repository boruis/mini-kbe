// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ldb.proto

#ifndef PROTOBUF_ldb_2eproto__INCLUDED
#define PROTOBUF_ldb_2eproto__INCLUDED

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

namespace login_dbmgr {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_ldb_2eproto();
void protobuf_AssignDesc_ldb_2eproto();
void protobuf_ShutdownFile_ldb_2eproto();

class AccountLogin;

// ===================================================================

class AccountLogin : public ::google::protobuf::Message {
 public:
  AccountLogin();
  virtual ~AccountLogin();

  AccountLogin(const AccountLogin& from);

  inline AccountLogin& operator=(const AccountLogin& from) {
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
  static const AccountLogin& default_instance();

  void Swap(AccountLogin* other);

  // implements Message ----------------------------------------------

  AccountLogin* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const AccountLogin& from);
  void MergeFrom(const AccountLogin& from);
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

  // optional string accountName = 1;
  inline bool has_accountname() const;
  inline void clear_accountname();
  static const int kAccountNameFieldNumber = 1;
  inline const ::std::string& accountname() const;
  inline void set_accountname(const ::std::string& value);
  inline void set_accountname(const char* value);
  inline void set_accountname(const char* value, size_t size);
  inline ::std::string* mutable_accountname();
  inline ::std::string* release_accountname();
  inline void set_allocated_accountname(::std::string* accountname);

  // optional string password = 2;
  inline bool has_password() const;
  inline void clear_password();
  static const int kPasswordFieldNumber = 2;
  inline const ::std::string& password() const;
  inline void set_password(const ::std::string& value);
  inline void set_password(const char* value);
  inline void set_password(const char* value, size_t size);
  inline ::std::string* mutable_password();
  inline ::std::string* release_password();
  inline void set_allocated_password(::std::string* password);

  // optional string extraData = 3;
  inline bool has_extradata() const;
  inline void clear_extradata();
  static const int kExtraDataFieldNumber = 3;
  inline const ::std::string& extradata() const;
  inline void set_extradata(const ::std::string& value);
  inline void set_extradata(const char* value);
  inline void set_extradata(const char* value, size_t size);
  inline ::std::string* mutable_extradata();
  inline ::std::string* release_extradata();
  inline void set_allocated_extradata(::std::string* extradata);

  // @@protoc_insertion_point(class_scope:login_dbmgr.AccountLogin)
 private:
  inline void set_has_accountname();
  inline void clear_has_accountname();
  inline void set_has_password();
  inline void clear_has_password();
  inline void set_has_extradata();
  inline void clear_has_extradata();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::std::string* accountname_;
  ::std::string* password_;
  ::std::string* extradata_;
  friend void  protobuf_AddDesc_ldb_2eproto();
  friend void protobuf_AssignDesc_ldb_2eproto();
  friend void protobuf_ShutdownFile_ldb_2eproto();

  void InitAsDefaultInstance();
  static AccountLogin* default_instance_;
};
// ===================================================================


// ===================================================================

// AccountLogin

// optional string accountName = 1;
inline bool AccountLogin::has_accountname() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void AccountLogin::set_has_accountname() {
  _has_bits_[0] |= 0x00000001u;
}
inline void AccountLogin::clear_has_accountname() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void AccountLogin::clear_accountname() {
  if (accountname_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    accountname_->clear();
  }
  clear_has_accountname();
}
inline const ::std::string& AccountLogin::accountname() const {
  // @@protoc_insertion_point(field_get:login_dbmgr.AccountLogin.accountName)
  return *accountname_;
}
inline void AccountLogin::set_accountname(const ::std::string& value) {
  set_has_accountname();
  if (accountname_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    accountname_ = new ::std::string;
  }
  accountname_->assign(value);
  // @@protoc_insertion_point(field_set:login_dbmgr.AccountLogin.accountName)
}
inline void AccountLogin::set_accountname(const char* value) {
  set_has_accountname();
  if (accountname_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    accountname_ = new ::std::string;
  }
  accountname_->assign(value);
  // @@protoc_insertion_point(field_set_char:login_dbmgr.AccountLogin.accountName)
}
inline void AccountLogin::set_accountname(const char* value, size_t size) {
  set_has_accountname();
  if (accountname_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    accountname_ = new ::std::string;
  }
  accountname_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:login_dbmgr.AccountLogin.accountName)
}
inline ::std::string* AccountLogin::mutable_accountname() {
  set_has_accountname();
  if (accountname_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    accountname_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:login_dbmgr.AccountLogin.accountName)
  return accountname_;
}
inline ::std::string* AccountLogin::release_accountname() {
  clear_has_accountname();
  if (accountname_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = accountname_;
    accountname_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void AccountLogin::set_allocated_accountname(::std::string* accountname) {
  if (accountname_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete accountname_;
  }
  if (accountname) {
    set_has_accountname();
    accountname_ = accountname;
  } else {
    clear_has_accountname();
    accountname_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:login_dbmgr.AccountLogin.accountName)
}

// optional string password = 2;
inline bool AccountLogin::has_password() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void AccountLogin::set_has_password() {
  _has_bits_[0] |= 0x00000002u;
}
inline void AccountLogin::clear_has_password() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void AccountLogin::clear_password() {
  if (password_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    password_->clear();
  }
  clear_has_password();
}
inline const ::std::string& AccountLogin::password() const {
  // @@protoc_insertion_point(field_get:login_dbmgr.AccountLogin.password)
  return *password_;
}
inline void AccountLogin::set_password(const ::std::string& value) {
  set_has_password();
  if (password_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    password_ = new ::std::string;
  }
  password_->assign(value);
  // @@protoc_insertion_point(field_set:login_dbmgr.AccountLogin.password)
}
inline void AccountLogin::set_password(const char* value) {
  set_has_password();
  if (password_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    password_ = new ::std::string;
  }
  password_->assign(value);
  // @@protoc_insertion_point(field_set_char:login_dbmgr.AccountLogin.password)
}
inline void AccountLogin::set_password(const char* value, size_t size) {
  set_has_password();
  if (password_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    password_ = new ::std::string;
  }
  password_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:login_dbmgr.AccountLogin.password)
}
inline ::std::string* AccountLogin::mutable_password() {
  set_has_password();
  if (password_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    password_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:login_dbmgr.AccountLogin.password)
  return password_;
}
inline ::std::string* AccountLogin::release_password() {
  clear_has_password();
  if (password_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = password_;
    password_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void AccountLogin::set_allocated_password(::std::string* password) {
  if (password_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete password_;
  }
  if (password) {
    set_has_password();
    password_ = password;
  } else {
    clear_has_password();
    password_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:login_dbmgr.AccountLogin.password)
}

// optional string extraData = 3;
inline bool AccountLogin::has_extradata() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void AccountLogin::set_has_extradata() {
  _has_bits_[0] |= 0x00000004u;
}
inline void AccountLogin::clear_has_extradata() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void AccountLogin::clear_extradata() {
  if (extradata_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    extradata_->clear();
  }
  clear_has_extradata();
}
inline const ::std::string& AccountLogin::extradata() const {
  // @@protoc_insertion_point(field_get:login_dbmgr.AccountLogin.extraData)
  return *extradata_;
}
inline void AccountLogin::set_extradata(const ::std::string& value) {
  set_has_extradata();
  if (extradata_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    extradata_ = new ::std::string;
  }
  extradata_->assign(value);
  // @@protoc_insertion_point(field_set:login_dbmgr.AccountLogin.extraData)
}
inline void AccountLogin::set_extradata(const char* value) {
  set_has_extradata();
  if (extradata_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    extradata_ = new ::std::string;
  }
  extradata_->assign(value);
  // @@protoc_insertion_point(field_set_char:login_dbmgr.AccountLogin.extraData)
}
inline void AccountLogin::set_extradata(const char* value, size_t size) {
  set_has_extradata();
  if (extradata_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    extradata_ = new ::std::string;
  }
  extradata_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:login_dbmgr.AccountLogin.extraData)
}
inline ::std::string* AccountLogin::mutable_extradata() {
  set_has_extradata();
  if (extradata_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    extradata_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:login_dbmgr.AccountLogin.extraData)
  return extradata_;
}
inline ::std::string* AccountLogin::release_extradata() {
  clear_has_extradata();
  if (extradata_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = extradata_;
    extradata_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void AccountLogin::set_allocated_extradata(::std::string* extradata) {
  if (extradata_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete extradata_;
  }
  if (extradata) {
    set_has_extradata();
    extradata_ = extradata;
  } else {
    clear_has_extradata();
    extradata_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:login_dbmgr.AccountLogin.extraData)
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace login_dbmgr

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_ldb_2eproto__INCLUDED
