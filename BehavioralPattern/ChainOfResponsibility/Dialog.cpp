#include "Dialog.h"

Dialog::Dialog(HelpHandler* helper, Topic topic) 
	: Widget(nullptr)
{
	SetHandler(helper, topic);
}

void Dialog::HandleHelp()
{
	// 자신의 요청인지 확인
	if (HasHelp()) {
		// 여기서 할 일이 있다면 수행합니다.
	}
	else {
		// 부모 클래스가 처리합니다.
		HelpHandler::HandleHelp();
	}
}