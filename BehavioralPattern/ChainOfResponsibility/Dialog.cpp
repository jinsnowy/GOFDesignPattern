#include "Dialog.h"

Dialog::Dialog(HelpHandler* helper, Topic topic) 
	: Widget(nullptr)
{
	SetHandler(helper, topic);
}

void Dialog::HandleHelp()
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