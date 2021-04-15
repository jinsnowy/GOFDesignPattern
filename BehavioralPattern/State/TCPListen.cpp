#include "TCPListen.h"

TCPState* TCPListen::_instance = nullptr;

TCPState* TCPListen::Instance()
{
	if (_instance == nullptr)
		_instance = new TCPListen;

	return _instance;
}

void TCPListen::Send(TCPConnection* connect)
{
	// send SYN, receive SYNACK
	ChangeState(connect, TCPEstablished::Instance());
}