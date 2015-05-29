#ifndef RESUME_H
#define RESUME_H

#include <string>


#define  SetGetValue(type,name)\
	private: type m_##name;\
	public: type get##name() const {return this->m_##name;}\
	public: void set##name(type _arg){this->m_##name=_arg;}



class Experience
{
public:
	Experience(){};
	~Experience(){};
public:
	 Experience Cone();
	 SetGetValue(std::string,timeArea);
	 SetGetValue(std::string,company);
private:
	std::string timeArea;
	std::string company;
};

class PersonInfo
{
public:
	PersonInfo(){};
	~PersonInfo(){};
public:
	PersonInfo Cone();
	SetGetValue(std::string,sex);
	SetGetValue(std::string,age);
private:
	std::string age;
	std::string sex;
};



class Resume
{
public:
	Resume(std::string strName){ name = strName;}
	~Resume(){}
public:
	void SetPersonInfo(std::string sex,std::string age);
	void SetWorkExperience(std::string timeArea,std::string company);
	void DisPlay();
	Resume  Cone();
private:
	std::string name;
	PersonInfo person;
	Experience experience;
};
#endif