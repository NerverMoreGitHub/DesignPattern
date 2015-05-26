// Proxy.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Proxy.h"

#include <iostream>


void Pursuit::GiveDolls()
{
	std::cout<<m_girl.GetGirlName()<<"送你的玩具"<<std::endl;
}
void Pursuit::GiveFollowers()
{
	std::cout<<m_girl.GetGirlName()<<"送你的鲜花"<<std::endl;
}

void Pursuit::GiveChocolates()
{
	std::cout<<m_girl.GetGirlName()<<"送你的巧克力"<<std::endl;
}

Proxy::Proxy(girl s)
{
	m_gg = new Pursuit(s);
}

void Proxy::GiveDolls()
{
	m_gg->GiveDolls();
}
void Proxy::GiveFollowers()
{
	m_gg->GiveFollowers();
}

void Proxy::GiveChocolates()
{
	m_gg->GiveChocolates();
}


int _tmain(int argc, _TCHAR* argv[])
{
	girl Girl;
	Girl.SetGirlName("Lucy");

	Proxy proxy(Girl);

	proxy.GiveDolls();
	proxy.GiveFollowers();
	proxy.GiveChocolates();

	return 0;
}

