#include "Button.h"

Button::Button(Widget* parent, Topic topic) 
	: Widget(parent, topic)
{
}

// Button�� ���� ��û ó��
void Button::HandleHelp()
{
	// �ڽ��� ��û���� Ȯ��
	if (HasHelp()) {
		// ���⼭ �� ���� �ִٸ� �����մϴ�.
	}
	else {
		// �θ� Ŭ������ ó���մϴ�.
		HelpHandler::HandleHelp();
	}
}