Action()
{

	web_add_cookie("currency=EUR; DOMAIN=172.16.44.19");

	web_add_cookie("__atuvc=9%7C15%2C15%7C16%2C0%7C17%2C1%7C18%2C4%7C19; DOMAIN=172.16.44.19");

	web_add_cookie("language=en; DOMAIN=172.16.44.19");

	web_reg_find("Text=Your Store", 
		LAST);

	web_add_cookie("SRCHUID=V=2&GUID=929B6FA041A640DFACCBCF7DC0980197; DOMAIN=www.bing.com");

	web_add_cookie("SRCHD=AF=NOFORM; DOMAIN=www.bing.com");

	web_add_cookie("SRCHUSR=DOB=20170405; DOMAIN=www.bing.com");

	web_url("oc", 
		"URL=http://172.16.44.19/oc/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=catalog/view/theme/default/image/button-search.png", ENDITEM, 
		"Url=catalog/view/theme/default/image/button-next.png", ENDITEM, 
		"Url=catalog/view/theme/default/image/arrow-down.png", ENDITEM, 
		"Url=catalog/view/theme/default/image/menu.png", ENDITEM, 
		"Url=catalog/view/theme/default/image/button-previous.png", ENDITEM, 
		"Url=catalog/view/theme/default/image/background.png", ENDITEM, 
		"Url=catalog/view/theme/default/image/loading.gif", ENDITEM, 
		"Url=catalog/view/theme/default/image/button.png", ENDITEM, 
		"Url=catalog/view/theme/default/image/bullets.png", ENDITEM, 
		"Url=http://www.bing.com/favicon.ico", "Referer=", ENDITEM, 
		"Url=catalog/view/theme/default/image/arrows.png", ENDITEM, 
		LAST);

	web_reg_find("Text=Account Login", 
		LAST);

	web_link("login", 
		"Text=login", 
		"Snapshot=t2.inf", 
		LAST);

	web_reg_find("Text=My Account", 
		LAST);

	web_submit_data("index.php", 
		"Action=http://172.16.44.19/oc/index.php?route=account/login", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"RecContentType=text/html", 
		"Referer=http://172.16.44.19/oc/index.php?route=account/login", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=email", "Value=test1@mail.com", ENDITEM, 
		"Name=password", "Value=test1", ENDITEM, 
		LAST);

	web_set_sockets_option("SSL_VERSION", "2&3");

	web_reg_find("Text=Your Store", 
		LAST);

	web_link("Home", 
		"Text=Home", 
		"Ordinal=1", 
		"Snapshot=t4.inf", 
		LAST);

	web_add_cookie("MC1=GUID=605b1210a00d984c98b65aa1bb3f1fe4&HASH=1012&LV=201612&V=4&LU=1482491531276; DOMAIN=iecvlist.microsoft.com");

	web_add_cookie("A=I&I=AxUFAAAAAAA/CgAAw19EUVpKI2axcHutFCiCJA!!&V=4; DOMAIN=iecvlist.microsoft.com");

	web_add_cookie("MSFPC=ID=605b1210a00d984c98b65aa1bb3f1fe4&CS=3&LV=201612&V=1; DOMAIN=iecvlist.microsoft.com");

	web_add_cookie("SRCHD=AF=NOFORM; DOMAIN=iecvlist.microsoft.com");

	web_add_cookie("SRCHUSR=DOB=20170102; DOMAIN=iecvlist.microsoft.com");

	web_add_cookie("MUID=2966A66248FA6A192AC5AC364CFA6C73; DOMAIN=iecvlist.microsoft.com");

	web_url("iecompatviewlist.xml", 
		"URL=https://iecvlist.microsoft.com/IE11/1479242656000/iecompatviewlist.xml", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		LAST);

	web_reg_find("Text=Apple", 
		LAST);

	web_url("index.php_2", 
		"URL=http://172.16.44.19/oc/index.php?route=product/manufacturer/info&manufacturer_id=8", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://172.16.44.19/oc/index.php?route=common/home", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=catalog/view/theme/default/image/add.png", "Referer=http://172.16.44.19/oc/index.php?route=product/manufacturer/info&manufacturer_id=8", ENDITEM, 
		LAST);

	web_reg_find("Text=iPod Nano", 
		LAST);

	lr_think_time(7);

	web_link("iPod Nano", 
		"Text=iPod Nano", 
		"Snapshot=t7.inf", 
		LAST);

	lr_think_time(4);

	web_submit_data("index.php_3", 
		"Action=http://172.16.44.19/oc/index.php?route=account/wishlist/add", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://172.16.44.19/oc/index.php?route=product/product&manufacturer_id=8&product_id=36", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=product_id", "Value=36", ENDITEM, 
		EXTRARES, 
		"Url=catalog/view/theme/default/image/close.png", "Referer=http://172.16.44.19/oc/index.php?route=product/product&manufacturer_id=8&product_id=36", ENDITEM, 
		"Url=catalog/view/theme/default/image/success.png", "Referer=http://172.16.44.19/oc/index.php?route=product/product&manufacturer_id=8&product_id=36", ENDITEM, 
		"Url=catalog/view/theme/default/image/tab.png", "Referer=http://172.16.44.19/oc/index.php?route=product/product&manufacturer_id=8&product_id=36", ENDITEM, 
		LAST);

	web_url("index.php_4", 
		"URL=http://172.16.44.19/oc/index.php?route=product/product/review&product_id=36", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://172.16.44.19/oc/index.php?route=product/product&manufacturer_id=8&product_id=36", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("uvc=9%7C15%2C15%7C16%2C0%7C17%2C1%7C18%2C5%7C19; DOMAIN=s7.addthis.com");

	web_add_cookie("di2=aUj~t6Hq; DOMAIN=s7.addthis.com");

	web_add_cookie("uid=58ecb5d16bf7095e; DOMAIN=s7.addthis.com");

	web_add_cookie("vc=28; DOMAIN=s7.addthis.com");

	web_add_cookie("loc=MDAwMDBFVU1EMDAyMjcwMjA4OTAwMDAwMDAwVg==; DOMAIN=s7.addthis.com");

	web_reg_find("Text=AddThis Utility Frame", 
		LAST);

	web_url("sh.f7354b64245ec78fa8b63827.html", 
		"URL=http://s7.addthis.com/static/sh.f7354b64245ec78fa8b63827.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://172.16.44.19/oc/index.php?route=product/product&manufacturer_id=8&product_id=36", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		LAST);

	web_reg_find("Text=AddThis Utility Frame", 
		LAST);

	web_add_cookie("__atuvc=9%7C15%2C15%7C16%2C0%7C17%2C1%7C18%2C5%7C19; DOMAIN=172.16.44.19");

	web_add_cookie("__atuvs=5914469ebfddde89000; DOMAIN=172.16.44.19");

	web_url("sh.f7354b64245ec78fa8b63827.html_2", 
		"URL=http://s7.addthis.com/static/sh.f7354b64245ec78fa8b63827.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://172.16.44.19/oc/index.php?route=product/product&manufacturer_id=8&product_id=36", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=http://172.16.44.19/oc/catalog/view/javascript/jquery/colorbox/images/loading_background.png", "Referer=http://172.16.44.19/oc/index.php?route=product/product&manufacturer_id=8&product_id=36", ENDITEM, 
		"Url=http://172.16.44.19/oc/catalog/view/javascript/jquery/colorbox/images/controls.png", "Referer=http://172.16.44.19/oc/index.php?route=product/product&manufacturer_id=8&product_id=36", ENDITEM, 
		"Url=http://172.16.44.19/oc/catalog/view/javascript/jquery/colorbox/images/loading.gif", "Referer=http://172.16.44.19/oc/index.php?route=product/product&manufacturer_id=8&product_id=36", ENDITEM, 
		"Url=http://172.16.44.19/oc/catalog/view/javascript/jquery/colorbox/images/border.png", "Referer=http://172.16.44.19/oc/index.php?route=product/product&manufacturer_id=8&product_id=36", ENDITEM, 
		LAST);

	web_reg_find("Text=My Wish List", 
		LAST);

	web_add_cookie("uvc=9%7C15%2C15%7C16%2C0%7C17%2C1%7C18%2C6%7C19; DOMAIN=m.addthis.com");

	web_add_cookie("di2=aUj~t6Hq; DOMAIN=m.addthis.com");

	web_add_cookie("uid=58ecb5d16bf7095e; DOMAIN=m.addthis.com");

	web_add_cookie("vc=28; DOMAIN=m.addthis.com");

	web_add_cookie("loc=MDAwMDBFVU1EMDAyMjcwMjA4OTAwMDAwMDAwVg==; DOMAIN=m.addthis.com");

	web_add_cookie("SRCHUID=V=2&GUID=75E9EF54449343F1B997DBD5C6B399F2; DOMAIN=ieonline.microsoft.com");

	web_add_cookie("MC1=GUID=605b1210a00d984c98b65aa1bb3f1fe4&HASH=1012&LV=201612&V=4&LU=1482491531276; DOMAIN=ieonline.microsoft.com");

	web_add_cookie("A=I&I=AxUFAAAAAAA/CgAAw19EUVpKI2axcHutFCiCJA!!&V=4; DOMAIN=ieonline.microsoft.com");

	web_add_cookie("MSFPC=ID=605b1210a00d984c98b65aa1bb3f1fe4&CS=3&LV=201612&V=1; DOMAIN=ieonline.microsoft.com");

	web_add_cookie("SRCHD=AF=NOFORM; DOMAIN=ieonline.microsoft.com");

	web_add_cookie("SRCHUSR=DOB=20170102; DOMAIN=ieonline.microsoft.com");

	web_add_cookie("MUID=2966A66248FA6A192AC5AC364CFA6C73; DOMAIN=ieonline.microsoft.com");

	web_url("index.php_5", 
		"URL=http://172.16.44.19/oc/index.php?route=account/wishlist", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://172.16.44.19/oc/index.php?route=product/product&manufacturer_id=8&product_id=36", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=http://m.addthis.com/live/red_lojson/100eng.json?sh=0&ph=1388&ivh=985&dt=0&pdt=1317&ict=&pct=1&perf=widget%7C1317%7C4863%2Clojson%7C6388%7C0%2Csh%7C6393%7C30%2Csh%7C6406%7C210&cmenu=null&ppd=0&ppl=0&fbe=&xmv=0&xms=0&xmlc=0&jsfw=jquery&jsfwv=jquery-1.7.1&al=men&scr=0&scv=0&apiu=0&ba=1&sid=5914469ecf915816&rev=v7.13.0-wp&pub=&dp=172.16.44.19&fp=oc%2Findex.php%3Froute%3Dproduct%2Fproduct%26manufacturer_id%3D8%26product_id%3D36&pfm=1&icns=", "Referer=http://172.16.44.19/oc/index.php?route=product/"
		"product&manufacturer_id=8&product_id=36", ENDITEM, 
		"Url=https://ieonline.microsoft.com/iedomainsuggestions/ie11/suggestions.en-US", "Referer=", ENDITEM, 
		"Url=https://ieonline.microsoft.com/ieflipahead/ie10/rules.xml?mkt=en-US", "Referer=", ENDITEM, 
		LAST);

	web_submit_data("index.php_6", 
		"Action=http://172.16.44.19/oc/index.php?route=checkout/cart/add", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://172.16.44.19/oc/index.php?route=account/wishlist", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=product_id", "Value=36", ENDITEM, 
		"Name=quantity", "Value=1", ENDITEM, 
		LAST);

	web_url("fwlink", 
		"URL=http://go.microsoft.com/fwlink/?LinkID=401135", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		LAST);

	web_reg_find("Text=My Account", 
		LAST);

	lr_think_time(4);

	web_url("index.php_7", 
		"URL=http://172.16.44.19/oc/index.php?route=account/account", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://172.16.44.19/oc/index.php?route=account/wishlist", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		LAST);

	web_reg_find("Text=Shopping Cart", 
		LAST);

	web_link("View Cart", 
		"Text=View Cart", 
		"Snapshot=t16.inf", 
		LAST);

	web_reg_find("Text=Shopping Cart", 
		LAST);

	lr_think_time(4);

	web_image("Remove", 
		"Alt=Remove", 
		"Snapshot=t17.inf", 
		LAST);

	web_reg_find("Text=Your Store", 
		LAST);

	web_link("Home_2", 
		"Text=Home", 
		"Ordinal=1", 
		"Snapshot=t18.inf", 
		LAST);

	web_reg_find("Text=My Wish List", 
		LAST);

	lr_think_time(4);

	web_link("Wish List (1)", 
		"Text=Wish List (1)", 
		"Snapshot=t19.inf", 
		LAST);

	web_reg_find("Text=My Wish List", 
		LAST);

	web_image("Remove_2", 
		"Alt=Remove", 
		"Snapshot=t20.inf", 
		LAST);

	web_reg_find("Text=My Account", 
		LAST);

	web_link("test1", 
		"Text=test1", 
		"Snapshot=t21.inf", 
		LAST);

	web_reg_find("Text=Your Store", 
		LAST);

	lr_think_time(5);

	web_link("Home_3", 
		"Text=Home", 
		"Ordinal=1", 
		"Snapshot=t22.inf", 
		LAST);

	web_reg_find("Text=Account Logout", 
		LAST);

	web_link("Logout", 
		"Text=Logout", 
		"Snapshot=t23.inf", 
		LAST);

	web_reg_find("Text=Your Store", 
		LAST);

	web_link("Home_4", 
		"Text=Home", 
		"Ordinal=1", 
		"Snapshot=t24.inf", 
		LAST);

	return 0;
}