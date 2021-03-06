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

#ifndef LOGINCOMMAND_H_
#define LOGINCOMMAND_H_

#include "commands/ImapSessionCommand.h"
#include "protocol/CapabilityResponseParser.h"

class LoginCommand : public ImapSessionCommand
{
public:
	LoginCommand(ImapSession& session);
	virtual ~LoginCommand();
	
	void RunImpl();
	MojErr LoginResponse();
	
	void Failure(const std::exception& e);

	static const int LOGIN_TIMEOUT;

protected:
	MojRefCountedPtr<CapabilityResponseParser>	m_responseParser;
	
	ImapResponseParser::DoneSignal::Slot<LoginCommand>	m_loginResponseSlot;
};

#endif /*LOGINCOMMAND_H_*/
