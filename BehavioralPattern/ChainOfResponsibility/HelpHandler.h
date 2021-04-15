#pragma once

typedef int Topic;
const Topic NO_HELP_TOPIC = -1;

// å�� ó����
class HelpHandler
{
public:
	HelpHandler(HelpHandler* = nullptr, Topic = NO_HELP_TOPIC);
	virtual bool HasHelp();
	virtual void SetHandler(HelpHandler* helper, Topic topic);
	virtual void HandleHelp();
private:
	HelpHandler* _successor; // ���� å����
	Topic _topic; // ���� å���ڰ� ó���ϴ� ����
};