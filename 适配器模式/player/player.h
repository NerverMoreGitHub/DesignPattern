#ifndef PLAYER_H
#define PLAYER_H

#include <string>

#define  SetGetValue(type,name)\
    private: type m_##name;\
	public: type Get##name() const {return this->m_##name;}\
	public: void Set##name(type _arg){this->m_##name=_arg;}

class player
{
public:
	player(std::string name){
		m_name = name;
	}
	~player(){}
public:
	virtual void attack() = 0;
	virtual void defense() = 0 ;
protected:
	std::string m_name;
};

class Forward : public player
{
public:
	Forward(std::string name):player(name)
	{
	}
	~Forward(){}
public:
	void attack(){
		std::cout<<name<<" "<<"attack"<<std::endl;
	}
	void defense(){
		std::cout<<name<<" "<<"defense"<<std::endl;
	}
};

class Center : public player
{
public:
	Center(std::string name):player(name)
	{
	}
	~Center(){}
public:
	void attack(){
		std::cout<<name<<" "<<"attack"<<std::endl;
	}
	void defense(){
		std::cout<<name<<" "<<"defense"<<std::endl;
	}
};

class Guards : public player
{
public:
	Guards(std::string name):player(name)
	{
	}
	~Guards(){}
public:
	void attack(){
		std::cout<<name<<" "<<"attack"<<std::endl;
	}
	void defense(){
		std::cout<<name<<" "<<"defense"<<std::endl;
	}
};

class ForeignCenter
{
public:
	ForeignCenter()
	{
	}
	~ForeignCenter(){}
public:
	SetGetValue(std::string,name);
	void Ω¯π•(){
		std::cout<<name<<" "<<"Ω¯π•"<<std::endl;
	}
	void ∑¿ ÿ(){
		std::cout<<name<<" "<<"∑¿ ÿ"<<std::endl;
	}
private:
	std::string name;
};

class Translater : player
{
public:
	Translater(std::string name):player(name)
	{
	}
	~Translater(){}
public:
	void attack(){
		center->Ω¯π•();
	}
	void defense(){
		center->∑¿ ÿ();
	}
private:
	ForeignCenter * center;
};
#endif

