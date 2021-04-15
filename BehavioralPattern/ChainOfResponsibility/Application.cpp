#include "Application.h"
#include "Document.h"

Application::Application(Topic topic)
	: HelpHandler(nullptr, topic)
{
}

void Application::HandleHelp()
{
	// Application이 가지고 있는 기본 도움말 항목 리스트를 표시
}

void Application::Add(Document* doc)
{
}
