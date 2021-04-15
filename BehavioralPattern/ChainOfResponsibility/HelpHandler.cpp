#include "HelpHandler.h"

HelpHandler::HelpHandler(HelpHandler* helper, Topic topic)
	: _successor(helper), _topic(topic)
{
}

bool HelpHandler::HasHelp()
{
	// ó���ϴ� ���� �ֽ��ϴ�.
	return _topic != NO_HELP_TOPIC;
}

void HelpHandler::SetHandler(HelpHandler* helper, Topic topic)
{
	// �̹� ���� å���ڰ� �ֽ��ϴ�.
	if (_successor)
	{
		return;
	}
	_successor = helper;
	_topic = topic;
}

void HelpHandler::HandleHelp()
{
	// å���ڰ� �� ���� ó���մϴ�.
	if (_successor != nullptr)
	{
		_successor->HandleHelp();
	}
}