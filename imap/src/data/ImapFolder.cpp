// @@@LICENSE
//
//      Copyright (c) 2010-2013 LG Electronics, Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
// LICENSE@@@

#include "data/ImapFolder.h"

// The inbox will always have a server folder name of "INBOX"
const char* const ImapFolder::INBOX_FOLDER_NAME = "INBOX";

const char* const ImapFolder::XLIST_ALLMAIL = "ALLMAIL";
const char* const ImapFolder::XLIST_INBOX = "INBOX";
const char* const ImapFolder::XLIST_DRAFTS = "DRAFTS";
const char* const ImapFolder::XLIST_SPAM = "SPAM";
const char* const ImapFolder::XLIST_SENT = "SENT";
const char* const ImapFolder::XLIST_TRASH = "TRASH";


ImapFolder::ImapFolder()
: m_uidValidity(0), m_uidNext(0), m_selectable(true)
{
}

ImapFolder::~ImapFolder()
{
}
