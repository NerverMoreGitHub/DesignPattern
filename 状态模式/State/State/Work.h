#ifndef WORK_H
#define WORK_H


class Context;

class State
{
public:
	virtual void Handle(Context context) = 0 ;
};

class ConcreteStateA : public State
{
public:
	ConcreteStateA(){}
	~ConcreteStateA(){}
public:
	void Handle(Context context)
	{
		context.setState(new ConcreteStateA());
	}
};

class ConcreteStateB : public State
{
public:
	ConcreteStateB(){}
	~ConcreteStateB(){}
public:
	void Handle(Context context)
	{
		context.setState(new ConcreteStateB());
	}
};


class Context
{
public:
	Context(){}
	~Context(){}
public:
	State * getState()
	{
		return m_state;
	}
	void setState(State * state)
	{
		m_state = state;
	}
	void Request()
	{
		m_state->Handle(*this);
	}
private:
	State * m_state;

};

#endif