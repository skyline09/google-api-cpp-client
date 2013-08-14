// Copyright 2010 Google Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License"); you may not
// use this file except in compliance with the License. You may obtain a copy of
// the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
// WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the
// License for the specific language governing permissions and limitations under
// the License.

// This code was generated by google-apis-code-generator 1.4.1
//   Build date: 2013-08-07 19:00:49 UTC
//   on: 2013-08-12, 19:01:32 UTC
//   C++ generator version:

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google APIs Discovery Service.
// Service:
//   Drive API (drive/v2)
// Generated from:
//   Version: v2
//   Revision: 93
// Generated by:
//    Tool: google-apis-code-generator 1.4.1
//     C++: 0.1
#ifndef  GOOGLE_DRIVE_API_PERMISSION_H_
#define  GOOGLE_DRIVE_API_PERMISSION_H_

#include <string>
#include "googleapis/base/macros.h"
#include "googleapis/client/data/jsoncpp_data.h"
#include "googleapis/strings/stringpiece.h"

namespace Json {
class Value;
}  // namespace Json

namespace google_drive_api {
using namespace googleapis;

/**
 * A permission for a file.
 *
 * @ingroup DataObject
 */
class Permission : public client::JsonCppData {
 public:

  /**
   * Creates a new default instance.
   *
   * @return Ownership is passed back to the caller.
   */
  static Permission* New();

  /**
   * Standard constructor for an immutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit Permission(const Json::Value& storage);

  /**
   * Standard constructor for a mutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit Permission(Json::Value* storage);

  /**
   * Standard destructor.
   */
  virtual ~Permission();

  /**
   * Returns a string denoting the type of this data object.
   *
   * @return <code>google_drive_api::Permission</code>
   */
  const StringPiece GetTypeName() const {
    return StringPiece("google_drive_api::Permission");
  }

  /**
   * Determine if the '<code>additionalRoles</code>' attribute was set.
   *
   * @return true if the '<code>additionalRoles</code>' attribute was set.
   */
  bool has_additionalRoles() const {
    return Storage().isMember("additionalRoles");
  }

  /**
   * Clears the '<code>additionalRoles</code>' attribute.
   */
  void clear_additionalRoles() {
    MutableStorage()->removeMember("additionalRoles");
  }


  /**
   * Get a reference to the value of the '<code>additionalRoles</code>'
   * attribute.
   */
  const client::JsonCppArray<string > get_additionalRoles() const {
    return client::JsonCppArray<string >(Storage("additionalRoles"));
  }

  /**
   * Gets a reference to a mutable value of the '<code>additionalRoles</code>'
   * property.
   *
   * Additional roles for this user. Only commenter is currently allowed.
   *
   * @return The result can be modified to change the attribute value.
   */
  client::JsonCppArray<string > mutable_additionalRoles() {
    return client::JsonCppArray<string >(MutableStorage("additionalRoles"));
  }

  /**
   * Determine if the '<code>authKey</code>' attribute was set.
   *
   * @return true if the '<code>authKey</code>' attribute was set.
   */
  bool has_authKey() const {
    return Storage().isMember("authKey");
  }

  /**
   * Clears the '<code>authKey</code>' attribute.
   */
  void clear_authKey() {
    MutableStorage()->removeMember("authKey");
  }


  /**
   * Get the value of the '<code>authKey</code>' attribute.
   */
  const StringPiece get_authKey() const {
    const Json::Value& v = Storage("authKey");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>authKey</code>' attribute.
   *
   * The authkey parameter required for this permission.
   *
   * @param[in] value The new value.
   */
  void set_authKey(const StringPiece& value) {
    *MutableStorage("authKey") = value.data();
  }

  /**
   * Determine if the '<code>domain</code>' attribute was set.
   *
   * @return true if the '<code>domain</code>' attribute was set.
   */
  bool has_domain() const {
    return Storage().isMember("domain");
  }

  /**
   * Clears the '<code>domain</code>' attribute.
   */
  void clear_domain() {
    MutableStorage()->removeMember("domain");
  }


  /**
   * Get the value of the '<code>domain</code>' attribute.
   */
  const StringPiece get_domain() const {
    const Json::Value& v = Storage("domain");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>domain</code>' attribute.
   *
   * The domain name of the entity this permission refers to. This is an output-
   * only field which is populated when the permission type is "user", "group"
   * or "domain".
   *
   * @param[in] value The new value.
   */
  void set_domain(const StringPiece& value) {
    *MutableStorage("domain") = value.data();
  }

  /**
   * Determine if the '<code>emailAddress</code>' attribute was set.
   *
   * @return true if the '<code>emailAddress</code>' attribute was set.
   */
  bool has_emailAddress() const {
    return Storage().isMember("emailAddress");
  }

  /**
   * Clears the '<code>emailAddress</code>' attribute.
   */
  void clear_emailAddress() {
    MutableStorage()->removeMember("emailAddress");
  }


  /**
   * Get the value of the '<code>emailAddress</code>' attribute.
   */
  const StringPiece get_emailAddress() const {
    const Json::Value& v = Storage("emailAddress");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>emailAddress</code>' attribute.
   *
   * The email address of the user this permission refers to. This is an output-
   * only field which is populated when the permission type is "user" and the
   * given user's Google+ profile privacy settings allow exposing their email
   * address.
   *
   * @param[in] value The new value.
   */
  void set_emailAddress(const StringPiece& value) {
    *MutableStorage("emailAddress") = value.data();
  }

  /**
   * Determine if the '<code>etag</code>' attribute was set.
   *
   * @return true if the '<code>etag</code>' attribute was set.
   */
  bool has_etag() const {
    return Storage().isMember("etag");
  }

  /**
   * Clears the '<code>etag</code>' attribute.
   */
  void clear_etag() {
    MutableStorage()->removeMember("etag");
  }


  /**
   * Get the value of the '<code>etag</code>' attribute.
   */
  const StringPiece get_etag() const {
    const Json::Value& v = Storage("etag");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>etag</code>' attribute.
   *
   * The ETag of the permission.
   *
   * @param[in] value The new value.
   */
  void set_etag(const StringPiece& value) {
    *MutableStorage("etag") = value.data();
  }

  /**
   * Determine if the '<code>id</code>' attribute was set.
   *
   * @return true if the '<code>id</code>' attribute was set.
   */
  bool has_id() const {
    return Storage().isMember("id");
  }

  /**
   * Clears the '<code>id</code>' attribute.
   */
  void clear_id() {
    MutableStorage()->removeMember("id");
  }


  /**
   * Get the value of the '<code>id</code>' attribute.
   */
  const StringPiece get_id() const {
    const Json::Value& v = Storage("id");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>id</code>' attribute.
   *
   * The ID of the permission.
   *
   * @param[in] value The new value.
   */
  void set_id(const StringPiece& value) {
    *MutableStorage("id") = value.data();
  }

  /**
   * Determine if the '<code>kind</code>' attribute was set.
   *
   * @return true if the '<code>kind</code>' attribute was set.
   */
  bool has_kind() const {
    return Storage().isMember("kind");
  }

  /**
   * Clears the '<code>kind</code>' attribute.
   */
  void clear_kind() {
    MutableStorage()->removeMember("kind");
  }


  /**
   * Get the value of the '<code>kind</code>' attribute.
   */
  const StringPiece get_kind() const {
    const Json::Value& v = Storage("kind");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>kind</code>' attribute.
   *
   * This is always drive#permission.
   *
   * @param[in] value The new value.
   */
  void set_kind(const StringPiece& value) {
    *MutableStorage("kind") = value.data();
  }

  /**
   * Determine if the '<code>name</code>' attribute was set.
   *
   * @return true if the '<code>name</code>' attribute was set.
   */
  bool has_name() const {
    return Storage().isMember("name");
  }

  /**
   * Clears the '<code>name</code>' attribute.
   */
  void clear_name() {
    MutableStorage()->removeMember("name");
  }


  /**
   * Get the value of the '<code>name</code>' attribute.
   */
  const StringPiece get_name() const {
    const Json::Value& v = Storage("name");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>name</code>' attribute.
   *
   * The name for this permission.
   *
   * @param[in] value The new value.
   */
  void set_name(const StringPiece& value) {
    *MutableStorage("name") = value.data();
  }

  /**
   * Determine if the '<code>photoLink</code>' attribute was set.
   *
   * @return true if the '<code>photoLink</code>' attribute was set.
   */
  bool has_photoLink() const {
    return Storage().isMember("photoLink");
  }

  /**
   * Clears the '<code>photoLink</code>' attribute.
   */
  void clear_photoLink() {
    MutableStorage()->removeMember("photoLink");
  }


  /**
   * Get the value of the '<code>photoLink</code>' attribute.
   */
  const StringPiece get_photoLink() const {
    const Json::Value& v = Storage("photoLink");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>photoLink</code>' attribute.
   *
   * A link to the profile photo, if available.
   *
   * @param[in] value The new value.
   */
  void set_photoLink(const StringPiece& value) {
    *MutableStorage("photoLink") = value.data();
  }

  /**
   * Determine if the '<code>role</code>' attribute was set.
   *
   * @return true if the '<code>role</code>' attribute was set.
   */
  bool has_role() const {
    return Storage().isMember("role");
  }

  /**
   * Clears the '<code>role</code>' attribute.
   */
  void clear_role() {
    MutableStorage()->removeMember("role");
  }


  /**
   * Get the value of the '<code>role</code>' attribute.
   */
  const StringPiece get_role() const {
    const Json::Value& v = Storage("role");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>role</code>' attribute.
   *
   * The primary role for this user. Allowed values are:
   * - owner
   * - reader
   * - writer.
   *
   * @param[in] value The new value.
   */
  void set_role(const StringPiece& value) {
    *MutableStorage("role") = value.data();
  }

  /**
   * Determine if the '<code>selfLink</code>' attribute was set.
   *
   * @return true if the '<code>selfLink</code>' attribute was set.
   */
  bool has_selfLink() const {
    return Storage().isMember("selfLink");
  }

  /**
   * Clears the '<code>selfLink</code>' attribute.
   */
  void clear_selfLink() {
    MutableStorage()->removeMember("selfLink");
  }


  /**
   * Get the value of the '<code>selfLink</code>' attribute.
   */
  const StringPiece get_selfLink() const {
    const Json::Value& v = Storage("selfLink");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>selfLink</code>' attribute.
   *
   * A link back to this permission.
   *
   * @param[in] value The new value.
   */
  void set_selfLink(const StringPiece& value) {
    *MutableStorage("selfLink") = value.data();
  }

  /**
   * Determine if the '<code>type</code>' attribute was set.
   *
   * @return true if the '<code>type</code>' attribute was set.
   */
  bool has_type() const {
    return Storage().isMember("type");
  }

  /**
   * Clears the '<code>type</code>' attribute.
   */
  void clear_type() {
    MutableStorage()->removeMember("type");
  }


  /**
   * Get the value of the '<code>type</code>' attribute.
   */
  const StringPiece get_type() const {
    const Json::Value& v = Storage("type");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>type</code>' attribute.
   *
   * The account type. Allowed values are:
   * - user
   * - group
   * - domain
   * - anyone.
   *
   * @param[in] value The new value.
   */
  void set_type(const StringPiece& value) {
    *MutableStorage("type") = value.data();
  }

  /**
   * Determine if the '<code>value</code>' attribute was set.
   *
   * @return true if the '<code>value</code>' attribute was set.
   */
  bool has_value() const {
    return Storage().isMember("value");
  }

  /**
   * Clears the '<code>value</code>' attribute.
   */
  void clear_value() {
    MutableStorage()->removeMember("value");
  }


  /**
   * Get the value of the '<code>value</code>' attribute.
   */
  const StringPiece get_value() const {
    const Json::Value& v = Storage("value");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>value</code>' attribute.
   *
   * The email address or domain name for the entity. This is used during
   * inserts and is not populated in responses.
   *
   * @param[in] value The new value.
   */
  void set_value(const StringPiece& value) {
    *MutableStorage("value") = value.data();
  }

  /**
   * Determine if the '<code>withLink</code>' attribute was set.
   *
   * @return true if the '<code>withLink</code>' attribute was set.
   */
  bool has_withLink() const {
    return Storage().isMember("withLink");
  }

  /**
   * Clears the '<code>withLink</code>' attribute.
   */
  void clear_withLink() {
    MutableStorage()->removeMember("withLink");
  }


  /**
   * Get the value of the '<code>withLink</code>' attribute.
   */
  bool get_withLink() const {
    const Json::Value& storage = Storage("withLink");
    return client::JsonValueToCppValueHelper<bool>(storage);
  }

  /**
   * Change the '<code>withLink</code>' attribute.
   *
   * Whether the link is required for this permission.
   *
   * @param[in] value The new value.
   */
  void set_withLink(bool value) {
    client::SetJsonValueFromCppValueHelper<bool>(
      value, MutableStorage("withLink"));
  }

 private:
  void operator=(const Permission&);
};  // Permission
}  // namespace google_drive_api
#endif  // GOOGLE_DRIVE_API_PERMISSION_H_
