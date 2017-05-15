//"'''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''
//" Script Title       : 
//"                      
//" Script Date        : Wed May 10 11:11:35 2017
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
			snapshot : 't1.inf'
		}
	);

	web.addCookie('currency=EUR; DOMAIN=172.16.44.19');

	web.addCookie('__atuvc=9%7C15%2C15%7C16%2C0%7C17%2C1%7C18; DOMAIN=172.16.44.19');

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
			snapshot : 't2.inf', 
			mode : 'HTML', 
			extraRes :  [
				{url : 'catalog/view/theme/default/image/loading.gif'},
				{url : 'catalog/view/theme/default/image/button-search.png'},
				{url : 'catalog/view/theme/default/image/button-previous.png'},
				{url : 'catalog/view/theme/default/image/button-next.png'},
				{url : 'catalog/view/theme/default/image/arrow-down.png'},
				{url : 'catalog/view/theme/default/image/menu.png'},
				{url : 'catalog/view/theme/default/image/background.png'},
				{url : 'catalog/view/theme/default/image/button.png'},
				{url : 'catalog/view/theme/default/image/bullets.png'},
				{url : 'catalog/view/theme/default/image/arrows.png'}
			]
		}
	);

	web.regFind(
		{
			text : 'Cameras'
		}
	);

	lr.thinkTime(6);
	web.link(
		{
			name : 'Cameras', 
			text : 'Cameras', 
			snapshot : 't3.inf', 
			extraRes :  [
				{url : 'catalog/view/theme/default/image/add.png', referer : 'http://172.16.44.19/oc/index.php?route=product/category&path=33'}
			]
		}
	);

	lr.thinkTime(9);
	web.submitData(
		{
			name : 'index.php', 
			action : 'http://172.16.44.19/oc/index.php?route=product/compare/add', 
			method : 'POST', 
			recContentType : 'text/html', 
			referer : 'http://172.16.44.19/oc/index.php?route=product/category&path=33', 
			snapshot : 't4.inf', 
			mode : 'HTML', 
			itemData :  [
				{name : 'product_id', value : '30'}
			],
			extraRes :  [
				{url : 'catalog/view/theme/default/image/close.png', referer : 'http://172.16.44.19/oc/index.php?route=product/category&path=33'},
				{url : 'catalog/view/theme/default/image/success.png', referer : 'http://172.16.44.19/oc/index.php?route=product/category&path=33'}
			]
		}
	);

	lr.thinkTime(4);
	web.submitData(
		{
			name : 'index.php_2', 
			action : 'http://172.16.44.19/oc/index.php?route=product/compare/add', 
			method : 'POST', 
			recContentType : 'text/html', 
			referer : 'http://172.16.44.19/oc/index.php?route=product/category&path=33', 
			snapshot : 't5.inf', 
			mode : 'HTML', 
			itemData :  [
				{name : 'product_id', value : '31'}
			]
		}
	);

	web.regFind(
		{
			text : 'Product Comparison'
		}
	);

	web.url(
		{
			name : 'index.php_3', 
			url : 'http://172.16.44.19/oc/index.php?route=product/compare', 
			resource : 0, 
			recContentType : 'text/html', 
			referer : 'http://172.16.44.19/oc/index.php?route=product/category&path=33', 
			snapshot : 't6.inf', 
			mode : 'HTML'
		}
	);

	web.setSocketsOption('SSL_VERSION', '2&3');

	web.addCookie('MC1=GUID=605b1210a00d984c98b65aa1bb3f1fe4&HASH=1012&LV=201612&V=4&LU=1482491531276; DOMAIN=iecvlist.microsoft.com');

	web.addCookie('A=I&I=AxUFAAAAAAA/CgAAw19EUVpKI2axcHutFCiCJA!!&V=4; DOMAIN=iecvlist.microsoft.com');

	web.addCookie('MSFPC=ID=605b1210a00d984c98b65aa1bb3f1fe4&CS=3&LV=201612&V=1; DOMAIN=iecvlist.microsoft.com');

	web.addCookie('SRCHD=AF=NOFORM; DOMAIN=iecvlist.microsoft.com');

	web.addCookie('SRCHUSR=DOB=20170102; DOMAIN=iecvlist.microsoft.com');

	web.addCookie('MUID=2966A66248FA6A192AC5AC364CFA6C73; DOMAIN=iecvlist.microsoft.com');

	web.addCookie('MC1=GUID=605b1210a00d984c98b65aa1bb3f1fe4&HASH=1012&LV=201612&V=4&LU=1482491531276; DOMAIN=r20swj13mr.microsoft.com');

	web.addCookie('A=I&I=AxUFAAAAAAA/CgAAw19EUVpKI2axcHutFCiCJA!!&V=4; DOMAIN=r20swj13mr.microsoft.com');

	web.addCookie('MSFPC=ID=605b1210a00d984c98b65aa1bb3f1fe4&CS=3&LV=201612&V=1; DOMAIN=r20swj13mr.microsoft.com');

	web.addCookie('SRCHD=AF=NOFORM; DOMAIN=r20swj13mr.microsoft.com');

	web.addCookie('SRCHUSR=DOB=20170102; DOMAIN=r20swj13mr.microsoft.com');

	web.addCookie('MUID=2966A66248FA6A192AC5AC364CFA6C73; DOMAIN=r20swj13mr.microsoft.com');

	web.url(
		{
			name : 'iecompatviewlist.xml', 
			url : 'https://iecvlist.microsoft.com/IE11/1479242656000/iecompatviewlist.xml', 
			resource : 0, 
			recContentType : 'text/xml', 
			referer : '', 
			snapshot : 't7.inf', 
			mode : 'HTML', 
			extraRes :  [
				{url : 'https://r20swj13mr.microsoft.com/ieblocklist/v1/urlblockindex.bin', referer : ''}
			]
		}
	);

	web.regFind(
		{
			text : 'Your Store'
		}
	);

	lr.thinkTime(5);
	web.url(
		{
			name : 'index.php_4', 
			url : 'http://172.16.44.19/oc/index.php?route=common/home', 
			resource : 0, 
			recContentType : 'text/html', 
			referer : 'http://172.16.44.19/oc/index.php?route=product/compare', 
			snapshot : 't8.inf', 
			mode : 'HTML'
		}
	);

	return 0;
}

