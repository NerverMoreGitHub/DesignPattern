#ifndef COMPONENT_H
#define COMPONENT_H

#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

class company
{
public:
	company(std::string strName){

		m_strName = strName;
	}
	~company(){}
public:
	virtual void AddNode(company * cp) = 0;
	virtual void RemoveNode(company * cp) = 0;
	virtual void DisPlay(int nDept)= 0;
	virtual void LineofDute()= 0;
public:
	std::string m_strName;
};

class CenterCompany  : public company
{
public:
	CenterCompany(std::string strName) : company(strName){}
	~CenterCompany(){}
public:
	void AddNode(company * cp)
	{
		vecChirdren.push_back(cp);
	}
	void RemoveNode(company * cp)
	{
		vecChirdren.erase(std::find(vecChirdren.begin(),vecChirdren.end(),cp));
	}
	void DisPlay(int nDept)
	{
		for(int i = 0 ;i<nDept;i++)
			std::cout<<"-";
		std::cout<<m_strName<<std::endl;
		for(int i = 0 ;i<vecChirdren.size();i++)
			vecChirdren[i]->DisPlay(nDept+2);
	}
	void LineofDute()
	{
		for(int i = 0 ;i<vecChirdren.size();i++)
			vecChirdren[i]->LineofDute();
	}
private:
	std::vector<company * >vecChirdren;
};


class HRComponent  : public company
{
public:
	HRComponent(std::string strName) : company(strName){}
	~HRComponent(){}
public:
	void AddNode(company * cp)
	{
	}
	void RemoveNode(company * cp)
	{
	}
	void DisPlay(int nDept)
	{
		for(int i = 0 ;i<nDept;i++)
		std::cout<<"-";
		std::cout<<this->m_strName<<std::endl;
	}
	void LineofDute()
	{
		std::cout<<m_strName<<" 员工招聘"<<std::endl;
	}
};

class FinanceComponent  : public company
{
public:
	FinanceComponent(std::string strName) : company(strName){}
	~FinanceComponent(){}
public:
	void AddNode(company * cp)
	{
	}
	void RemoveNode(company * cp)
	{
	}
	void DisPlay(int nDept)
	{
		for(int i = 0 ;i<nDept;i++)
			std::cout<<"-";
		std::cout<<this->m_strName<<std::endl;
	}
	void LineofDute()
	{
		std::cout<<m_strName<<" 公司财务收支管理"<<std::endl;
	}
};



#endif