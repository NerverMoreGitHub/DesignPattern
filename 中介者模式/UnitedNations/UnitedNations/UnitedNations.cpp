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

	usa->Declare("��׼ʹ�ú���������Ȼ���ű��ɰ�");
	iraq->Declare("����û�к����������ǲ��±�����!");
	return 0;
}

