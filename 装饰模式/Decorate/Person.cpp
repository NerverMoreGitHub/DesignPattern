#include "stdafx.h"


#include <iostream>
#include "Person.h"

Person::Person(std::string strName)
{
	m_strName = strName;
}

void Person::show()
{
	std::cout<<"×°°çµÄ"<<m_strName<<std::endl;
}

void Finery::Decorate(Person * compent)
{
	m_compent = compent;
}

void Finery::show()
{
	if(m_compent != NULL)
	{
		m_compent->show();
	}
}

void TShirt::show()
{
	std::cout<<"T-Shirt  ";
	Finery::show();
}

void BigTrouser::show()
{
	std::cout<<"Îû¹þ¿ã  ";
	Finery::show();
}

void Coat::show()
{
	std::cout<<"ÍâÌ×  ";
	Finery::show();
}


