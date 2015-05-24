// Calc.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include "Operation.h"

int _tmain(int argc, _TCHAR* argv[])
{
	std::cout<<"Calc"<<std::endl;
	Operation *op = NULL;
	OperationFactry opFactry;
	op = opFactry.CreateOperation("-");
	op->setNumberA(1.0);
	op->setNumberB(1.0);
	std::cout<<op->GetResult()<<std::endl;
	return 0;
}
