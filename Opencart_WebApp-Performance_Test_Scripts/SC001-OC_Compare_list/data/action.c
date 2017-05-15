Action()
{

	web_add_cookie("SRCHUID=V=2&GUID=929B6FA041A640DFACCBCF7DC0980197; DOMAIN=www.bing.com");

	web_add_cookie("SRCHD=AF=NOFORM; DOMAIN=www.bing.com");

	web_add_cookie("SRCHUSR=DOB=20170405; DOMAIN=www.bing.com");

	web_url("favicon.ico", 
		"URL=http://www.bing.com/favicon.ico", 
		"Resource=1", 
		"RecContentType=image/x-icon", 
		"Referer=", 
		"Snapshot=t1.inf", 
		LAST);

	web_add_cookie("currency=EUR; DOMAIN=172.16.44.19");

	web_add_cookie("__atuvc=9%7C15%2C15%7C16%2C0%7C17%2C1%7C18; DOMAIN=172.16.44.19");

	web_reg_find("Text=Your Store", 
		LAST);

	web_url("oc", 
		"URL=http://172.16.44.19/oc/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=catalog/view/theme/default/image/loading.gif", ENDITEM, 
		"Url=catalog/view/theme/default/image/button-search.png", ENDITEM, 
		"Url=catalog/view/theme/default/image/button-previous.png", ENDITEM, 
		"Url=catalog/view/theme/default/image/button-next.png", ENDITEM, 
		"Url=catalog/view/theme/default/image/arrow-down.png", ENDITEM, 
		"Url=catalog/view/theme/default/image/menu.png", ENDITEM, 
		"Url=catalog/view/theme/default/image/background.png", ENDITEM, 
		"Url=catalog/view/theme/default/image/button.png", ENDITEM, 
		"Url=catalog/view/theme/default/image/bullets.png", ENDITEM, 
		"Url=catalog/view/theme/default/image/arrows.png", ENDITEM, 
		LAST);

	web_reg_find("Text=Cameras", 
		LAST);

	lr_think_time(6);

	web_link("Cameras", 
		"Text=Cameras", 
		"Snapshot=t3.inf", 
		EXTRARES, 
		"Url=catalog/view/theme/default/image/add.png", "Referer=http://172.16.44.19/oc/index.php?route=product/category&path=33", ENDITEM, 
		LAST);

	lr_think_time(9);

	web_submit_data("index.php", 
		"Action=http://172.16.44.19/oc/index.php?route=product/compare/add", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://172.16.44.19/oc/index.php?route=product/category&path=33", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=product_id", "Value=30", ENDITEM, 
		EXTRARES, 
		"Url=catalog/view/theme/default/image/close.png", "Referer=http://172.16.44.19/oc/index.php?route=product/category&path=33", ENDITEM, 
		"Url=catalog/view/theme/default/image/success.png", "Referer=http://172.16.44.19/oc/index.php?route=product/category&path=33", ENDITEM, 
		LAST);

	lr_think_time(4);

	web_submit_data("index.php_2", 
		"Action=http://172.16.44.19/oc/index.php?route=product/compare/add", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://172.16.44.19/oc/index.php?route=product/category&path=33", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=product_id", "Value=31", ENDITEM, 
		LAST);

	web_reg_find("Text=Product Comparison", 
		LAST);

	web_url("index.php_3", 
		"URL=http://172.16.44.19/oc/index.php?route=product/compare", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://172.16.44.19/oc/index.php?route=product/category&path=33", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		LAST);

	web_set_sockets_option("SSL_VERSION", "2&3");

	web_add_cookie("MC1=GUID=605b1210a00d984c98b65aa1bb3f1fe4&HASH=1012&LV=201612&V=4&LU=1482491531276; DOMAIN=iecvlist.microsoft.com");

	web_add_cookie("A=I&I=AxUFAAAAAAA/CgAAw19EUVpKI2axcHutFCiCJA!!&V=4; DOMAIN=iecvlist.microsoft.com");

	web_add_cookie("MSFPC=ID=605b1210a00d984c98b65aa1bb3f1fe4&CS=3&LV=201612&V=1; DOMAIN=iecvlist.microsoft.com");

	web_add_cookie("SRCHD=AF=NOFORM; DOMAIN=iecvlist.microsoft.com");

	web_add_cookie("SRCHUSR=DOB=20170102; DOMAIN=iecvlist.microsoft.com");

	web_add_cookie("MUID=2966A66248FA6A192AC5AC364CFA6C73; DOMAIN=iecvlist.microsoft.com");

	web_add_cookie("MC1=GUID=605b1210a00d984c98b65aa1bb3f1fe4&HASH=1012&LV=201612&V=4&LU=1482491531276; DOMAIN=r20swj13mr.microsoft.com");

	web_add_cookie("A=I&I=AxUFAAAAAAA/CgAAw19EUVpKI2axcHutFCiCJA!!&V=4; DOMAIN=r20swj13mr.microsoft.com");

	web_add_cookie("MSFPC=ID=605b1210a00d984c98b65aa1bb3f1fe4&CS=3&LV=201612&V=1; DOMAIN=r20swj13mr.microsoft.com");

	web_add_cookie("SRCHD=AF=NOFORM; DOMAIN=r20swj13mr.microsoft.com");

	web_add_cookie("SRCHUSR=DOB=20170102; DOMAIN=r20swj13mr.microsoft.com");

	web_add_cookie("MUID=2966A66248FA6A192AC5AC364CFA6C73; DOMAIN=r20swj13mr.microsoft.com");

	web_url("iecompatviewlist.xml", 
		"URL=https://iecvlist.microsoft.com/IE11/1479242656000/iecompatviewlist.xml", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://r20swj13mr.microsoft.com/ieblocklist/v1/urlblockindex.bin", "Referer=", ENDITEM, 
		LAST);

	web_reg_find("Text=Your Store", 
		LAST);

	lr_think_time(5);

	web_url("index.php_4", 
		"URL=http://172.16.44.19/oc/index.php?route=common/home", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://172.16.44.19/oc/index.php?route=product/compare", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}