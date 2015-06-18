#ifndef MANAGER_H
#define MANAGER_H

#include <string>
#include <iostream>

#define SetGetValue(type,name)\
	private:type m_##name;\
	public:void Set##name(type _arg)  {this->m_##name = _arg;}\
	public:type Get##name()  {return this->m_##name;}



class Request
{
public:
	Request(){}
	~Request(){}

public:
	SetGetValue(std::string,strType);
	SetGetValue(std::string,strContent);
	SetGetValue(int,nLevel);
};

class Manager
{
public:
	Manager(std::string name){
		m_strName = name;
	}
	~Manager(){}
	void SetSuperior(Manager * ms)
	{
		superior = ms;
	}
	virtual void RequestDone(Request request) = 0;
protected:
	std::string m_strName;
	Manager *superior;

};


class CommonManager : public Manager
{
public:
	CommonManager(std::string name) : Manager(name){
	}
	~CommonManager(){}
	void RequestDone(Request request)
	{
		if(request.GetstrType() == "���" && request.GetnLevel() <=2)
		{
			std::cout<<m_strName<<"��׼���:"<<request.GetnLevel()<<"��"<<std::endl;
		}else
		{
			if(superior != NULL)
				superior->RequestDone(request);
		}
	}
};

class GeneralManager : public Manager
{
public:
	GeneralManager(std::string name) : Manager(name){
	}
	~GeneralManager(){}
	void RequestDone(Request request)
	{
		if(request.GetstrType() == "���")
		{
			std::cout<<m_strName<<"��׼���:"<<request.GetnLevel()<<"��"<<std::endl;
		}else if(request.GetstrType() == "��н" && request.GetnLevel() <= 500)
		{
			std::cout<<m_strName<<"��׼��н:"<<request.GetnLevel()<<"Ԫ"<<std::endl;
		}else if(request.GetstrType() == "��н" && request.GetnLevel() > 500)
		{
			std::cout<<m_strName<<"����׼��н:"<<request.GetnLevel()<<"Ԫ"<<std::endl;
		}
	}

};

class Majordomo : public Manager
{
public:
	Majordomo(std::string name) : Manager(name){
	}
	~Majordomo(){}
	void RequestDone(Request request)
	{
		if(request.GetstrType() == "���" && request.GetnLevel() <=5)
		{
			std::cout<<m_strName<<"��׼���:"<<request.GetnLevel()<<"��"<<std::endl;
		}else
		{
			if(superior != NULL)
				superior->RequestDone(request);
		}
	}

};



#endif