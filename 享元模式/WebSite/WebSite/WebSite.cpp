// WebSite.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "WebSite.h"


int _tmain(int argc, _TCHAR* argv[])
{
	WebSiteFactory *factory = new WebSiteFactory();

	WebSite * fw = factory->GetWebSiteCategory("产品展示");
	fw->Use(User("王卫"));

	WebSite * fk = factory->GetWebSiteCategory("产品展示");
	fk->Use(User("小孔"));

	WebSite * fx = factory->GetWebSiteCategory("新闻");
	fx->Use(User("小徐"));

	WebSite * fs = factory->GetWebSiteCategory("广告");
	fs->Use(User("小手"));

	std::cout<<"网站个数： "<<factory->GetWebSiteCount()<<std::endl;
	return 0;
}

