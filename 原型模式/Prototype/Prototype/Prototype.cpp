// Prototype.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include "Resume.h"

int _tmain(int argc, _TCHAR* argv[])
{
	Resume resumeA("����");
	resumeA.SetPersonInfo("��","16");
	resumeA.SetWorkExperience("2012-2015","������;���ӿƼ����޹�˾");

	Resume resumeB = resumeA.Cone();
	resumeB.SetWorkExperience("2015-2017","�Ͼ���;���ӿƼ����޹�˾");

	Resume resumeC = resumeB.Cone();
	resumeC.SetWorkExperience("2017-2019","������;���ӿƼ����޹�˾");

	resumeA.DisPlay();
	resumeB.DisPlay();
	resumeC.DisPlay();

	return 0;
}

