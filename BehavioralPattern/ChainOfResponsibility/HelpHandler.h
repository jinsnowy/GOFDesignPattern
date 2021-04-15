#pragma once

typedef int Topic;
const Topic NO_HELP_TOPIC = -1;

// 책임 처리자
class HelpHandler
{
public:
	HelpHandler(HelpHandler* = nullptr, Topic = NO_HELP_TOPIC);
	virtual bool HasHelp();
	virtual void SetHandler(HelpHandler* helper, Topic topic);
	virtual void HandleHelp();
private:
	HelpHandler* _successor; // 다음 책임자
	Topic _topic; // 현재 책임자가 처리하는 토픽
};