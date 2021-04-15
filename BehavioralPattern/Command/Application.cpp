#include "Application.h"
#include "Document.h"

Application::Application()
{
}

void Application::Add(Document* doc)
{
	documents.Append(doc);
}