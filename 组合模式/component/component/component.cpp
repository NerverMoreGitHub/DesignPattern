// component.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "component.h"


int _tmain(int argc, _TCHAR* argv[])
{
	CenterCompany * root = new CenterCompany("�����ܹ�˾");
	root->AddNode(new HRComponent("�ܹ�˾������Դ��"));
	root->AddNode(new FinanceComponent("�ܹ�˾����"));

	
	CenterCompany * shanghai = new CenterCompany("�Ϻ�������˾");
	shanghai->AddNode(new HRComponent("�Ϻ�������˾������Դ��"));
	shanghai->AddNode(new FinanceComponent("�Ϻ�������˾����"));

	CenterCompany * nangjing = new CenterCompany("�Ͼ����´�");
	nangjing->AddNode(new HRComponent("�Ͼ����´�������Դ��"));
	nangjing->AddNode(new FinanceComponent("�Ͼ����´�����"));
	shanghai->AddNode(nangjing);
	CenterCompany * hangzhou = new CenterCompany("���ݰ��´�");
	hangzhou->AddNode(new HRComponent("���ݰ��´�������Դ��"));
	hangzhou->AddNode(new FinanceComponent("���ݰ��´�����"));
	shanghai->AddNode(hangzhou);

	root->AddNode(shanghai);

	root->DisPlay(1);
	return 0;
}

