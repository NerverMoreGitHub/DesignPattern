#ifndef PROXY_H
#define PROXY_H

#include <string>


class girl
{
public:
	girl(){};
	~girl(){};
public:
	std::string GetGirlName(){return m_strName;}
	void SetGirlName(std::string strName){m_strName = strName;}
private:
	std::string m_strName;
};


class InterFace 
{
public:
	InterFace(){};
	~InterFace(){};
public:
	virtual void GiveDolls() = 0;
	virtual void GiveFollowers() = 0;
	virtual void GiveChocolates() = 0;
};

class Pursuit : public InterFace
{
public:
	Pursuit(girl s){ m_girl = s;}
	~Pursuit();
public:
	void GiveDolls();
	void GiveFollowers();
	void GiveChocolates();
private:
	girl m_girl;
};

class Proxy : public InterFace
{
public:
	Proxy(girl s);
	~Proxy(){};
public:
	void GiveDolls();
	void GiveFollowers();
	void GiveChocolates();
private:
	Pursuit * m_gg;
};

#endif