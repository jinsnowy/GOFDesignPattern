#pragma once
#include "Subject.h"

// 일반 타이머
class ClockTimer : public Subject
{
public:
	ClockTimer();

	virtual int GetHour();
	virtual int GetMinute();
	virtual int GetSecond();

	void Tick();
};