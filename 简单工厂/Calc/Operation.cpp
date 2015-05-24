#include "stdafx.h"
#include "Operation.h"

Operation::Operation()
{

}

Operation::~Operation()
{

}

double Operation::GetResult()
{
	double lfResult = 0 ;
	return lfResult;
}

//Add 
OperationAdd::OperationAdd()
{

}

OperationAdd::~OperationAdd()
{

}

double OperationAdd::GetResult()
{
	return getNumberA()+getNumberB();
}
//Sub
OperationSub::OperationSub()
{

}

OperationSub::~OperationSub()
{

}

double OperationSub::GetResult()
{
	return getNumberA()-getNumberB();
}

//Mul
OperationMul::OperationMul()
{

}

OperationMul::~OperationMul()
{

}

double OperationMul::GetResult()
{
	return getNumberA()*getNumberB();
}

//Div
OperationDiv::OperationDiv()
{

}

OperationDiv::~OperationDiv()
{

}

double OperationDiv::GetResult()
{
	return getNumberA()/getNumberB();
}

//factry

Operation * OperationFactry::CreateOperation(std::string strOperation)
{
	Operation * op = NULL;
	switch(ChangString2Type(strOperation))
	{
	case EN_OPERATER_TYPE::EN_OPERATER_ADD:
		{
			op = new OperationAdd();
		}
		break;
	case EN_OPERATER_TYPE::EN_OPERATER_SUB:
		{
			op = new OperationSub();
		}
		break;
	case EN_OPERATER_TYPE::EN_OPERATER_MUL:
		{
			op = new OperationMul();
		}
		break;
	case EN_OPERATER_TYPE::EN_OPERATER_DIV:
		{
			op = new OperationDiv();
		}
		break;
	}
	return op;
}

EN_OPERATER_TYPE OperationFactry::ChangString2Type(std::string operation)
{
	if(operation == "+") return EN_OPERATER_TYPE::EN_OPERATER_ADD;
	else if (operation == "-") return EN_OPERATER_TYPE::EN_OPERATER_SUB;
	else if (operation == "*") return EN_OPERATER_TYPE::EN_OPERATER_MUL;
	else if (operation == "/") return EN_OPERATER_TYPE::EN_OPERATER_DIV;
}

