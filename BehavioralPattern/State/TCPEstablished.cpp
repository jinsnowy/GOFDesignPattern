#include "TCPEstablished.h"
#include "TCPListen.h"

TCPEstablished* TCPEstablished::_instance = nullptr;

TCPState* TCPEstablished::Instance()
{
	// ½Ì±ÛÅæ ÆÐÅÏ
	if (_instance == nullptr)
		_instance = new TCPEstablished;

	return _instance;
}

void TCPEstablished::Transmit(TCPConnection* connect, TCPOctetStream* stream)
{
	connect->ProcessOctet(stream);
}

void TCPEstablished::Close(TCPConnection* connect)
{
	// ¿¬°á Á¾·á
	// send FIN, receive ACK of FIN
	ChangeState(connect, TCPListen::Instance());
}