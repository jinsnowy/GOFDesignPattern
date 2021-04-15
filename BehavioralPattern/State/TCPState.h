#pragma once
#include "TCPConnection.h"
class TCPState
{
public:
	// 기본 구현은 없음 (상태마다 제공하는 연산이 다름)
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