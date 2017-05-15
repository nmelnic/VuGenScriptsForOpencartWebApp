//"'''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''
//" Script Title       : 
//"                      
//" Script Date        : Wed May 10 14:05:25 2017
//"                       
//"'''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''

function Action()
{
	web.addCookie('SRCHUID=V=2&GUID=929B6FA041A640DFACCBCF7DC0980197; DOMAIN=www.bing.com');

	web.addCookie('SRCHD=AF=NOFORM; DOMAIN=www.bing.com');

	web.addCookie('SRCHUSR=DOB=20170405; DOMAIN=www.bing.com');

	web.url(
		{
			name : 'favicon.ico', 
			url : 'http://www.bing.com/favicon.ico', 
			resource : 1, 
			recContentType : 'image/x-icon', 
			referer : '', 
			snapshot : 't2.inf'
		}
	);

	web.addCookie('currency=EUR; DOMAIN=172.16.44.19');

	web.addCookie('__atuvc=9%7C15%2C15%7C16%2C0%7C17%2C1%7C18%2C3%7C19; DOMAIN=172.16.44.19');

	web.addCookie('language=en; DOMAIN=172.16.44.19');

	web.addCookie('__atuvs=5912eee00c3b7afe000; DOMAIN=172.16.44.19');

	web.regFind(
		{
			text : 'Your Store'
		}
	);

	web.url(
		{
			name : 'oc', 
			url : 'http://172.16.44.19/oc/', 
			resource : 0, 
			recContentType : 'text/html', 
			referer : '', 
			snapshot : 't3.inf', 
			mode : 'HTML', 
			extraRes :  [
				{url : 'catalog/view/theme/default/image/button-previous.png'},
				{url : 'catalog/view/theme/default/image/button-next.png'},
				{url : 'catalog/view/theme/default/image/button-search.png'},
				{url : 'catalog/view/theme/default/image/menu.png'},
				{url : 'catalog/view/theme/default/image/loading.gif'},
				{url : 'catalog/view/theme/default/image/arrow-down.png'},
				{url : 'catalog/view/theme/default/image/background.png'},
				{url : 'catalog/view/theme/default/image/button.png'},
				{url : 'catalog/view/theme/default/image/bullets.png'},
				{url : 'catalog/view/theme/default/image/arrows.png'}
			]
		}
	);

	web.regFind(
		{
			text : 'Your Store'
		}
	);

	web.link(
		{
			name : 'Home', 
			text : 'Home', 
			snapshot : 't4.inf'
		}
	);

	web.regFind(
		{
			text : 'Account Login'
		}
	);

	lr.thinkTime(7);
	web.link(
		{
			name : 'login', 
			text : 'login', 
			snapshot : 't5.inf'
		}
	);

	web.regFind(
		{
			text : 'My Account'
		}
	);

	web.submitData(
		{
			name : 'index.php', 
			action : 'http://172.16.44.19/oc/index.php?route=account/login', 
			method : 'POST', 
			encType : 'multipart/form-data', 
			recContentType : 'text/html', 
			referer : 'http://172.16.44.19/oc/index.php?route=account/login', 
			snapshot : 't6.inf', 
			mode : 'HTML', 
			itemData :  [
				{name : 'email', value : 'test1@mail.com'},
				{name : 'password', value : 'test1'}
			]
		}
	);

	web.regFind(
		{
			text : 'Your Store'
		}
	);

	web.link(
		{
			name : 'Home_2', 
			text : 'Home', 
			ordinal : '1', 
			snapshot : 't7.inf'
		}
	);

	web.regFind(
		{
			text : 'Cameras'
		}
	);

	web.link(
		{
			name : 'Cameras', 
			text : 'Cameras', 
			snapshot : 't8.inf', 
			extraRes :  [
				{url : 'catalog/view/theme/default/image/add.png', referer : 'http://172.16.44.19/oc/index.php?route=product/category&path=33'}
			]
		}
	);

	web.setSocketsOption('SSL_VERSION', '2&3');

	web.addCookie('MC1=GUID=605b1210a00d984c98b65aa1bb3f1fe4&HASH=1012&LV=201612&V=4&LU=1482491531276; DOMAIN=iecvlist.microsoft.com');

	web.addCookie('A=I&I=AxUFAAAAAAA/CgAAw19EUVpKI2axcHutFCiCJA!!&V=4; DOMAIN=iecvlist.microsoft.com');

	web.addCookie('MSFPC=ID=605b1210a00d984c98b65aa1bb3f1fe4&CS=3&LV=201612&V=1; DOMAIN=iecvlist.microsoft.com');

	web.addCookie('SRCHD=AF=NOFORM; DOMAIN=iecvlist.microsoft.com');

	web.addCookie('SRCHUSR=DOB=20170102; DOMAIN=iecvlist.microsoft.com');

	web.addCookie('MUID=2966A66248FA6A192AC5AC364CFA6C73; DOMAIN=iecvlist.microsoft.com');

	lr.thinkTime(4);
	web.url(
		{
			name : 'iecompatviewlist.xml', 
			url : 'https://iecvlist.microsoft.com/IE11/1479242656000/iecompatviewlist.xml', 
			resource : 0, 
			recContentType : 'text/xml', 
			referer : '', 
			snapshot : 't9.inf', 
			mode : 'HTML'
		}
	);

	web.regFind(
		{
			text : 'Canon EOS 5D'
		}
	);

	web.url(
		{
			name : 'index.php_2', 
			url : 'http://172.16.44.19/oc/index.php?route=product/product&path=33&product_id=30', 
			resource : 0, 
			recContentType : 'text/html', 
			referer : 'http://172.16.44.19/oc/index.php?route=product/category&path=33', 
			snapshot : 't10.inf', 
			mode : 'HTML', 
			extraRes :  [
				{url : 'catalog/view/theme/default/image/tab.png', referer : 'http://172.16.44.19/oc/index.php?route=product/product&path=33&product_id=30'}
			]
		}
	);

	web.url(
		{
			name : 'index.php_3', 
			url : 'http://172.16.44.19/oc/index.php?route=product/product/review&product_id=30', 
			resource : 0, 
			recContentType : 'text/html', 
			referer : 'http://172.16.44.19/oc/index.php?route=product/product&path=33&product_id=30', 
			snapshot : 't11.inf', 
			mode : 'HTML'
		}
	);

	web.addCookie('uvc=9%7C15%2C15%7C16%2C0%7C17%2C1%7C18%2C3%7C19; DOMAIN=s7.addthis.com');

	web.addCookie('di2=aUj~t6Hq; DOMAIN=s7.addthis.com');

	web.addCookie('uid=58ecb5d16bf7095e; DOMAIN=s7.addthis.com');

	web.addCookie('vc=27; DOMAIN=s7.addthis.com');

	web.addCookie('loc=MDAwMDBFVU1EMDAyMjcwMjA4OTAwMDAwMDAwVg==; DOMAIN=s7.addthis.com');

	web.regFind(
		{
			text : 'AddThis Utility Frame'
		}
	);

	web.addCookie('__atuvc=9%7C15%2C15%7C16%2C0%7C17%2C1%7C18%2C4%7C19; DOMAIN=172.16.44.19');

	web.addCookie('__atuvs=5912eee00c3b7afe001; DOMAIN=172.16.44.19');

	web.url(
		{
			name : 'sh.f7354b64245ec78fa8b63827.html', 
			url : 'http://s7.addthis.com/static/sh.f7354b64245ec78fa8b63827.html', 
			resource : 0, 
			recContentType : 'text/html', 
			referer : 'http://172.16.44.19/oc/index.php?route=product/product&path=33&product_id=30', 
			snapshot : 't12.inf', 
			mode : 'HTML', 
			extraRes :  [
				{url : 'http://172.16.44.19/oc/catalog/view/javascript/jquery/colorbox/images/border.png', referer : 'http://172.16.44.19/oc/index.php?route=product/product&path=33&product_id=30'},
				{url : 'http://172.16.44.19/oc/catalog/view/javascript/jquery/colorbox/images/loading_background.png', referer : 'http://172.16.44.19/oc/index.php?route=product/product&path=33&product_id=30'},
				{url : 'http://172.16.44.19/oc/catalog/view/javascript/jquery/colorbox/images/controls.png', referer : 'http://172.16.44.19/oc/index.php?route=product/product&path=33&product_id=30'},
				{url : 'http://172.16.44.19/oc/catalog/view/javascript/jquery/colorbox/images/loading.gif', referer : 'http://172.16.44.19/oc/index.php?route=product/product&path=33&product_id=30'}
			]
		}
	);

	web.submitData(
		{
			name : 'index.php_4', 
			action : 'http://172.16.44.19/oc/index.php?route=checkout/cart/add', 
			method : 'POST', 
			recContentType : 'text/html', 
			referer : 'http://172.16.44.19/oc/index.php?route=product/product&path=33&product_id=30', 
			snapshot : 't13.inf', 
			mode : 'HTML', 
			itemData :  [
				{name : 'quantity', value : '1'},
				{name : 'product_id', value : '30'}
			],
			extraRes :  [
				{url : 'catalog/view/theme/default/image/close.png', referer : 'http://172.16.44.19/oc/index.php?route=product/product&path=33&product_id=30'},
				{url : 'catalog/view/theme/default/image/success.png', referer : 'http://172.16.44.19/oc/index.php?route=product/product&path=33&product_id=30'}
			]
		}
	);

	web.regFind(
		{
			text : 'Shopping Cart'
		}
	);

	web.addCookie('uvc=9%7C15%2C15%7C16%2C0%7C17%2C1%7C18%2C4%7C19; DOMAIN=m.addthis.com');

	web.addCookie('di2=aUj~t6Hq; DOMAIN=m.addthis.com');

	web.addCookie('uid=58ecb5d16bf7095e; DOMAIN=m.addthis.com');

	web.addCookie('vc=27; DOMAIN=m.addthis.com');

	web.addCookie('loc=MDAwMDBFVU1EMDAyMjcwMjA4OTAwMDAwMDAwVg==; DOMAIN=m.addthis.com');

	lr.thinkTime(4);
	web.url(
		{
			name : 'index.php_5', 
			url : 'http://172.16.44.19/oc/index.php?route=checkout/cart', 
			resource : 0, 
			recContentType : 'text/html', 
			referer : 'http://172.16.44.19/oc/index.php?route=product/product&path=33&product_id=30', 
			snapshot : 't14.inf', 
			mode : 'HTML', 
			extraRes :  [
				{url : 'http://m.addthis.com/live/red_lojson/100eng.json?sh=0&ph=1036&ivh=985&dt=3343&pdt=1294&ict=&pct=1&perf=widget%7C1294%7C4931%2Clojson%7C6419%7C0%2Csh%7C6423%7C4%2Csh%7C6425%7C188&cmenu=null&ppd=0&ppl=0&fbe=&xmv=0&xms=0&xmlc=0&jsfw=jquery&jsfwv=jquery-1.7.1&al=men&scr=0&scv=0&apiu=0&ba=1&sid=5912f3c9521c773d&rev=v7.13.0-wp&pub=&dp=172.16.44.19&fp=oc%2Findex.php%3Froute%3Dproduct%2Fproduct%26path%3D33%26product_id%3D30&pfm=1&icns=', referer : 'http://172.16.44.19/oc/index.php?route=product/product&path=33&' + 
		'product_id=30'}
			]
		}
	);

	web.url(
		{
			name : 'index.php_6', 
			url : 'http://172.16.44.19/oc/index.php?route=checkout/cart/country&country_id=140', 
			resource : 0, 
			recContentType : 'text/html', 
			referer : 'http://172.16.44.19/oc/index.php?route=checkout/cart', 
			snapshot : 't15.inf', 
			mode : 'HTML'
		}
	);

	web.regFind(
		{
			text : 'Checkout'
		}
	);

	lr.thinkTime(4);
	web.url(
		{
			name : 'index.php_7', 
			url : 'http://172.16.44.19/oc/index.php?route=checkout/checkout', 
			resource : 0, 
			recContentType : 'text/html', 
			referer : 'http://172.16.44.19/oc/index.php?route=checkout/cart', 
			snapshot : 't16.inf', 
			mode : 'HTML'
		}
	);

	web.url(
		{
			name : 'index.php_8', 
			url : 'http://172.16.44.19/oc/index.php?route=checkout/payment_address', 
			resource : 0, 
			recContentType : 'text/html', 
			referer : 'http://172.16.44.19/oc/index.php?route=checkout/checkout', 
			snapshot : 't17.inf', 
			mode : 'HTML'
		}
	);

	web.url(
		{
			name : 'index.php_9', 
			url : 'http://172.16.44.19/oc/index.php?route=checkout/checkout/country&country_id=222', 
			resource : 0, 
			recContentType : 'text/html', 
			referer : 'http://172.16.44.19/oc/index.php?route=checkout/checkout', 
			snapshot : 't18.inf', 
			mode : 'HTML'
		}
	);

	web.submitData(
		{
			name : 'index.php_10', 
			action : 'http://172.16.44.19/oc/index.php?route=checkout/payment_address/validate', 
			method : 'POST', 
			recContentType : 'text/html', 
			referer : 'http://172.16.44.19/oc/index.php?route=checkout/checkout', 
			snapshot : 't19.inf', 
			mode : 'HTML', 
			itemData :  [
				{name : 'payment_address', value : 'existing'},
				{name : 'address_id', value : '764'},
				{name : 'firstname', value : ''},
				{name : 'lastname', value : ''},
				{name : 'company', value : ''},
				{name : 'company_id', value : ''},
				{name : 'address_1', value : ''},
				{name : 'address_2', value : ''},
				{name : 'city', value : ''},
				{name : 'postcode', value : ''},
				{name : 'country_id', value : '222'},
				{name : 'zone_id', value : ''}
			]
		}
	);

	web.url(
		{
			name : 'index.php_11', 
			url : 'http://172.16.44.19/oc/index.php?route=checkout/payment_address', 
			resource : 0, 
			recContentType : 'text/html', 
			referer : 'http://172.16.44.19/oc/index.php?route=checkout/checkout', 
			snapshot : 't20.inf', 
			mode : 'HTML'
		}
	);

	web.url(
		{
			name : 'index.php_12', 
			url : 'http://172.16.44.19/oc/index.php?route=checkout/shipping_address', 
			resource : 0, 
			recContentType : 'text/html', 
			referer : 'http://172.16.44.19/oc/index.php?route=checkout/checkout', 
			snapshot : 't21.inf', 
			mode : 'HTML'
		}
	);

	web.url(
		{
			name : 'index.php_13', 
			url : 'http://172.16.44.19/oc/index.php?route=checkout/checkout/country&country_id=140', 
			resource : 0, 
			recContentType : 'text/html', 
			referer : 'http://172.16.44.19/oc/index.php?route=checkout/checkout', 
			snapshot : 't22.inf', 
			mode : 'HTML'
		}
	);

	web.url(
		{
			name : 'index.php_14', 
			url : 'http://172.16.44.19/oc/index.php?route=checkout/checkout/country&country_id=140', 
			resource : 0, 
			recContentType : 'text/html', 
			referer : 'http://172.16.44.19/oc/index.php?route=checkout/checkout', 
			snapshot : 't23.inf', 
			mode : 'HTML'
		}
	);

	web.submitData(
		{
			name : 'index.php_15', 
			action : 'http://172.16.44.19/oc/index.php?route=checkout/shipping_address/validate', 
			method : 'POST', 
			recContentType : 'text/html', 
			referer : 'http://172.16.44.19/oc/index.php?route=checkout/checkout', 
			snapshot : 't24.inf', 
			mode : 'HTML', 
			itemData :  [
				{name : 'shipping_address', value : 'existing'},
				{name : 'address_id', value : '764'},
				{name : 'firstname', value : ''},
				{name : 'lastname', value : ''},
				{name : 'company', value : ''},
				{name : 'address_1', value : ''},
				{name : 'address_2', value : ''},
				{name : 'city', value : ''},
				{name : 'postcode', value : 'md2020'},
				{name : 'country_id', value : '140'},
				{name : 'zone_id', value : '2182'}
			]
		}
	);

	web.url(
		{
			name : 'index.php_16', 
			url : 'http://172.16.44.19/oc/index.php?route=checkout/payment_address', 
			resource : 0, 
			recContentType : 'text/html', 
			referer : 'http://172.16.44.19/oc/index.php?route=checkout/checkout', 
			snapshot : 't25.inf', 
			mode : 'HTML'
		}
	);

	web.url(
		{
			name : 'index.php_17', 
			url : 'http://172.16.44.19/oc/index.php?route=checkout/shipping_method', 
			resource : 0, 
			recContentType : 'text/html', 
			referer : 'http://172.16.44.19/oc/index.php?route=checkout/checkout', 
			snapshot : 't26.inf', 
			mode : 'HTML'
		}
	);

	web.url(
		{
			name : 'index.php_18', 
			url : 'http://172.16.44.19/oc/index.php?route=checkout/checkout/country&country_id=140', 
			resource : 0, 
			recContentType : 'text/html', 
			referer : 'http://172.16.44.19/oc/index.php?route=checkout/checkout', 
			snapshot : 't27.inf', 
			mode : 'HTML'
		}
	);

	web.url(
		{
			name : 'index.php_19', 
			url : 'http://172.16.44.19/oc/index.php?route=checkout/shipping_address', 
			resource : 0, 
			recContentType : 'text/html', 
			referer : 'http://172.16.44.19/oc/index.php?route=checkout/checkout', 
			snapshot : 't28.inf', 
			mode : 'HTML'
		}
	);

	web.url(
		{
			name : 'index.php_20', 
			url : 'http://172.16.44.19/oc/index.php?route=checkout/checkout/country&country_id=140', 
			resource : 0, 
			recContentType : 'text/html', 
			referer : 'http://172.16.44.19/oc/index.php?route=checkout/checkout', 
			snapshot : 't29.inf', 
			mode : 'HTML'
		}
	);

	web.submitData(
		{
			name : 'index.php_21', 
			action : 'http://172.16.44.19/oc/index.php?route=checkout/shipping_method/validate', 
			method : 'POST', 
			recContentType : 'text/html', 
			referer : 'http://172.16.44.19/oc/index.php?route=checkout/checkout', 
			snapshot : 't30.inf', 
			mode : 'HTML', 
			itemData :  [
				{name : 'shipping_method', value : 'flat.flat'},
				{name : 'comment', value : ''}
			]
		}
	);

	web.url(
		{
			name : 'index.php_22', 
			url : 'http://172.16.44.19/oc/index.php?route=checkout/payment_method', 
			resource : 0, 
			recContentType : 'text/html', 
			referer : 'http://172.16.44.19/oc/index.php?route=checkout/checkout', 
			snapshot : 't31.inf', 
			mode : 'HTML'
		}
	);

	lr.thinkTime(5);
	web.submitData(
		{
			name : 'index.php_23', 
			action : 'http://172.16.44.19/oc/index.php?route=checkout/payment_method/validate', 
			method : 'POST', 
			recContentType : 'text/html', 
			referer : 'http://172.16.44.19/oc/index.php?route=checkout/checkout', 
			snapshot : 't32.inf', 
			mode : 'HTML', 
			itemData :  [
				{name : 'payment_method', value : 'cod'},
				{name : 'comment', value : ''},
				{name : 'agree', value : '1'}
			]
		}
	);

	web.url(
		{
			name : 'index.php_24', 
			url : 'http://172.16.44.19/oc/index.php?route=checkout/confirm', 
			resource : 0, 
			recContentType : 'text/html', 
			referer : 'http://172.16.44.19/oc/index.php?route=checkout/checkout', 
			snapshot : 't33.inf', 
			mode : 'HTML'
		}
	);

	web.url(
		{
			name : 'index.php_25', 
			url : 'http://172.16.44.19/oc/index.php?route=payment/cod/confirm', 
			resource : 0, 
			recContentType : 'text/html', 
			referer : 'http://172.16.44.19/oc/index.php?route=checkout/checkout', 
			snapshot : 't34.inf', 
			mode : 'HTML'
		}
	);

	web.regFind(
		{
			text : 'Your Order Has Been Processed!'
		}
	);

	lr.thinkTime(4);
	web.url(
		{
			name : 'index.php_26', 
			url : 'http://172.16.44.19/oc/index.php?route=checkout/success', 
			resource : 0, 
			recContentType : 'text/html', 
			referer : 'http://172.16.44.19/oc/index.php?route=checkout/checkout', 
			snapshot : 't35.inf', 
			mode : 'HTML'
		}
	);

	web.regFind(
		{
			text : 'Your Store'
		}
	);

	web.link(
		{
			name : 'Home_3', 
			text : 'Home', 
			ordinal : '1', 
			snapshot : 't36.inf'
		}
	);

	web.regFind(
		{
			text : 'Account Logout'
		}
	);

	web.link(
		{
			name : 'Logout', 
			text : 'Logout', 
			snapshot : 't37.inf'
		}
	);

	web.regFind(
		{
			text : 'Your Store'
		}
	);

	lr.thinkTime(5);
	web.link(
		{
			name : 'Home_4', 
			text : 'Home', 
			ordinal : '1', 
			snapshot : 't38.inf'
		}
	);

	return 0;
}

