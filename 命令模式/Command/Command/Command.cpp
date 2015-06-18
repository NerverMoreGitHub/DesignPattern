// Command.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Command.h"


int _tmain(int argc, _TCHAR* argv[])
{
	Barbecuer * boy = new Barbecuer();
	BakeChickenWingCommand * command1 = new BakeChickenWingCommand(boy);

	BakeMuttonCommand * command2 = new BakeMuttonCommand(boy);
	Waiter *waiter = new Waiter();
	waiter->SetOrder(command1);
	waiter->SetOrder(command2);


	waiter->Notify();


	return 0;
}

