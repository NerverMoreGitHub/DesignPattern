// WebSite.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "WebSite.h"


int _tmain(int argc, _TCHAR* argv[])
{
	WebSiteFactory *factory = new WebSiteFactory();

	WebSite * fw = factory->GetWebSiteCategory("��Ʒչʾ");
	fw->Use(User("����"));

	WebSite * fk = factory->GetWebSiteCategory("��Ʒչʾ");
	fk->Use(User("С��"));

	WebSite * fx = factory->GetWebSiteCategory("����");
	fx->Use(User("С��"));

	WebSite * fs = factory->GetWebSiteCategory("���");
	fs->Use(User("С��"));

	std::cout<<"��վ������ "<<factory->GetWebSiteCount()<<std::endl;
	return 0;
}

