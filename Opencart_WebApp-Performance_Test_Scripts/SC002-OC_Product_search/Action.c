Action()
{

	web_add_cookie("currency=EUR; DOMAIN=172.16.44.19");
	web_add_cookie("__atuvc=9%7C15%2C15%7C16%2C0%7C17%2C1%7C18%2C2%7C19; DOMAIN=172.16.44.19");
	web_add_cookie("language=en; DOMAIN=172.16.44.19");
//-------------------------------------------------------------


/*Correlation comment - Do not change!  Original value='product_id=43' Name ='Item_Id' Type ='Manual'*/
	web_reg_save_param_regexp(
		"ParamName=Item_Id",
		"RegExp=amp;(.*?)\"><img\\ src",
		"NotFound=error",
		"Ordinal=ALL",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/oc/*",
		LAST);
//-------------------------------------------------------------


//Guest opens home page

	web_reg_find("Text=Your Store", 
		LAST);
		
	web_url("Home_Page", 
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
//-------------------------------------------------------------


//Guest opens search form

	web_reg_find("Text=Search", 
		LAST);

	web_url("Search_Page",
		"URL=http://172.16.44.19/oc/index.php?route=product/search",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=http://172.16.44.19/oc/",
		"Snapshot=t3.inf",
		"Mode=HTML",
		LAST);

	lr_think_time(4);
//-------------------------------------------------------------


//Guest submits a search request with random prefiled item
	
	web_reg_find("Text=Search - {search_items}", 
	LAST);
	
	lr_start_transaction("Search");

	web_url("Search_for_a_{search_items}",
		"URL=http://172.16.44.19/oc/index.php?route=product/search&search={search_items}",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=http://172.16.44.19/oc/index.php?route=product/search",
		"Snapshot=t4.inf",
		"Mode=HTML",
		EXTRARES,
		"URL=catalog/view/theme/default/image/add.png",
		"Referer=http://172.16.44.19/oc/index.php?route=product/search&search=mac", ENDITEM,
		LAST);
	
	lr_end_transaction("Search", LR_AUTO);
	
	lr_think_time(4);
	
//-------------------------------------------------------------


//Guest choses a random product from search result

	web_link("Choose_Item",
		"Snapshot=t5.inf",
		EXTRARES,
		"URL=catalog/view/theme/default/image/tab.png",
		"Referer=http://172.16.44.19/oc/index.php?route=product/product&{Item_Id}&search={search_items}", ENDITEM,
		LAST);

	web_url("Review_Item",
		"URL=http://172.16.44.19/oc/index.php?route=product/product/review&{Item_Id}",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=http://172.16.44.19/oc/index.php?route=product/product&{Item_Id}&search={search_items}",
		"Snapshot=t6.inf",
		"Mode=HTML",
		LAST);
//-------------------------------------------------------------


//Guest moves to home page

	web_reg_find("Text=Your Store", 
		LAST);

	web_url("Home_Page",
		"URL=http://172.16.44.19/oc/index.php?route=common/home",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=http://172.16.44.19/oc/index.php?route=product/product&{Item_Id}&search={search_items}",
		"Snapshot=t8.inf",
		"Mode=HTML",
		LAST);
//-------------------------------------------------------------

	return 0;
}