#ifndef ACTION_H
#define ACTION_H


#include <iostream>
#include <string>


class Action;
class Man
{
public:
	Man(){}
	~Man(){}
public:
	void AccpetAction(Action *visitor){
		visitor->GetManConclusion(this);
	}
};

class Action;
class Woman
{
public:
	Woman(){}
	~Woman(){}
public:
	void AccpetAction(Action *visitor){
		visitor->GetWoManConclusion(this);
	}
};

class Action
{
public:
	Action(){}
	~Action(){}
public:
	virtual void GetManConclusion(Man *eleA) = 0;
	virtual void GetWoManConclusion(Woman * eleA) = 0;

};

class Success : public Action
{
public:
	Success() : Action(){}
	~Success(){}
public:
	void GetManConclusion(Man *eleA)
	{
		std::cout<<"����"<<"�ɹ�ʱ������һ���и�ΰ���Ů��"<<std::endl;
	}
	void GetWoManConclusion(Woman * eleA)
	{
		std::cout<<"Ů��"<<"�ɹ�ʱ������һ���и�û�õ�����"<<std::endl;
	}

};


#endif