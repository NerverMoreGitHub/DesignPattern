// Bridge.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Bridge.h"


int _tmain(int argc, _TCHAR* argv[])
{

	HandSetGame * game = new HandSetGame;
	HandSetBrandM * handset = new HandSetBrandM;
	handset->SetHandSetSoft(game);
	handset->Run();

	HandSetBrandN * handset2 = new HandSetBrandN;
	handset2->SetHandSetSoft(game);
	handset2->Run();
	return 0;
}

