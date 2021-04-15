#include "Button.h"

Button::Button(Widget* parent, Topic topic) 
	: Widget(parent, topic)
{
}

// Button에 대한 요청 처리
void Button::HandleHelp()
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