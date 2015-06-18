// Manager.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Manager.h"


int _tmain(int argc, _TCHAR* argv[])
{
	CommonManager * common = new CommonManager("Ð¡¿×");
	Majordomo * major = new Majordomo("ÀÏÓá");
	GeneralManager * GM = new GeneralManager("Ð¡Ñô");
	common->SetSuperior(major);
	major->SetSuperior(GM);


	Request req;
	req.SetstrType("Çë¼Ù");
	req.SetnLevel(1);

	Request req2;
	req2.SetstrType("Çë¼Ù");
	req2.SetnLevel(3);

	Request req3;
	req3.SetstrType("¼ÓÐ½");
	req3.SetnLevel(300);

	Request req4;
	req4.SetstrType("¼ÓÐ½");
	req4.SetnLevel(2000);


	common->RequestDone(req);
	common->RequestDone(req2);
	common->RequestDone(req3);
	common->RequestDone(req4);


	return 0;
}

