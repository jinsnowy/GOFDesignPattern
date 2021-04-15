#include "TCPClosed.h"

TCPClosed* TCPClosed::_instance = nullptr;

TCPClosed* TCPClosed::Instance()
{
	if (_instance == nullptr)
		_instance = new TCPClosed;

	return _instance;
}

void TCPClosed::ActiveOpen(TCPConnection* connect)
{
	// send SYN, receive SYNACK
	ChangeState(connect, TCPEstablished::Instance());
}

void TCPClosed::PassiveOpen(TCPConnection* connect)
{
	// socket listens to connect
	ChangeState(connect, TCPListen::Instance());
}