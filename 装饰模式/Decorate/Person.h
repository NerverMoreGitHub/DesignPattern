#ifndef PERSON_H
#define PERSON_H

#include <string>

class Person
{
public:
	Person(){}
	Person(std::string strName);
	~Person(){}
public:
	virtual void show();
private:
	std::string m_strName;
};

class Finery : public Person
{
public:
	Finery(){}
	~Finery(){}
public:
	void Decorate(Person * compent);
	virtual void show();
protected:
	Person *m_compent;
};

class TShirt : public Finery
{
public:
	TShirt(){}
	~TShirt(){}
public:
	void show();
};

class BigTrouser : public Finery
{
public:
	BigTrouser(){}
	~BigTrouser(){}
public:
	void show();
};

class Coat : public Finery
{
public:
	Coat(){}
	~Coat(){}
public:
	void show();
};



#endif