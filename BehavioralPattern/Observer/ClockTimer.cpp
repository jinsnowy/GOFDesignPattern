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
	// �ڽ��� �����ϴ� ��� �����ڿ��� ��ȭ�� �˷��� �Ѵ�.
	// �ð� ���¸� ����
	Notify();
}
