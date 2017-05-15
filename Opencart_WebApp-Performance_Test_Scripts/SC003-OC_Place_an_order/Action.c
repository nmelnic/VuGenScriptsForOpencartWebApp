Action()
{

	web_add_cookie("currency=EUR; DOMAIN=172.16.44.19");
	web_add_cookie("__atuvc=9%7C15%2C15%7C16%2C0%7C17%2C1%7C18%2C3%7C19; DOMAIN=172.16.44.19");
	web_add_cookie("language=en; DOMAIN=172.16.44.19");
	web_add_cookie("__atuvs=5912eee00c3b7afe000; DOMAIN=172.16.44.19");
//-------------------------------------------------------------

//Client opens home page

	web_reg_find("Text=Your Store", 
		LAST);

	web_url("Home Page", 
		"URL=http://172.16.44.19/oc/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=catalog/view/theme/default/image/button-previous.png", ENDITEM, 
		"Url=catalog/view/theme/default/image/button-next.png", ENDITEM, 
		"Url=catalog/view/theme/default/image/button-search.png", ENDITEM, 
		"Url=catalog/view/theme/default/image/menu.png", ENDITEM, 
		"Url=catalog/view/theme/default/image/loading.gif", ENDITEM, 
		"Url=catalog/view/theme/default/image/arrow-down.png", ENDITEM, 
		"Url=catalog/view/theme/default/image/background.png", ENDITEM, 
		"Url=catalog/view/theme/default/image/button.png", ENDITEM, 
		"Url=catalog/view/theme/default/image/bullets.png", ENDITEM, 
		"Url=catalog/view/theme/default/image/arrows.png", ENDITEM, 
		LAST);

	web_reg_find("Text=Your Store", 
		LAST);

	web_link("Home", 
		"Text=Home", 
		"Snapshot=t3.inf", 
		LAST);
//-------------------------------------------------------------


//Client opens login form

	web_reg_find("Text=Account Login", 
		LAST);

	lr_think_time(7);

	web_link("Login Form", 
		"Text=login", 
		"Snapshot=t4.inf", 
		LAST);
//-------------------------------------------------------------


//Clients fills and submits his login credentials

	web_reg_find("Text=My Account", 
		LAST);
	
	lr_start_transaction("Login");
	
	web_submit_data("Sumbit user credentials",
		"Action=http://172.16.44.19/oc/index.php?route=account/login",
		"Method=POST",
		"EncType=multipart/form-data",
		"RecContentType=text/html",
		"Referer=http://172.16.44.19/oc/index.php?route=account/login",
		"Snapshot=t5.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=email", "Value={email}", ENDITEM,
		"Name=password", "Value={password}", ENDITEM,
		LAST);
	
	lr_end_transaction("Login", LR_AUTO);
//-------------------------------------------------------------


//Clients moves to home page

	web_reg_find("Text=Your Store", 
		LAST);

	web_link("Home Page", 
		"Text=Home", 
		"Ordinal=1", 
		"Snapshot=t6.inf", 
		LAST);
//-------------------------------------------------------------


//Client opens camera category

	lr_start_transaction("Open category");

	web_reg_find("Text=Cameras", 
		LAST);

	web_link("Open Camera Category", 
		"Text=Cameras", 
		"Snapshot=t7.inf", 
		EXTRARES, 
		"Url=catalog/view/theme/default/image/add.png", 
		"Referer=http://172.16.44.19/oc/index.php?route=product/category&path=33", ENDITEM,
		LAST);
	
	lr_end_transaction("Open category", LR_AUTO);
//-------------------------------------------------------------
	
	
//Client choses an item

	web_reg_find("Text=Canon EOS 5D", 
		LAST);
		
       lr_start_transaction("Open an Item");

	web_url("Open an Item", 
		"URL=http://172.16.44.19/oc/index.php?route=product/product&path=33&product_id=30", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://172.16.44.19/oc/index.php?route=product/category&path=33", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=catalog/view/theme/default/image/tab.png",
		"Referer=http://172.16.44.19/oc/index.php?route=product/product&path=33&product_id=30", ENDITEM,
		LAST);
       
       lr_end_transaction("Open an Item", LR_AUTO);
//-------------------------------------------------------------

	web_url("Review item", 
		"URL=http://172.16.44.19/oc/index.php?route=product/product/review&product_id=30", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://172.16.44.19/oc/index.php?route=product/product&path=33&product_id=30", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("__atuvc=9%7C15%2C15%7C16%2C0%7C17%2C1%7C18%2C4%7C19; DOMAIN=172.16.44.19");
	web_add_cookie("__atuvs=5912eee00c3b7afe001; DOMAIN=172.16.44.19");

	web_url("sh.f7354b64245ec78fa8b63827.html", 
		"URL=http://s7.addthis.com/static/sh.f7354b64245ec78fa8b63827.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://172.16.44.19/oc/index.php?route=product/product&path=33&product_id=30", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=http://172.16.44.19/oc/catalog/view/javascript/jquery/colorbox/images/border.png", 
		"Referer=http://172.16.44.19/oc/index.php?route=product/product&path=33&product_id=30", ENDITEM,
		"Url=http://172.16.44.19/oc/catalog/view/javascript/jquery/colorbox/images/loading_background.png",
		"Referer=http://172.16.44.19/oc/index.php?route=product/product&path=33&product_id=30", ENDITEM,
		"Url=http://172.16.44.19/oc/catalog/view/javascript/jquery/colorbox/images/controls.png",
		"Referer=http://172.16.44.19/oc/index.php?route=product/product&path=33&product_id=30", ENDITEM,
		"Url=http://172.16.44.19/oc/catalog/view/javascript/jquery/colorbox/images/loading.gif",
		"Referer=http://172.16.44.19/oc/index.php?route=product/product&path=33&product_id=30", ENDITEM,
		LAST);
//-------------------------------------------------------------


//Client adds chosen item to cart

	web_submit_data("Add to cart", 
		"Action=http://172.16.44.19/oc/index.php?route=checkout/cart/add", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://172.16.44.19/oc/index.php?route=product/product&path=33&product_id=30", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=quantity", "Value=1", ENDITEM, 
		"Name=product_id", "Value=30", ENDITEM, 
		EXTRARES, 
		"Url=catalog/view/theme/default/image/close.png",
		"Referer=http://172.16.44.19/oc/index.php?route=product/product&path=33&product_id=30", ENDITEM,
		"Url=catalog/view/theme/default/image/success.png", 
		"Referer=http://172.16.44.19/oc/index.php?route=product/product&path=33&product_id=30", ENDITEM,
		LAST);
//-------------------------------------------------------------


//Client opens his shopping cart

	web_reg_find("Text=Shopping Cart", 
		LAST);

	lr_think_time(4);

	web_url("Open cart", 
		"URL=http://172.16.44.19/oc/index.php?route=checkout/cart", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://172.16.44.19/oc/index.php?route=product/product&path=33&product_id=30", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=http://m.addthis.com/live/red_lojson/100eng.json?sh=0&ph=1036&ivh=985&dt=3343&pdt=1294&ict=&pct=1&perf=widget%7C1294%7C4931%2Clojson%7C6419%7C0%2Csh%7C6423%7C4%2Csh%7C6425%7C188&cmenu=null&ppd=0&ppl=0&fbe=&xmv=0&xms=0&xmlc=0&jsfw=jquery&jsfwv=jquery-1.7.1&al=men&scr=0&scv=0&apiu=0&ba=1&sid=5912f3c9521c773d&rev=v7.13.0-wp&pub=&dp=172.16.44.19&fp=oc%2Findex.php%3Froute%3Dproduct%2Fproduct%26path%3D33%26product_id%3D30&pfm=1&icns=", "Referer=http://172.16.44.19/oc/index.php?route=product/product&"
		"path=33&product_id=30", ENDITEM, 
		LAST);
//-------------------------------------------------------------


//Client checks out his shopping cart

	web_url("index.php_6", 
		"URL=http://172.16.44.19/oc/index.php?route=checkout/cart/country&country_id=140", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://172.16.44.19/oc/index.php?route=checkout/cart", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		LAST);

	web_reg_find("Text=Checkout", 
		LAST);

	lr_think_time(4);

	web_url("index.php_7", 
		"URL=http://172.16.44.19/oc/index.php?route=checkout/checkout", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://172.16.44.19/oc/index.php?route=checkout/cart", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		LAST);

	web_url("index.php_8", 
		"URL=http://172.16.44.19/oc/index.php?route=checkout/payment_address", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://172.16.44.19/oc/index.php?route=checkout/checkout", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		LAST);

	web_url("index.php_9", 
		"URL=http://172.16.44.19/oc/index.php?route=checkout/checkout/country&country_id=222", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://172.16.44.19/oc/index.php?route=checkout/checkout", 
		"Snapshot=t17.inf", 
		"Mode=HTML", 
		LAST);

	web_submit_data("index.php_10", 
		"Action=http://172.16.44.19/oc/index.php?route=checkout/payment_address/validate", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://172.16.44.19/oc/index.php?route=checkout/checkout", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=payment_address", "Value=existing", ENDITEM, 
		"Name=address_id", "Value=764", ENDITEM, 
		"Name=firstname", "Value=", ENDITEM, 
		"Name=lastname", "Value=", ENDITEM, 
		"Name=company", "Value=", ENDITEM, 
		"Name=company_id", "Value=", ENDITEM, 
		"Name=address_1", "Value=", ENDITEM, 
		"Name=address_2", "Value=", ENDITEM, 
		"Name=city", "Value=", ENDITEM, 
		"Name=postcode", "Value=", ENDITEM, 
		"Name=country_id", "Value=222", ENDITEM, 
		"Name=zone_id", "Value=", ENDITEM, 
		LAST);

	web_url("index.php_11", 
		"URL=http://172.16.44.19/oc/index.php?route=checkout/payment_address", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://172.16.44.19/oc/index.php?route=checkout/checkout", 
		"Snapshot=t19.inf", 
		"Mode=HTML", 
		LAST);

	web_url("index.php_12", 
		"URL=http://172.16.44.19/oc/index.php?route=checkout/shipping_address", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://172.16.44.19/oc/index.php?route=checkout/checkout", 
		"Snapshot=t20.inf", 
		"Mode=HTML", 
		LAST);

	web_url("index.php_13", 
		"URL=http://172.16.44.19/oc/index.php?route=checkout/checkout/country&country_id=140", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://172.16.44.19/oc/index.php?route=checkout/checkout", 
		"Snapshot=t21.inf", 
		"Mode=HTML", 
		LAST);

	web_url("index.php_14", 
		"URL=http://172.16.44.19/oc/index.php?route=checkout/checkout/country&country_id=140", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://172.16.44.19/oc/index.php?route=checkout/checkout", 
		"Snapshot=t22.inf", 
		"Mode=HTML", 
		LAST);

	web_submit_data("index.php_15", 
		"Action=http://172.16.44.19/oc/index.php?route=checkout/shipping_address/validate", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://172.16.44.19/oc/index.php?route=checkout/checkout", 
		"Snapshot=t23.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=shipping_address", "Value=existing", ENDITEM, 
		"Name=address_id", "Value=764", ENDITEM, 
		"Name=firstname", "Value=", ENDITEM, 
		"Name=lastname", "Value=", ENDITEM, 
		"Name=company", "Value=", ENDITEM, 
		"Name=address_1", "Value=", ENDITEM, 
		"Name=address_2", "Value=", ENDITEM, 
		"Name=city", "Value=", ENDITEM, 
		"Name=postcode", "Value=md2020", ENDITEM, 
		"Name=country_id", "Value=140", ENDITEM, 
		"Name=zone_id", "Value=2182", ENDITEM, 
		LAST);

	web_url("index.php_16", 
		"URL=http://172.16.44.19/oc/index.php?route=checkout/payment_address", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://172.16.44.19/oc/index.php?route=checkout/checkout", 
		"Snapshot=t24.inf", 
		"Mode=HTML", 
		LAST);

	web_url("index.php_17", 
		"URL=http://172.16.44.19/oc/index.php?route=checkout/shipping_method", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://172.16.44.19/oc/index.php?route=checkout/checkout", 
		"Snapshot=t25.inf", 
		"Mode=HTML", 
		LAST);

	web_url("index.php_18", 
		"URL=http://172.16.44.19/oc/index.php?route=checkout/checkout/country&country_id=140", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://172.16.44.19/oc/index.php?route=checkout/checkout", 
		"Snapshot=t26.inf", 
		"Mode=HTML", 
		LAST);

	web_url("index.php_19", 
		"URL=http://172.16.44.19/oc/index.php?route=checkout/shipping_address", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://172.16.44.19/oc/index.php?route=checkout/checkout", 
		"Snapshot=t27.inf", 
		"Mode=HTML", 
		LAST);

	web_url("index.php_20", 
		"URL=http://172.16.44.19/oc/index.php?route=checkout/checkout/country&country_id=140", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://172.16.44.19/oc/index.php?route=checkout/checkout", 
		"Snapshot=t28.inf", 
		"Mode=HTML", 
		LAST);

	web_submit_data("index.php_21", 
		"Action=http://172.16.44.19/oc/index.php?route=checkout/shipping_method/validate", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://172.16.44.19/oc/index.php?route=checkout/checkout", 
		"Snapshot=t29.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=shipping_method", "Value=flat.flat", ENDITEM, 
		"Name=comment", "Value=", ENDITEM, 
		LAST);

	web_url("index.php_22", 
		"URL=http://172.16.44.19/oc/index.php?route=checkout/payment_method", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://172.16.44.19/oc/index.php?route=checkout/checkout", 
		"Snapshot=t30.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(5);

	web_submit_data("index.php_23", 
		"Action=http://172.16.44.19/oc/index.php?route=checkout/payment_method/validate", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://172.16.44.19/oc/index.php?route=checkout/checkout", 
		"Snapshot=t31.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=payment_method", "Value=cod", ENDITEM, 
		"Name=comment", "Value=", ENDITEM, 
		"Name=agree", "Value=1", ENDITEM, 
		LAST);

	web_url("index.php_24", 
		"URL=http://172.16.44.19/oc/index.php?route=checkout/confirm", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://172.16.44.19/oc/index.php?route=checkout/checkout", 
		"Snapshot=t32.inf", 
		"Mode=HTML", 
		LAST);

	web_url("index.php_25", 
		"URL=http://172.16.44.19/oc/index.php?route=payment/cod/confirm", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://172.16.44.19/oc/index.php?route=checkout/checkout", 
		"Snapshot=t33.inf", 
		"Mode=HTML", 
		LAST);

	web_reg_find("Text=Your Order Has Been Processed!", 
		LAST);

	lr_think_time(4);

	web_url("index.php_26", 
		"URL=http://172.16.44.19/oc/index.php?route=checkout/success", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://172.16.44.19/oc/index.php?route=checkout/checkout", 
		"Snapshot=t34.inf", 
		"Mode=HTML", 
		LAST);
//-------------------------------------------------------------


//Client moves to home page

	web_reg_find("Text=Your Store", 
		LAST);

	web_link("Home_3", 
		"Text=Home", 
		"Ordinal=1", 
		"Snapshot=t35.inf", 
		LAST);
//-------------------------------------------------------------


//Client logs out

	web_reg_find("Text=Account Logout", 
		LAST);

	web_link("Logout", 
		"Text=Logout", 
		"Snapshot=t36.inf", 
		LAST);
//-------------------------------------------------------------


//Client moves to home page

	web_reg_find("Text=Your Store", 
		LAST);

	lr_think_time(5);

	web_link("Home_4", 
		"Text=Home", 
		"Ordinal=1", 
		"Snapshot=t37.inf", 
		LAST);
//-------------------------------------------------------------


	return 0;
}