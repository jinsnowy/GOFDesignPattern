#pragma once
#include "Subject.h"

// �Ϲ� Ÿ�̸�
class ClockTimer : public Subject
{
public:
	ClockTimer();

	virtual int GetHour();
	virtual int GetMinute();
	virtual int GetSecond();

	void Tick();
};