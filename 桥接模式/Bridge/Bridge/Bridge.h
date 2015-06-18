#ifndef BRIDGE_H
#define BRIDGE_H


#include <iostream>

class HandSetSoft
{
public:
	HandSetSoft(){}
	~HandSetSoft(){}
	virtual void Run() = 0;
};

class HandSetGame : public HandSetSoft
{
public:
	HandSetGame(){}
	~HandSetGame(){}
	void Run(){std::cout<<"�����ֻ���Ϸ"<<std::endl;}
};

class HandSetAddressList : public HandSetSoft
{
public:
	HandSetAddressList(){}
	~HandSetAddressList(){}
	void Run(){std::cout<<"�����ֻ���ϵ��"<<std::endl;}
};

class HandSetBrand
{
public:
	HandSetBrand(){}
	~HandSetBrand(){}
	void SetHandSetSoft(HandSetSoft * soft)
	{
		m_soft = soft;
	}
	virtual void Run() = 0; 
protected:
	HandSetSoft * m_soft;
	
};

class HandSetBrandN : public HandSetBrand
{
public:
	HandSetBrandN():HandSetBrand(){

	}
	~HandSetBrandN(){}
public:
	void Run()
	{
		m_soft->Run();
	}
};

class HandSetBrandM : public HandSetBrand
{
public:
	HandSetBrandM():HandSetBrand(){

	}
	~HandSetBrandM(){}
public:
	void Run()
	{
		m_soft->Run();
	}
};

#endif