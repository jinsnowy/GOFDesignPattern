#include "Application.h"
#include "Document.h"

Application::Application(Topic topic)
	: HelpHandler(nullptr, topic)
{
}

void Application::HandleHelp()
{
	// Application�� ������ �ִ� �⺻ ���� �׸� ����Ʈ�� ǥ��
}

void Application::Add(Document* doc)
{
}
