#pragma once
#include "TCPState.h"
#include "TCPListen.h"
class TCPClosed : public TCPState
{
public:
	static TCPClosed* Instance();

	virtual void ActiveOpen(TCPConnection*);
	virtual void PassiveOpen(TCPConnection*);
	// ...
private:
	TCPClosed();
	static TCPClosed* _instance;
};