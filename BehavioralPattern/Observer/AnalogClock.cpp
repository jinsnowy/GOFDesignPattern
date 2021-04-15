#include "AnalogClock.h"

AnalogClock::AnalogClock(ClockTimer* s)
{
	_subject = s;

	// add observer to my subject 
	_subject->Attach(this);
}

AnalogClock::~AnalogClock()
{
	// delete observer from my subject
	_subject->Detach(this);
}

void AnalogClock::Update(Subject* theChangedSubject)
{
	// check the notficiation is from my subject
	if (theChangedSubject == _subject)
	{
		Draw();
	}
}

void AnalogClock::Draw()
{
	// Obtain new values from my subject
	int hour = _subject->GetHour();
	int minute = _subject->GetMinute();
	int second = _subject->GetSecond();

	// Draw this widget
}