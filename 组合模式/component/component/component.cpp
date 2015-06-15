// component.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "component.h"


int _tmain(int argc, _TCHAR* argv[])
{
	CenterCompany * root = new CenterCompany("北京总公司");
	root->AddNode(new HRComponent("总公司人力资源部"));
	root->AddNode(new FinanceComponent("总公司财务部"));

	
	CenterCompany * shanghai = new CenterCompany("上海华东公司");
	shanghai->AddNode(new HRComponent("上海华东公司人力资源部"));
	shanghai->AddNode(new FinanceComponent("上海华东公司财务部"));

	CenterCompany * nangjing = new CenterCompany("南京办事处");
	nangjing->AddNode(new HRComponent("南京办事处人力资源部"));
	nangjing->AddNode(new FinanceComponent("南京办事处财务部"));
	shanghai->AddNode(nangjing);
	CenterCompany * hangzhou = new CenterCompany("杭州办事处");
	hangzhou->AddNode(new HRComponent("杭州办事处人力资源部"));
	hangzhou->AddNode(new FinanceComponent("杭州办事处财务部"));
	shanghai->AddNode(hangzhou);

	root->AddNode(shanghai);

	root->DisPlay(1);
	return 0;
}

