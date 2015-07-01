#ifndef UNITEDNATIONS_H
#define UNITEDNATIONS_H
#include <string>
#include <iostream>



#define  GetSetValue(type,name)\
	public:void Set##name(type *arg){m_##name = arg;}\
	public:type * Get##name(){return m_##name;}\
	private: type * m_##name;

class Country;
class UnitedNations
{
public:
	UnitedNations(){}
	~UnitedNations(){}
	virtual void Declare(std::string strMes,Country *colleague) = 0;
};

class Country
{
public:
	Country(UnitedNations * mediator);
	~Country();
protected:
	UnitedNations * m_mediator;

};

class USA : public Country
{
public:
	USA(UnitedNations * unit):Country(unit){}
	~USA(){}
public:
	void Declare(std::string Message){

		m_mediator->Declare(Message,this);
	}
	void GetMessage(std::string strName)
	{
		std::cout<<"USA gets: "<<strName<<std::endl;
	}

};

class Iraq : public Country
{
public:
	Iraq(UnitedNations * unit):Country(unit){}
	~Iraq(){}
public:
	void Declare(std::string Message){

		m_mediator->Declare(Message,this);
	}
	void GetMessage(std::string strName)
	{
		std::cout<<"Iraq gets: "<<strName<<std::endl;
	}

};

class UnitedNationsSecurityCouncil : public UnitedNations
{
public:
	UnitedNationsSecurityCouncil(){}
	~UnitedNationsSecurityCouncil(){}
public:
	GetSetValue(USA,usa);
	GetSetValue(Iraq,iraq);
public:
	void Declare(std::string str,Country *colleague)
	{
		if(m_usa == colleague)
		{
			m_iraq->GetMessage(str);
		}else if(m_iraq == colleague)
		{
			m_usa->GetMessage(str);
		}
	}
};

#endif