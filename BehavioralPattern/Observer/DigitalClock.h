#pragma once
#include "Widget.h"
#include "Observer.h"
#include "ClockTimer.h"

// 다중 상속을 통한 다중 기능 구현
class DigitalClock : public Widget, public Observer
{
public:
	DigitalClock(ClockTimer*);
	virtual ~DigitalClock();

	// 감시자 연산 오버라이드
	virtual void Update(Subject*);
	// 위젯 연산 오버라이드
	virtual void Draw();
private:
	ClockTimer* _subject;
};