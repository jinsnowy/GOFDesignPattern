#pragma once
#include "TCPState.h"
#include "TCPEstablished.h"
class TCPListen : public TCPState
{
public:
	static TCPState* Instance();
	virtual void Send(TCPConnection*);
	// ...
private:
	TCPListen();
	static TCPState* _instance;
};