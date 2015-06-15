// SubObject.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include "Observer.h"
int _tmain(int argc, _TCHAR* argv[])
{
	ClockTimer *timer = new ClockTimer;
	DigitalClock * digitalaClock = new DigitalClock(timer);
	AnalogClock * analogclock = new AnalogClock(timer);
	//delete digitalaClock;
	timer->Tick();


	return 0;
}

