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

	web_add_cookie("__atuvc=9%7C15%2C15%7C16%2C0%7C17%2C1%7C18%2C2%7C19; DOMAIN=172.16.44.19");

	web_add_cookie("language=en; DOMAIN=172.16.44.19");

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
		"Url=catalog/view/theme/default/image/button-next.png", ENDITEM, 
		"Url=catalog/view/theme/default/image/arrow-down.png", ENDITEM, 
		"Url=catalog/view/theme/default/image/menu.png", ENDITEM, 
		"Url=catalog/view/theme/default/image/button-search.png", ENDITEM, 
		"Url=catalog/view/theme/default/image/button-previous.png", ENDITEM, 
		"Url=catalog/view/theme/default/image/loading.gif", ENDITEM, 
		"Url=catalog/view/theme/default/image/button.png", ENDITEM, 
		"Url=catalog/view/theme/default/image/background.png", ENDITEM, 
		"Url=catalog/view/theme/default/image/bullets.png", ENDITEM, 
		"Url=catalog/view/theme/default/image/arrows.png", ENDITEM, 
		LAST);

	web_reg_find("Text=Search", 
		LAST);

	web_url("index.php", 
		"URL=http://172.16.44.19/oc/index.php?route=product/search", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://172.16.44.19/oc/", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		LAST);

	web_reg_find("Text=Search - mac", 
		LAST);

	lr_think_time(4);

	web_url("index.php_2", 
		"URL=http://172.16.44.19/oc/index.php?route=product/search&search=mac", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://172.16.44.19/oc/index.php?route=product/search", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=catalog/view/theme/default/image/add.png", "Referer=http://172.16.44.19/oc/index.php?route=product/search&search=mac", ENDITEM, 
		LAST);

	web_reg_find("Text=MacBook", 
		LAST);

	web_link("MacBook", 
		"Text=MacBook", 
		"Snapshot=t5.inf", 
		EXTRARES, 
		"Url=catalog/view/theme/default/image/tab.png", "Referer=http://172.16.44.19/oc/index.php?route=product/product&product_id=43&search=mac", ENDITEM, 
		LAST);

	web_url("index.php_3", 
		"URL=http://172.16.44.19/oc/index.php?route=product/product/review&product_id=43", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://172.16.44.19/oc/index.php?route=product/product&product_id=43&search=mac", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("uvc=9%7C15%2C15%7C16%2C0%7C17%2C1%7C18%2C2%7C19; DOMAIN=s7.addthis.com");

	web_add_cookie("di2=aUj~t6Hq; DOMAIN=s7.addthis.com");

	web_add_cookie("uid=58ecb5d16bf7095e; DOMAIN=s7.addthis.com");

	web_add_cookie("vc=26; DOMAIN=s7.addthis.com");

	web_add_cookie("loc=MDAwMDBFVU1EMDAyMjcwMjA4OTAwMDAwMDAwVg==; DOMAIN=s7.addthis.com");

	web_reg_find("Text=AddThis Utility Frame", 
		LAST);

	web_add_cookie("__atuvc=9%7C15%2C15%7C16%2C0%7C17%2C1%7C18%2C3%7C19; DOMAIN=172.16.44.19");

	web_add_cookie("__atuvs=5912eee00c3b7afe000; DOMAIN=172.16.44.19");

	web_add_cookie("uvc=9%7C15%2C15%7C16%2C0%7C17%2C1%7C18%2C2%7C19; DOMAIN=m.addthis.com");

	web_add_cookie("di2=aUj~t6Hq; DOMAIN=m.addthis.com");

	web_add_cookie("uid=58ecb5d16bf7095e; DOMAIN=m.addthis.com");

	web_add_cookie("vc=26; DOMAIN=m.addthis.com");

	web_add_cookie("loc=MDAwMDBFVU1EMDAyMjcwMjA4OTAwMDAwMDAwVg==; DOMAIN=m.addthis.com");

	web_add_cookie("uvc=9%7C15%2C15%7C16%2C0%7C17%2C1%7C18%2C3%7C19; DOMAIN=m.addthis.com");

	web_url("sh.f7354b64245ec78fa8b63827.html", 
		"URL=http://s7.addthis.com/static/sh.f7354b64245ec78fa8b63827.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://172.16.44.19/oc/index.php?route=product/product&product_id=43&search=mac", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=http://172.16.44.19/oc/catalog/view/javascript/jquery/colorbox/images/controls.png", "Referer=http://172.16.44.19/oc/index.php?route=product/product&product_id=43&search=mac", ENDITEM, 
		"Url=http://172.16.44.19/oc/catalog/view/javascript/jquery/colorbox/images/border.png", "Referer=http://172.16.44.19/oc/index.php?route=product/product&product_id=43&search=mac", ENDITEM, 
		"Url=http://172.16.44.19/oc/catalog/view/javascript/jquery/colorbox/images/loading.gif", "Referer=http://172.16.44.19/oc/index.php?route=product/product&product_id=43&search=mac", ENDITEM, 
		"Url=http://172.16.44.19/oc/catalog/view/javascript/jquery/colorbox/images/loading_background.png", "Referer=http://172.16.44.19/oc/index.php?route=product/product&product_id=43&search=mac", ENDITEM, 
		"Url=http://m.addthis.com/live/red_lojson/300lo.json?si=5912eee014ee924c&bkl=0&bl=1&pdt=287&sid=5912eee014ee924c&pub=&rev=v7.13.0-wp&ln=en&pc=men&cb=0&ab=-&dp=172.16.44.19&fp=oc%2Findex.php%3Froute%3Dproduct%2Fproduct%26product_id%3D43&fr=oc%2Findex.php%3Froute%3Dproduct%2Fsearch%26search%3Dmac&of=0&pd=0&irt=1&vcl=1&md=0&ct=1&tct=0&abt=0&cdn=0&pi=1&rb=2&gen=100&chr=utf-8&colc=1494413024417&jsl=1&uvs=5912eee00c3b7afe000&skipb=1&callback=addthis.cbs.oln9_66871219817853290", "Referer=http://"
		"172.16.44.19/oc/index.php?route=product/product&product_id=43&search=mac", ENDITEM, 
		"Url=http://m.addthis.com/live/red_lojson/100eng.json?sh=1429&ph=1499&ivh=985&dt=17334&pdt=287&ict=&pct=2&perf=widget%7C288%7C4729%2Clojson%7C5213%7C186%2Csh%7C5217%7C6%2Csh%7C5221%7C190&rndr=render_toolbox%7C5440&cmenu=null&ppd=0&ppl=0&fbe=&xmv=0&xms=0&xmlc=0&jsfw=jquery&jsfwv=jquery-1.7.1&al=men&scr=0&scv=0&apiu=0&ba=3&sid=5912eee014ee924c&rev=v7.13.0-wp&pub=&dp=172.16.44.19&fp=oc%2Findex.php%3Froute%3Dproduct%2Fproduct%26product_id%3D43%26search%3Dmac&pfm=1&icns="
		"addthis%2Cemail%2Cprint%2Cfacebook%2Ctwitter", "Referer=http://172.16.44.19/oc/index.php?route=product/product&product_id=43&search=mac", ENDITEM, 
		LAST);

	web_set_sockets_option("SSL_VERSION", "2&3");

	web_reg_find("Text=Your Store", 
		LAST);

	web_url("index.php_4", 
		"URL=http://172.16.44.19/oc/index.php?route=common/home", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://172.16.44.19/oc/index.php?route=product/product&product_id=43&search=mac", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}