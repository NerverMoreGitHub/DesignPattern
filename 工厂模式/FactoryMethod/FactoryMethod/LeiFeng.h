#ifndef LEIFENG_H
#define LEIFENG_H

#include <iostream>

class LeiFeng
{
public:
	LeiFeng(){}
	~LeiFeng(){}
public:
	void Wash(){std::cout<<"ϴ�·�"<<std::endl;}
	void Swap(){std::cout<<"��ɨ��"<<std::endl;}
	void BuyRice(){std::cout<<"�����"<<std::endl;}
};


class UnderGraduate : public LeiFeng
{
};

class Volunteer : public LeiFeng
{

};

class Factory
{
public:
	Factory(){};
	~Factory(){};
public:
	LeiFeng * CretateLeiFeng()
	{
		return new LeiFeng;
	}
};
class UnderGraduateFactory
{
public:
	UnderGraduateFactory(){};
	~UnderGraduateFactory(){};
public:
	LeiFeng * CretateLeiFeng()
	{
		return new UnderGraduate;
	}
};

class VolunteerFactory
{
public:
	VolunteerFactory(){};
	~VolunteerFactory(){};
public:
	LeiFeng * CretateLeiFeng()
	{
		return new Volunteer;
	}
};


#endif