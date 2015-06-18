// Manager.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Manager.h"


int _tmain(int argc, _TCHAR* argv[])
{
	CommonManager * common = new CommonManager("С��");
	Majordomo * major = new Majordomo("����");
	GeneralManager * GM = new GeneralManager("С��");
	common->SetSuperior(major);
	major->SetSuperior(GM);


	Request req;
	req.SetstrType("���");
	req.SetnLevel(1);

	Request req2;
	req2.SetstrType("���");
	req2.SetnLevel(3);

	Request req3;
	req3.SetstrType("��н");
	req3.SetnLevel(300);

	Request req4;
	req4.SetstrType("��н");
	req4.SetnLevel(2000);


	common->RequestDone(req);
	common->RequestDone(req2);
	common->RequestDone(req3);
	common->RequestDone(req4);


	return 0;
}

