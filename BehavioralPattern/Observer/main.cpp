#include "AnalogClock.h"
#include "DigitalClock.h"
#include "ClockTimer.h"

int main()
{
	ClockTimer* timer = new ClockTimer;
	AnalogClock* analogClock = new AnalogClock(timer);
	DigitalClock* digitalClock = new DigitalClock(timer);

	return 0;
}