#ifndef WEBSITE_H
#define WENSITE_H

#include <string>
#include <iostream>
#include <hash_map>


#define SetGetValue(type,name)\
	public:void Set##name(type arg){m_##name = arg;}\
	public:type Get##name(){return m_##name;}\
	private:type m_##name;
class User
{
public:
	User(std::string strName){
		m_strName = strName;
	}
	std::string GetStrName(){
		return m_strName;
	}
private:
	std::string m_strName;
};

class WebSite
{
public:
	WebSite(){}
	~WebSite(){}
public:
	virtual void Use(User user) = 0;
};

class ConcereWebSite : public WebSite
{
public:
	ConcereWebSite(std::string strName){
		m_strName = strName;
	}
	~ConcereWebSite(){}
public:
	void Use(User user)
	{
		std::cout<<"网站分类："<<m_strName<<"  用户名字："<<user.GetStrName()<<std::endl;
	}
private:
	std::string m_strName;
};

class WebSiteFactory
{
public:
	WebSiteFactory(){}
	~WebSiteFactory(){}
public:
	WebSite* GetWebSiteCategory(std::string key)
	{
		if(flyWeights.find(key) == flyWeights.end())
		{
			flyWeights.insert(std::make_pair(key,new ConcereWebSite(key)));
		}
		return flyWeights[key];
	}
	int GetWebSiteCount()
	{
		return flyWeights.size();
	}
private:
	std::hash_map<std::string ,WebSite* > flyWeights;
};
#endif