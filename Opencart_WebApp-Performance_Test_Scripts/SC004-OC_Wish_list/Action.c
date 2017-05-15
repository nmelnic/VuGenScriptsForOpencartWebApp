Action()
{

	web_add_cookie("currency=EUR; DOMAIN=172.16.44.19");
	web_add_cookie("__atuvc=9%7C15%2C15%7C16%2C0%7C17%2C1%7C18%2C4%7C19; DOMAIN=172.16.44.19");
	web_add_cookie("language=en; DOMAIN=172.16.44.19");
//-------------------------------------------------------------

	//Client opens home page
	
	web_reg_find("Text=Your Store", 
		LAST);

	web_url("Home_Page", 
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
//-------------------------------------------------------------

//Client opens login form
	
	web_reg_find("Text=Account Login", 
		LAST);

	web_link("Login_Form", 
		"Text=login", 
		"Snapshot=t2.inf", 
		LAST);
//-------------------------------------------------------------	
	
//Client fills and submits his credentials
	
       lr_start_transaction("Login");

	web_reg_find("Text=My Account", 
		LAST);

	web_submit_data("Login", 
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

	lr_end_transaction("Login", LR_AUTO);
//-------------------------------------------------------------
	
//Client navigates to the home page
      
	web_reg_find("Text=Your Store", 
		LAST);

	web_link("Home_Page", 
		"Text=Home", 
		"Ordinal=1", 
		"Snapshot=t4.inf", 
		LAST);
//-------------------------------------------------------------
      
//Client chooses a product category
      
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
 //-------------------------------------------------------------     
      
//Client chooses a product

	web_reg_find("Text=iPod Nano", 
		LAST);

	lr_think_time(7);
	
	web_link("iPod Nano", 
		"Text=iPod Nano", 
		"Snapshot=t7.inf", 
		LAST);
//-------------------------------------------------------------
	
//Client adds chosen produc to wish list

	lr_think_time(4);
	
	web_submit_data("Add to wish list", 
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
//-------------------------------------------------------------

//Client opens his wish list

	web_reg_find("Text=My Wish List", 
		LAST);
	
	lr_think_time(4);
	
	web_url("Wish List", 
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
//-------------------------------------------------------------

//Client adds product to cart

	web_submit_data("Add to cart", 
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
//-------------------------------------------------------------

//Client moves to his account

	web_reg_find("Text=My Account", 
		LAST);

	lr_think_time(4);
	
	web_url("From wish list to my account", 
		"URL=http://172.16.44.19/oc/index.php?route=account/account", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://172.16.44.19/oc/index.php?route=account/wishlist", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		LAST);
//-------------------------------------------------------------

//Client moves to his shopping cart

	web_reg_find("Text=Shopping Cart", 
		LAST);

	web_link("View Cart", 
		"Text=View Cart", 
		"Snapshot=t16.inf", 
		LAST);	
//-------------------------------------------------------------

//Client removes product from his shopping cart

	lr_think_time(4);
	
	web_image("Remove", 
		"Alt=Remove", 
		"Snapshot=t17.inf", 
		LAST);
//-------------------------------------------------------------

//Client moves to home page
	web_reg_find("Text=Your Store", 
		LAST);

	web_link("Home Page", 
		"Text=Home", 
		"Ordinal=1", 
		"Snapshot=t18.inf", 
		LAST);
//-------------------------------------------------------------

//Client opens his wish list

	web_reg_find("Text=My Wish List", 
		LAST);

	lr_think_time(4);
	
	web_link("Wish List (1)", 
		"Text=Wish List (1)", 
		"Snapshot=t19.inf", 
		LAST);
//-------------------------------------------------------------

//Client removes product from his wish list

	web_image("Remove_2", 
		"Alt=Remove", 
		"Snapshot=t20.inf", 
		LAST);
//-------------------------------------------------------------

//Client got redirected to his account

	web_reg_find("Text=My Account", 
		LAST);

	web_link("test1", 
		"Text=test1", 
		"Snapshot=t21.inf", 
		LAST);
//-------------------------------------------------------------

//Clien opens home page

	web_reg_find("Text=Your Store", 
		LAST);

	lr_think_time(5);

	web_link("Home_3", 
		"Text=Home", 
		"Ordinal=1", 
		"Snapshot=t22.inf", 
		LAST);
//-------------------------------------------------------------
	

//Client logs out
	
	web_reg_find("Text=Account Logout", 
		LAST);
	 
       lr_start_transaction("Logout");

	web_link("Logout", 
		"Text=Logout", 
		"Snapshot=t23.inf", 
		LAST);

       lr_end_transaction("Logout", LR_AUTO);
       
//-------------------------------------------------------------
       
//Client moves to home page

	web_reg_find("Text=Your Store", 
		LAST);

	web_link("Home_4", 
		"Text=Home", 
		"Ordinal=1", 
		"Snapshot=t24.inf", 
		LAST);
//-------------------------------------------------------------

	return 0;
}