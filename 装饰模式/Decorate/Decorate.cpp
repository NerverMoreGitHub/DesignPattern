// Decorate.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"

#include "Person.h"
#include <iostream>

int _tmain(int argc, _TCHAR* argv[])
{
	Person * person = new Person("vv");

	TShirt *shirt = new TShirt();
	BigTrouser * bigTrouser = new BigTrouser();
	Coat * coat = new Coat();

	std::cout<<"��һ��װ�Σ�"<<std::endl;

	shirt->Decorate(person);
	coat->Decorate(shirt);
	bigTrouser->Decorate(coat);
	bigTrouser->show();

	return 0;
}

