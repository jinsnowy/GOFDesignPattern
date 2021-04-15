#pragma once
#include "Widget.h"
#include "Observer.h"
#include "ClockTimer.h"

// ���� ����� ���� ���� ��� ����
class DigitalClock : public Widget, public Observer
{
public:
	DigitalClock(ClockTimer*);
	virtual ~DigitalClock();

	// ������ ���� �������̵�
	virtual void Update(Subject*);
	// ���� ���� �������̵�
	virtual void Draw();
private:
	ClockTimer* _subject;
};