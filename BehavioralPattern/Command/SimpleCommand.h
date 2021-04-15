#pragma once
#include "Command.h"
template<class Receiver>
class SimpleCommand : public Command
{
public:
	// Receiver 클래스의 Action 함수 객체를 위한 타입 명명
	typedef void (Receiver::*Action)();
	SimpleCommand(Receiver* receiver, Action action)
		: _receiver(receiver), _action(action)
	{
	}
	virtual void Execute();
private:
	Action _action; // 저장할 명령 콜백 함수
	Receiver _receiver; // 명령 피객체
};

template<class Receiver>
void SimpleCommand<Receiver>::Execute()
{
	(_receiver->*_action)();
}