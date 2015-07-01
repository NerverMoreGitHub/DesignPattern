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
		std::cout<<"男人"<<"成功时，后面一定有个伟大的女人"<<std::endl;
	}
	void GetWoManConclusion(Woman * eleA)
	{
		std::cout<<"女人"<<"成功时，后面一定有个没用的男人"<<std::endl;
	}

};


#endif