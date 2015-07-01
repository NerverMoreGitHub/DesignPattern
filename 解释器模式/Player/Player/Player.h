#ifndef PLAYER_H
#define PLAYER_H

#include <string>


class PlayerContext
{
public:
	PlayerContext(std::string str)
	{
		m_Str = str;
	}
	~PlayerContext();
public:
	std::string GetContext(){
		return m_Str;
	}
private:
	std::string m_Str;
};

class Express
{
public:
	Express();
	~Express();
public:
	void Interpret(PlayerContext context)
	{
		std::string strContext = context.GetContext();
		if(strContext.size() == 0 ) return;
		while(strContext.size()>2)
		{
			std::string strKey = std::string(strContext[0]);
			double lfValue = double(strContext[1]);
			Exec(strKey,lfValue);
			strContext = strContext.substr(0,2);	
		}
		
	}
	void Exec(std::string strKey,double lfValue) = 0;
};

class Note : public Express
{
public:
	Note():Express(){}
	~Note();
public:
	void Exec(std::string strKey,double lfValue)
	{
		
	}
};

class Scale : public Express
{
public:
	Scale():Express(){}
	~Scale();
public:
	void Exec(std::string strKey,double lfValue)
	{

	}
};

#endif