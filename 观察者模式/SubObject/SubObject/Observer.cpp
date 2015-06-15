#include "stdafx.h"
#include "Observer.h"
#include <algorithm>
#include <iostream>


void SubObject::Attach(Observer * o)
{
	observer.push_back(o);
}

void SubObject::Detech(Observer * o)
{
	observer.erase(std::find(observer.begin(),observer.end(),o));
}

void SubObject::Notify()
{
	std::vector<Observer*>::iterator i;
	for(i = observer.begin();i != observer.end();i++)
		(*i)->Update(this);
}

void ClockTimer::Tick()
{
	Notify();
}

int ClockTimer::GetHour()
{
	return 0;
}
int ClockTimer::GetMinute()
{
	return 0;
}
int ClockTimer::GetSencond()
{
	return 0;
}

DigitalClock::DigitalClock(ClockTimer * Timer)
{
	_subject = Timer;
	_subject->Attach(this);
}

DigitalClock::~DigitalClock()
{
	_subject->Detech(this);
}

void DigitalClock::Update(SubObject * theChangedSubject)
{
	if(_subject == theChangedSubject)
		Draw();
}

void DigitalClock::Draw()
{
	int nHour = _subject->GetHour();
	int nMinute = _subject->GetMinute();
	int nSecond = _subject->GetSencond();
	std::cout<<"数码时钟现在时间:"<<nHour<<":"<<nMinute<<":"<<nSecond<<std::endl;
}

AnalogClock::AnalogClock(ClockTimer * Timer)
{
	_subject = Timer;
	_subject->Attach(this);
}

AnalogClock::~AnalogClock()
{
	_subject->Detech(this);
}

void AnalogClock::Update(SubObject * theChangedSubject)
{
	if(_subject == theChangedSubject)
		Draw();
}

void AnalogClock::Draw()
{
	int nHour = _subject->GetHour();
	int nMinute = _subject->GetMinute();
	int nSecond = _subject->GetSencond();
	std::cout<<"模拟时钟现在时间:"<<nHour<<":"<<nMinute<<":"<<nSecond<<std::endl;
}