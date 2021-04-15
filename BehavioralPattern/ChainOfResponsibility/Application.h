#pragma once
#include "HelpHandler.h"
class Application : public HelpHandler
{
public:
	Application(Topic topic);
	virtual void HandleHelp();
	virtual void Add(class Document* doc);
};