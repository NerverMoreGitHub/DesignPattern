// Strategy.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include "CashContext.h"

int _tmain(int argc, _TCHAR* argv[])
{
	CashContext cs("normal");
	std::cout<<"normal: "<<cs.GetResult(100)<<std::endl;

	CashContext cs1("return");
	std::cout<<"return: "<<cs1.GetResult(100)<<std::endl;

	CashContext cs2("rebate");
	std::cout<<"rebate: "<<cs2.GetResult(100)<<std::endl;
	return 0;
}

