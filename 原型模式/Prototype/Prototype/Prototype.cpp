// Prototype.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include "Resume.h"

int _tmain(int argc, _TCHAR* argv[])
{
	Resume resumeA("王卫");
	resumeA.SetPersonInfo("男","16");
	resumeA.SetWorkExperience("2012-2015","江苏轩途电子科技有限公司");

	Resume resumeB = resumeA.Cone();
	resumeB.SetWorkExperience("2015-2017","南京轩途电子科技有限公司");

	Resume resumeC = resumeB.Cone();
	resumeC.SetWorkExperience("2017-2019","玄武轩途电子科技有限公司");

	resumeA.DisPlay();
	resumeB.DisPlay();
	resumeC.DisPlay();

	return 0;
}

