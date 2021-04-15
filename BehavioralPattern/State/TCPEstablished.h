#pragma once
#include "TCPState.h"

class TCPEstablished : public TCPState
{
public:
	static TCPState* Instance();

	virtual void Transmit(TCPConnection*, TCPOctetStream*);
	virtual void Close(TCPConnection*);
private:
	TCPEstablished();
	static TCPEstablished* _instance;
};