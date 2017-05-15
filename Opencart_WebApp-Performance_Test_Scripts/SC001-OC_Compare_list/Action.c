Action()
{
	web_add_cookie("currency=EUR; DOMAIN=172.16.44.19");
	web_add_cookie("__atuvc=9%7C15%2C15%7C16%2C0%7C17%2C1%7C18; DOMAIN=172.16.44.19");
//-------------------------------------------------------------


//Guest opens home page

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
//-------------------------------------------------------------


//Guest opens camera category

	web_reg_find("Text=Cameras", 
		LAST);

	lr_think_time(6);

	web_link("Cameras Category Page", 
		"Text=Cameras", 
		"Snapshot=t3.inf", 
		EXTRARES, 
		"Url=catalog/view/theme/default/image/add.png", 
		"Referer=http://172.16.44.19/oc/index.php?route=product/category&path=33", ENDITEM,
		LAST);
//-------------------------------------------------------------


//Guest adds first item to compare list

	lr_think_time(9);
	
	lr_start_transaction("Add to compare list");

	web_submit_data("Adds first item to compare list", 
		"Action=http://172.16.44.19/oc/index.php?route=product/compare/add", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://172.16.44.19/oc/index.php?route=product/category&path=33", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=product_id", "Value=30", ENDITEM, 
		EXTRARES, 
		"Url=catalog/view/theme/default/image/close.png",
		"Referer=http://172.16.44.19/oc/index.php?route=product/category&path=33", ENDITEM,
		"Url=catalog/view/theme/default/image/success.png", 
		"Referer=http://172.16.44.19/oc/index.php?route=product/category&path=33", ENDITEM,
		LAST);
	
	lr_end_transaction("Add to compare list", LR_AUTO);

//-------------------------------------------------------------


//Guest adds second item to compare list	

	lr_think_time(4);

	web_submit_data("Adds first item to compare list", 
		"Action=http://172.16.44.19/oc/index.php?route=product/compare/add", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://172.16.44.19/oc/index.php?route=product/category&path=33", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=product_id", "Value=31", ENDITEM, 
		LAST);
//-------------------------------------------------------------


//Guest opens product compare page

	web_reg_find("Text=Product Comparison", 
		LAST);

	web_url("Product Comparasion Page", 
		"URL=http://172.16.44.19/oc/index.php?route=product/compare", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://172.16.44.19/oc/index.php?route=product/category&path=33", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		LAST);
//-------------------------------------------------------------


//Guest moves to the home page

	web_reg_find("Text=Your Store", 
		LAST);

	lr_think_time(5);

	web_url("Home Page", 
		"URL=http://172.16.44.19/oc/index.php?route=common/home", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://172.16.44.19/oc/index.php?route=product/compare", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		LAST);
//-------------------------------------------------------------

	return 0;
}