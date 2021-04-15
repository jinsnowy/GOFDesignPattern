#pragma once
#include "Command.h"

class Application;
class OpenCommand : public Command
{
public:
	OpenCommand(Application* app);
	virtual void Execute();
protected:
	virtual const char* AskUser();
private:
	Application* _application;
	char* _response;
};