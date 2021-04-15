#pragma once
#include "Command.h"
template<class Receiver>
class SimpleCommand : public Command
{
public:
	// Receiver Ŭ������ Action �Լ� ��ü�� ���� Ÿ�� ���
	typedef void (Receiver::*Action)();
	SimpleCommand(Receiver* receiver, Action action)
		: _receiver(receiver), _action(action)
	{
	}
	virtual void Execute();
private:
	Action _action; // ������ ��� �ݹ� �Լ�
	Receiver _receiver; // ��� �ǰ�ü
};

template<class Receiver>
void SimpleCommand<Receiver>::Execute()
{
	(_receiver->*_action)();
}