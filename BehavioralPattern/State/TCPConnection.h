#pragma once
#include "TCPState.h"

class TCPConnection {
public:
	TCPConnection();

	// 상태 인스턴스(TCPState)의 연산을 이용
	void ActiveOpen()		{ _state->ActiveOpen(this); }
	void PassiveOpen()		{ _state->PassiveOpen(this); }
	void Close()			{ _state->Close(this); }
	void Send()				{ _state->Send(this); }
	void Acknowledge()		{ _state->Acknowledge(this); }
	void Synchronize()		{ _state->Synchronize(this); }

	// 소켓 전송을 위한 데이터 처리
	void ProcessOctet(class TCPOctetStream*);
private:
	// TCPState 인스턴스가 자신의 ChangeState를 접근할 수 있게함
	friend class TCPState;
	// 상태 변경
	void ChangeState(TCPState* state) { _state = state; }
private:
	TCPState* _state = nullptr;
};