#ifndef OBSERVER_H
#define OBSERVER_H

#include <vector>

class SubObject;

//观察者
class Observer 
{
public:
	virtual ~Observer(){};
	virtual void Update(SubObject * thenChangeSubject) = 0;
protected:
	Observer(){};
};

//被观察者
class SubObject
{
public:
	virtual ~SubObject(){};
	virtual void Attach(Observer *);
	virtual void Detech(Observer *);
	virtual void Notify();
protected:
	SubObject(){};
private:
	std::vector<Observer *> observer;
};

class ClockTimer : public SubObject
{
public:
	ClockTimer(){};
	virtual int GetHour();
	virtual int GetMinute();
	virtual int GetSencond();

	void Tick();
};

class DigitalClock : public Observer
{
public:
	DigitalClock(ClockTimer *);
	virtual ~DigitalClock();

	virtual void Update(SubObject *);
	virtual void Draw();
private:
	ClockTimer *_subject;
};

class AnalogClock : public Observer
{
public:
	AnalogClock(ClockTimer *);
	virtual ~AnalogClock();

	virtual void Update(SubObject *);
	virtual void Draw();
private:
	ClockTimer *_subject;	
};
#endif