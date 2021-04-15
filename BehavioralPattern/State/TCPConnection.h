#pragma once
#include "TCPState.h"

class TCPConnection {
public:
	TCPConnection();

	// ���� �ν��Ͻ�(TCPState)�� ������ �̿�
	void ActiveOpen()		{ _state->ActiveOpen(this); }
	void PassiveOpen()		{ _state->PassiveOpen(this); }
	void Close()			{ _state->Close(this); }
	void Send()				{ _state->Send(this); }
	void Acknowledge()		{ _state->Acknowledge(this); }
	void Synchronize()		{ _state->Synchronize(this); }

	// ���� ������ ���� ������ ó��
	void ProcessOctet(class TCPOctetStream*);
private:
	// TCPState �ν��Ͻ��� �ڽ��� ChangeState�� ������ �� �ְ���
	friend class TCPState;
	// ���� ����
	void ChangeState(TCPState* state) { _state = state; }
private:
	TCPState* _state = nullptr;
};