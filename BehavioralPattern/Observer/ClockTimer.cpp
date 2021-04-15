#include "ClockTimer.h"

ClockTimer::ClockTimer()
{
}

int ClockTimer::GetHour()
{
	return 0;
}

int ClockTimer::GetMinute()
{
	return 0;
}

int ClockTimer::GetSecond()
{
	return 0;
}

void ClockTimer::Tick()
{
	// 자신을 관찰하는 모든 관찰자에게 변화를 알려야 한다.
	// 시간 상태를 변경
	Notify();
}
