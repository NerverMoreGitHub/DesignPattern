// UnitedNations.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "UnitedNations.h"


Country::Country(UnitedNations * mediator)
{
	m_mediator = mediator;
}
int _tmain(int argc, _TCHAR* argv[])
{
	
	UnitedNationsSecurityCouncil  * UNSA  = new  UnitedNationsSecurityCouncil();
	Iraq * iraq = new Iraq(UNSA);
	USA *usa = new USA(UNSA);

	UNSA->Setiraq(iraq);
	UNSA->Setusa(usa);

	usa->Declare("不准使用核武器，不然等着被干吧");
	iraq->Declare("我们没有核武器，我们不怕被被干!");
	return 0;
}

