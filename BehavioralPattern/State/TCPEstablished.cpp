#include "TCPEstablished.h"
#include "TCPListen.h"

TCPEstablished* TCPEstablished::_instance = nullptr;

TCPState* TCPEstablished::Instance()
{
	// �̱��� ����
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
	// ���� ����
	// send FIN, receive ACK of FIN
	ChangeState(connect, TCPListen::Instance());
}