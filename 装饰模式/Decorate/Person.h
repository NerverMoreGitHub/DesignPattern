#ifndef PERSON_H
#define PERSON_H

#include <string>

class Person
{
public:
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
	void Decorate(Person * compent);
	virtual void show();
protected:
	Person *m_compent;
};
#endif