#pragma once
#include "Widget.h"
#include "Observer.h"
#include "ClockTimer.h"

class AnalogClock : public Widget, public Observer
{
public:
	AnalogClock(ClockTimer*);
	virtual void Update(Subject*);
	virtual void Draw();
	// ...
private:
	ClockTimer* _subject;
};