#pragma once
#include "TCPConnection.h"
class TCPState
{
public:
	// �⺻ ������ ���� (���¸��� �����ϴ� ������ �ٸ�)
	virtual void Transmit(TCPConnection*, TCPOctetStream*){}
	virtual void ActiveOpen(TCPConnection*){}
	virtual void PassiveOpen(TCPConnection*){}
	virtual void Close(TCPConnection*){}
	virtual void Synchronize(TCPConnection*){}
	virtual void Acknowledge(TCPConnection*){}
	virtual void Send(TCPConnection*){}
protected:
	void ChangeState(TCPConnection* connect, TCPState* state) 
	{ 
		connect->ChangeState(state); 
	}
};