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

// This code was generated by google-apis-code-generator 1.5.0
//   Build date: 2015-01-14 17:53:03 UTC
//   on: 2015-03-12, 20:35:33 UTC
//   C++ generator version:

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google APIs Discovery Service.
// Service:
//   YouTube Data API (youtube/v3)
// Generated from:
//   Version: v3
//   Revision: 130
// Generated by:
//    Tool: google-apis-code-generator 1.5.0
//     C++: 0.1.2
#ifndef  GOOGLE_YOUTUBE_API_SEARCH_RESULT_SNIPPET_H_
#define  GOOGLE_YOUTUBE_API_SEARCH_RESULT_SNIPPET_H_

#include <string>
#include "googleapis/base/macros.h"
#include "googleapis/client/data/jsoncpp_data.h"
#include "googleapis/client/util/date_time.h"
#include "googleapis/strings/stringpiece.h"

#include "google/youtube_api/thumbnail_details.h"

namespace Json {
class Value;
}  // namespace Json

namespace google_youtube_api {
using namespace googleapis;

/**
 * Basic details about a search result, including title, description and
 * thumbnails of the item referenced by the search result.
 *
 * @ingroup DataObject
 */
class SearchResultSnippet : public client::JsonCppData {
 public:

  /**
   * Creates a new default instance.
   *
   * @return Ownership is passed back to the caller.
   */
  static SearchResultSnippet* New();

  /**
   * Standard constructor for an immutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit SearchResultSnippet(const Json::Value& storage);

  /**
   * Standard constructor for a mutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit SearchResultSnippet(Json::Value* storage);

  /**
   * Standard destructor.
   */
  virtual ~SearchResultSnippet();

  /**
   * Returns a string denoting the type of this data object.
   *
   * @return <code>google_youtube_api::SearchResultSnippet</code>
   */
  const StringPiece GetTypeName() const {
    return StringPiece("google_youtube_api::SearchResultSnippet");
  }

  /**
   * Determine if the '<code>channelId</code>' attribute was set.
   *
   * @return true if the '<code>channelId</code>' attribute was set.
   */
  bool has_channel_id() const {
    return Storage().isMember("channelId");
  }

  /**
   * Clears the '<code>channelId</code>' attribute.
   */
  void clear_channel_id() {
    MutableStorage()->removeMember("channelId");
  }


  /**
   * Get the value of the '<code>channelId</code>' attribute.
   */
  const StringPiece get_channel_id() const {
    const Json::Value& v = Storage("channelId");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>channelId</code>' attribute.
   *
   * The value that YouTube uses to uniquely identify the channel that published
   * the resource that the search result identifies.
   *
   * @param[in] value The new value.
   */
  void set_channel_id(const StringPiece& value) {
    *MutableStorage("channelId") = value.data();
  }

  /**
   * Determine if the '<code>channelTitle</code>' attribute was set.
   *
   * @return true if the '<code>channelTitle</code>' attribute was set.
   */
  bool has_channel_title() const {
    return Storage().isMember("channelTitle");
  }

  /**
   * Clears the '<code>channelTitle</code>' attribute.
   */
  void clear_channel_title() {
    MutableStorage()->removeMember("channelTitle");
  }


  /**
   * Get the value of the '<code>channelTitle</code>' attribute.
   */
  const StringPiece get_channel_title() const {
    const Json::Value& v = Storage("channelTitle");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>channelTitle</code>' attribute.
   *
   * The title of the channel that published the resource that the search result
   * identifies.
   *
   * @param[in] value The new value.
   */
  void set_channel_title(const StringPiece& value) {
    *MutableStorage("channelTitle") = value.data();
  }

  /**
   * Determine if the '<code>description</code>' attribute was set.
   *
   * @return true if the '<code>description</code>' attribute was set.
   */
  bool has_description() const {
    return Storage().isMember("description");
  }

  /**
   * Clears the '<code>description</code>' attribute.
   */
  void clear_description() {
    MutableStorage()->removeMember("description");
  }


  /**
   * Get the value of the '<code>description</code>' attribute.
   */
  const StringPiece get_description() const {
    const Json::Value& v = Storage("description");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>description</code>' attribute.
   *
   * A description of the search result.
   *
   * @param[in] value The new value.
   */
  void set_description(const StringPiece& value) {
    *MutableStorage("description") = value.data();
  }

  /**
   * Determine if the '<code>liveBroadcastContent</code>' attribute was set.
   *
   * @return true if the '<code>liveBroadcastContent</code>' attribute was set.
   */
  bool has_live_broadcast_content() const {
    return Storage().isMember("liveBroadcastContent");
  }

  /**
   * Clears the '<code>liveBroadcastContent</code>' attribute.
   */
  void clear_live_broadcast_content() {
    MutableStorage()->removeMember("liveBroadcastContent");
  }


  /**
   * Get the value of the '<code>liveBroadcastContent</code>' attribute.
   */
  const StringPiece get_live_broadcast_content() const {
    const Json::Value& v = Storage("liveBroadcastContent");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>liveBroadcastContent</code>' attribute.
   *
   * It indicates if the resource (video or channel) has upcoming/active live
   * broadcast content. Or it's "none" if there is not any upcoming/active live
   * broadcasts.
   *
   * @param[in] value The new value.
   */
  void set_live_broadcast_content(const StringPiece& value) {
    *MutableStorage("liveBroadcastContent") = value.data();
  }

  /**
   * Determine if the '<code>publishedAt</code>' attribute was set.
   *
   * @return true if the '<code>publishedAt</code>' attribute was set.
   */
  bool has_published_at() const {
    return Storage().isMember("publishedAt");
  }

  /**
   * Clears the '<code>publishedAt</code>' attribute.
   */
  void clear_published_at() {
    MutableStorage()->removeMember("publishedAt");
  }


  /**
   * Get the value of the '<code>publishedAt</code>' attribute.
   */
  client::DateTime get_published_at() const {
    const Json::Value& storage = Storage("publishedAt");
    return client::JsonValueToCppValueHelper<client::DateTime >(storage);
  }

  /**
   * Change the '<code>publishedAt</code>' attribute.
   *
   * The creation date and time of the resource that the search result
   * identifies. The value is specified in ISO 8601 (YYYY-MM-DDThh:mm:ss.sZ)
   * format.
   *
   * @param[in] value The new value.
   */
  void set_published_at(client::DateTime value) {
    client::SetJsonValueFromCppValueHelper<client::DateTime >(
      value, MutableStorage("publishedAt"));
  }

  /**
   * Determine if the '<code>thumbnails</code>' attribute was set.
   *
   * @return true if the '<code>thumbnails</code>' attribute was set.
   */
  bool has_thumbnails() const {
    return Storage().isMember("thumbnails");
  }

  /**
   * Clears the '<code>thumbnails</code>' attribute.
   */
  void clear_thumbnails() {
    MutableStorage()->removeMember("thumbnails");
  }


  /**
   * Get a reference to the value of the '<code>thumbnails</code>' attribute.
   */
  const ThumbnailDetails get_thumbnails() const {
     const Json::Value& storage = Storage("thumbnails");
    return client::JsonValueToCppValueHelper<ThumbnailDetails >(storage);
  }

  /**
   * Gets a reference to a mutable value of the '<code>thumbnails</code>'
   * property.
   *
   * A map of thumbnail images associated with the search result. For each
   * object in the map, the key is the name of the thumbnail image, and the
   * value is an object that contains other information about the thumbnail.
   *
   * @return The result can be modified to change the attribute value.
   */
  ThumbnailDetails mutable_thumbnails() {
    Json::Value* storage = MutableStorage("thumbnails");
    return client::JsonValueToMutableCppValueHelper<ThumbnailDetails >(storage);
  }

  /**
   * Determine if the '<code>title</code>' attribute was set.
   *
   * @return true if the '<code>title</code>' attribute was set.
   */
  bool has_title() const {
    return Storage().isMember("title");
  }

  /**
   * Clears the '<code>title</code>' attribute.
   */
  void clear_title() {
    MutableStorage()->removeMember("title");
  }


  /**
   * Get the value of the '<code>title</code>' attribute.
   */
  const StringPiece get_title() const {
    const Json::Value& v = Storage("title");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>title</code>' attribute.
   *
   * The title of the search result.
   *
   * @param[in] value The new value.
   */
  void set_title(const StringPiece& value) {
    *MutableStorage("title") = value.data();
  }

 private:
  void operator=(const SearchResultSnippet&);
};  // SearchResultSnippet
}  // namespace google_youtube_api
#endif  // GOOGLE_YOUTUBE_API_SEARCH_RESULT_SNIPPET_H_
