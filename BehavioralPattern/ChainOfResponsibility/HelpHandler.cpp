#include "HelpHandler.h"

HelpHandler::HelpHandler(HelpHandler* helper, Topic topic)
	: _successor(helper), _topic(topic)
{
}

bool HelpHandler::HasHelp()
{
	// 처리하는 일이 있습니다.
	return _topic != NO_HELP_TOPIC;
}

void HelpHandler::SetHandler(HelpHandler* helper, Topic topic)
{
	// 이미 다음 책임자가 있습니다.
	if (_successor)
	{
		return;
	}
	_successor = helper;
	_topic = topic;
}

void HelpHandler::HandleHelp()
{
	// 책임자가 할 일을 처리합니다.
	if (_successor != nullptr)
	{
		_successor->HandleHelp();
	}
}