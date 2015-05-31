#ifndef LEIFENG_H
#define LEIFENG_H

#include <iostream>

class LeiFeng
{
public:
	LeiFeng(){}
	~LeiFeng(){}
public:
	void Wash(){std::cout<<"洗衣服"<<std::endl;}
	void Swap(){std::cout<<"大扫除"<<std::endl;}
	void BuyRice(){std::cout<<"买大米"<<std::endl;}
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