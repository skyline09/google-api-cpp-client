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
//   on: 2013-08-13, 01:30:06 UTC
//   C++ generator version:

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google APIs Discovery Service.
// Service:
//   Calendar API (calendar/v3)
// Description:
//   Lets you manipulate events and other calendar data.
// Classes:
//   Event
// Documentation:
//   https://developers.google.com/google-apps/calendar/firstapp

#include "google/calendar_api/event.h"
#include <string>
#include "googleapis/base/integral_types.h"
#include "googleapis/client/data/jsoncpp_data.h"
#include "googleapis/client/util/date_time.h"
#include "googleapis/strings/stringpiece.h"

#include "google/calendar_api/event_attendee.h"
#include "google/calendar_api/event_date_time.h"
#include "google/calendar_api/event_reminder.h"


#include <string>
#include "googleapis/strings/strcat.h"

namespace google_calendar_api {
using namespace googleapis;



// Object factory method (static).
google_calendar_api::Event::EventCreator* google_calendar_api::Event::EventCreator::New() {
  return new client::JsonCppCapsule<EventCreator>;
}

// Standard immutable constructor.
google_calendar_api::Event::EventCreator::EventCreator(const Json::Value& storage)
  : client::JsonCppData(storage) {
}

// Standard mutable constructor.
google_calendar_api::Event::EventCreator::EventCreator(Json::Value* storage)
  : client::JsonCppData(storage) {
}

// Standard destructor.
google_calendar_api::Event::EventCreator::~EventCreator() {
}

// Object factory method (static).
google_calendar_api::Event::EventExtendedProperties* google_calendar_api::Event::EventExtendedProperties::New() {
  return new client::JsonCppCapsule<EventExtendedProperties>;
}

// Standard immutable constructor.
google_calendar_api::Event::EventExtendedProperties::EventExtendedProperties(const Json::Value& storage)
  : client::JsonCppData(storage) {
}

// Standard mutable constructor.
google_calendar_api::Event::EventExtendedProperties::EventExtendedProperties(Json::Value* storage)
  : client::JsonCppData(storage) {
}

// Standard destructor.
google_calendar_api::Event::EventExtendedProperties::~EventExtendedProperties() {
}

// Object factory method (static).
google_calendar_api::Event::EventGadget* google_calendar_api::Event::EventGadget::New() {
  return new client::JsonCppCapsule<EventGadget>;
}

// Standard immutable constructor.
google_calendar_api::Event::EventGadget::EventGadget(const Json::Value& storage)
  : client::JsonCppData(storage) {
}

// Standard mutable constructor.
google_calendar_api::Event::EventGadget::EventGadget(Json::Value* storage)
  : client::JsonCppData(storage) {
}

// Standard destructor.
google_calendar_api::Event::EventGadget::~EventGadget() {
}

// Object factory method (static).
google_calendar_api::Event::EventOrganizer* google_calendar_api::Event::EventOrganizer::New() {
  return new client::JsonCppCapsule<EventOrganizer>;
}

// Standard immutable constructor.
google_calendar_api::Event::EventOrganizer::EventOrganizer(const Json::Value& storage)
  : client::JsonCppData(storage) {
}

// Standard mutable constructor.
google_calendar_api::Event::EventOrganizer::EventOrganizer(Json::Value* storage)
  : client::JsonCppData(storage) {
}

// Standard destructor.
google_calendar_api::Event::EventOrganizer::~EventOrganizer() {
}

// Object factory method (static).
google_calendar_api::Event::EventReminders* google_calendar_api::Event::EventReminders::New() {
  return new client::JsonCppCapsule<EventReminders>;
}

// Standard immutable constructor.
google_calendar_api::Event::EventReminders::EventReminders(const Json::Value& storage)
  : client::JsonCppData(storage) {
}

// Standard mutable constructor.
google_calendar_api::Event::EventReminders::EventReminders(Json::Value* storage)
  : client::JsonCppData(storage) {
}

// Standard destructor.
google_calendar_api::Event::EventReminders::~EventReminders() {
}

// Object factory method (static).
google_calendar_api::Event::EventSource* google_calendar_api::Event::EventSource::New() {
  return new client::JsonCppCapsule<EventSource>;
}

// Standard immutable constructor.
google_calendar_api::Event::EventSource::EventSource(const Json::Value& storage)
  : client::JsonCppData(storage) {
}

// Standard mutable constructor.
google_calendar_api::Event::EventSource::EventSource(Json::Value* storage)
  : client::JsonCppData(storage) {
}

// Standard destructor.
google_calendar_api::Event::EventSource::~EventSource() {
}
// Object factory method (static).
google_calendar_api::Event* google_calendar_api::Event::New() {
  return new client::JsonCppCapsule<Event>;
}

// Standard immutable constructor.
google_calendar_api::Event::Event(const Json::Value& storage)
  : client::JsonCppData(storage) {
}

// Standard mutable constructor.
google_calendar_api::Event::Event(Json::Value* storage)
  : client::JsonCppData(storage) {
}

// Standard destructor.
google_calendar_api::Event::~Event() {
}
}  // namespace google_calendar_api
