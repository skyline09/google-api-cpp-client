/*
 * \copyright Copyright 2013 Google Inc. All Rights Reserved.
 * \license @{
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * @}
 */

// Author: ewiseblatt@google.com (Eric Wiseblatt)

#ifndef APISERVING_CLIENTS_CPP_UTIL_URI_TEMPLATE_H_
#define APISERVING_CLIENTS_CPP_UTIL_URI_TEMPLATE_H_
#include <set>
using std::multiset;
using std::set;
#include <string>
using std::string;
#include "googleapis/base/callback.h"
#include "googleapis/strings/stringpiece.h"
#include "googleapis/util/status.h"
namespace googleapis {

namespace client {

struct UriTemplateConfig;

/*
 * Provides the ability to produce concrete URLs from templated ones.
 * @ingroup PlatformLayerUri
 *
 * The UriTemplate class produces concrete URLs required to make HTTP
 * invocations from the templated URIs following the
 * <a href='http://tools.ietf.org/html/rfc6570'>RFC 6570 URI Template</a>
 * standard commonly used by REST services on the Google Cloud Platform.
 *
 * This class is a collection of static methods that build up the URL
 * from a URI template by calling an AppendVariableCallback to resolve
 * the templated variables that it encounters.
 *
 * The callback is always a repeatable one created with NewPermanentCallback.
 *
 * @see NewPermanentCallback
 * @see Expand
 */
class UriTemplate {
 public:
  /*
   * Serves as a helper function for supplying variable values.
   *
   * This callback should call the appropriate Append* methods with the
   * value and target string. If the value is a map or list then also pass the
   * opaque  UriTemplateConfig parameter.
   *
   * If the variable is a list of map then the callback should use the
   * Append*First method to add the first element (if any) then call
   * Append*Next for each of the remaining elements (if any).
   *
   * @param[in] StringPiece The name of the variable to append.
   * @param[in] UriTemplateConfig Opaque pass through argument.
   * @param[in,out] The target string to append to
   * @return success if the variabel coudl be resolved, or failure if not.
   */
  typedef ResultCallback3< util::Status,
                          const StringPiece&,
                          const UriTemplateConfig&,
                          string*>
  AppendVariableCallback;

  /*
   * Expand variables without collecting their names.
   *
   * @param[in] uri The templated uri to expand.
   * @param[in] supplier The callback that supplies variable values.
   * @param[out] target The string to resolve the templated uri into.
   *
   * @return success if all the variables found could be resolved.
   *         failure if some unresovled variables still remain in the
   *         target string.
   */
  static util::Status Expand(
      const StringPiece& uri,
      AppendVariableCallback* supplier,
      string* target) {
    return Expand(uri, supplier, target, NULL);
  }

  /*
   * Expand variables.
   *
   * @param[in] uri The templated uri to expand.
   * @param[in] supplier The callback that supplies variable values.
   * @param[out] target The string to resolve the templated uri into.
   * @param[out] found_parameters Populated with the list of parameter names
   *             that were resolved while expanding the uri. NULL is permitted
   *             if the caller does not wish to collect these.
   *
   * @return success if all the variables found could be resolved.
   *         failure if some unresovled variables still remain in the
   *         target string.
   */
  static util::Status Expand(
      const StringPiece& uri,
      AppendVariableCallback* supplier,
      string* target,
      set<StringPiece>* found_parameters);

  /*
   * Appends the first value of a list.
   *
   * This method is intended to support AppendVariableCallback.
   *
   * @param[in] value The first value.
   * @param[in] config The opaque passthrough parameter from the
   *            AppendVariableCallback.
   * @param[in,out] target The string to append the value to.
   */
  static void AppendListFirst(
      const StringPiece& value,
      const UriTemplateConfig& config,
      string* target);

  /*
   * Appends the value of a list, other than the first.
   *
   * This method is intended to support AppendVariableCallback.
   *
   * @param[in] value The element value to append.
   * @param[in] config The opaque passthrough parameter from the
   *            AppendVariableCallback.
   * @param[in,out] target The string to append the value to.
   */
  static void AppendListNext(
      const StringPiece& value,
      const UriTemplateConfig& config,
      string* target);

  /*
   * Appends the first key,value pair of a map.
   *
   * This method is intended to support AppendVariableCallback.
   *
   * @param[in] key The first key.
   * @param[in] value The value of the first key.
   * @param[in] config The opaque passthrough parameter from the
   *            AppendVariableCallback.
   * @param[in,out] target The string to append the value to.
   */
  static void AppendMapFirst(
      const StringPiece& key,
      const StringPiece& value,
      const UriTemplateConfig& config,
      string* target);

  /*
   * Appends a key,value pair of a map, other than the first.
   *
   * This method is intended to support AppendVariableCallback.
   *
   * @param[in] key The element's key to append.
   * @param[in] value The value of the key.
   * @param[in] config The opaque passthrough parameter from the
   *            AppendVariableCallback.
   * @param[in,out] target The string to append the value to.
   */
  static void AppendMapNext(
      const StringPiece& key,
      const StringPiece& value,
      const UriTemplateConfig& config,
      string* target);

 private:
  UriTemplate();  // Is never instantiated.
  ~UriTemplate();
};

}  // namespace client

} // namespace googleapis
#endif  // APISERVING_CLIENTS_CPP_UTIL_URI_TEMPLATE_H_
