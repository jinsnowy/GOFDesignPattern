#pragma once
#include "Command.h"
#include "../Common/List.h"
#include "../Common//ListIterator.h"

class MacroCommand : public Command
{
public:
	MacroCommand();
	virtual ~MacroCommand();
	virtual void Add(Command*);
	virtual void Remove(Command*);

	virtual void Execute();
private:
	// 모든 순차적 실행 명령
	List<Command*>* _cmds;
};

