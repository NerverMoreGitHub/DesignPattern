#include "stdafx.h"


#include "Resume.h"

#include <iostream>


void Resume::SetPersonInfo(std::string sex,std::string age)
{
	this->person.setage(age);
	this->person.setsex(sex);
}

void Resume::SetWorkExperience(std::string timeArea,std::string company)
{
	this->experience.settimeArea(timeArea);
	this->experience.setcompany(company);
}

void Resume::DisPlay()
{
	std::cout<<name<<" "<<this->person.getage()<<" "<<this->person.getsex()<<std::endl;
	std::cout<<"工作经历 "<<this->experience.gettimeArea()<<" "<<this->experience.getcompany()<<std::endl;
}

Resume  Resume::Cone()
{
	Resume sume(this->name) ;
	sume.person = *(&this->person);
	sume.experience =*(&this->experience);
	return sume;
}

PersonInfo PersonInfo::Cone()
{
	PersonInfo person;
	person.age = this->age;
	person.sex = this->sex;
	return person;
}

Experience Experience::Cone()
{
	Experience experience;
	experience.timeArea = this->timeArea;
	experience.company = this->company;

	return experience;
}

