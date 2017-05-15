//"'''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''
//" Script Title       : 
//"                      
//" Script Date        : Wed May 10 13:44:05 2017
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
			snapshot : 't10.inf'
		}
	);

	web.addCookie('currency=EUR; DOMAIN=172.16.44.19');

	web.addCookie('__atuvc=9%7C15%2C15%7C16%2C0%7C17%2C1%7C18%2C2%7C19; DOMAIN=172.16.44.19');

	web.addCookie('language=en; DOMAIN=172.16.44.19');

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
			snapshot : 't11.inf', 
			mode : 'HTML', 
			extraRes :  [
				{url : 'catalog/view/theme/default/image/button-next.png'},
				{url : 'catalog/view/theme/default/image/arrow-down.png'},
				{url : 'catalog/view/theme/default/image/menu.png'},
				{url : 'catalog/view/theme/default/image/button-search.png'},
				{url : 'catalog/view/theme/default/image/button-previous.png'},
				{url : 'catalog/view/theme/default/image/loading.gif'},
				{url : 'catalog/view/theme/default/image/button.png'},
				{url : 'catalog/view/theme/default/image/background.png'},
				{url : 'catalog/view/theme/default/image/bullets.png'},
				{url : 'catalog/view/theme/default/image/arrows.png'}
			]
		}
	);

	web.regFind(
		{
			text : 'Search'
		}
	);

	web.url(
		{
			name : 'index.php', 
			url : 'http://172.16.44.19/oc/index.php?route=product/search', 
			resource : 0, 
			recContentType : 'text/html', 
			referer : 'http://172.16.44.19/oc/', 
			snapshot : 't12.inf', 
			mode : 'HTML'
		}
	);

	web.regFind(
		{
			text : 'Search - mac'
		}
	);

	lr.thinkTime(4);
	web.url(
		{
			name : 'index.php_2', 
			url : 'http://172.16.44.19/oc/index.php?route=product/search&search=mac', 
			resource : 0, 
			recContentType : 'text/html', 
			referer : 'http://172.16.44.19/oc/index.php?route=product/search', 
			snapshot : 't13.inf', 
			mode : 'HTML', 
			extraRes :  [
				{url : 'catalog/view/theme/default/image/add.png', referer : 'http://172.16.44.19/oc/index.php?route=product/search&search=mac'}
			]
		}
	);

	web.regFind(
		{
			text : 'MacBook'
		}
	);

	web.link(
		{
			name : 'MacBook', 
			text : 'MacBook', 
			snapshot : 't14.inf', 
			extraRes :  [
				{url : 'catalog/view/theme/default/image/tab.png', referer : 'http://172.16.44.19/oc/index.php?route=product/product&product_id=43&search=mac'}
			]
		}
	);

	web.url(
		{
			name : 'index.php_3', 
			url : 'http://172.16.44.19/oc/index.php?route=product/product/review&product_id=43', 
			resource : 0, 
			recContentType : 'text/html', 
			referer : 'http://172.16.44.19/oc/index.php?route=product/product&product_id=43&search=mac', 
			snapshot : 't15.inf', 
			mode : 'HTML'
		}
	);

	web.addCookie('uvc=9%7C15%2C15%7C16%2C0%7C17%2C1%7C18%2C2%7C19; DOMAIN=s7.addthis.com');

	web.addCookie('di2=aUj~t6Hq; DOMAIN=s7.addthis.com');

	web.addCookie('uid=58ecb5d16bf7095e; DOMAIN=s7.addthis.com');

	web.addCookie('vc=26; DOMAIN=s7.addthis.com');

	web.addCookie('loc=MDAwMDBFVU1EMDAyMjcwMjA4OTAwMDAwMDAwVg==; DOMAIN=s7.addthis.com');

	web.regFind(
		{
			text : 'AddThis Utility Frame'
		}
	);

	web.addCookie('__atuvc=9%7C15%2C15%7C16%2C0%7C17%2C1%7C18%2C3%7C19; DOMAIN=172.16.44.19');

	web.addCookie('__atuvs=5912eee00c3b7afe000; DOMAIN=172.16.44.19');

	web.addCookie('uvc=9%7C15%2C15%7C16%2C0%7C17%2C1%7C18%2C2%7C19; DOMAIN=m.addthis.com');

	web.addCookie('di2=aUj~t6Hq; DOMAIN=m.addthis.com');

	web.addCookie('uid=58ecb5d16bf7095e; DOMAIN=m.addthis.com');

	web.addCookie('vc=26; DOMAIN=m.addthis.com');

	web.addCookie('loc=MDAwMDBFVU1EMDAyMjcwMjA4OTAwMDAwMDAwVg==; DOMAIN=m.addthis.com');

	web.addCookie('uvc=9%7C15%2C15%7C16%2C0%7C17%2C1%7C18%2C3%7C19; DOMAIN=m.addthis.com');

	web.url(
		{
			name : 'sh.f7354b64245ec78fa8b63827.html', 
			url : 'http://s7.addthis.com/static/sh.f7354b64245ec78fa8b63827.html', 
			resource : 0, 
			recContentType : 'text/html', 
			referer : 'http://172.16.44.19/oc/index.php?route=product/product&product_id=43&search=mac', 
			snapshot : 't16.inf', 
			mode : 'HTML', 
			extraRes :  [
				{url : 'http://172.16.44.19/oc/catalog/view/javascript/jquery/colorbox/images/controls.png', referer : 'http://172.16.44.19/oc/index.php?route=product/product&product_id=43&search=mac'},
				{url : 'http://172.16.44.19/oc/catalog/view/javascript/jquery/colorbox/images/border.png', referer : 'http://172.16.44.19/oc/index.php?route=product/product&product_id=43&search=mac'},
				{url : 'http://172.16.44.19/oc/catalog/view/javascript/jquery/colorbox/images/loading.gif', referer : 'http://172.16.44.19/oc/index.php?route=product/product&product_id=43&search=mac'},
				{url : 'http://172.16.44.19/oc/catalog/view/javascript/jquery/colorbox/images/loading_background.png', referer : 'http://172.16.44.19/oc/index.php?route=product/product&product_id=43&search=mac'},
				{url : 'http://m.addthis.com/live/red_lojson/300lo.json?si=5912eee014ee924c&bkl=0&bl=1&pdt=287&sid=5912eee014ee924c&pub=&rev=v7.13.0-wp&ln=en&pc=men&cb=0&ab=-&dp=172.16.44.19&fp=oc%2Findex.php%3Froute%3Dproduct%2Fproduct%26product_id%3D43&fr=oc%2Findex.php%3Froute%3Dproduct%2Fsearch%26search%3Dmac&of=0&pd=0&irt=1&vcl=1&md=0&ct=1&tct=0&abt=0&cdn=0&pi=1&rb=2&gen=100&chr=utf-8&colc=1494413024417&jsl=1&uvs=5912eee00c3b7afe000&skipb=1&callback=addthis.cbs.oln9_66871219817853290', referer : 'http://172.16.44.19/oc/' + 
		'index.php?route=product/product&product_id=43&search=mac'},
				{url : 'http://m.addthis.com/live/red_lojson/100eng.json?sh=1429&ph=1499&ivh=985&dt=17334&pdt=287&ict=&pct=2&perf=widget%7C288%7C4729%2Clojson%7C5213%7C186%2Csh%7C5217%7C6%2Csh%7C5221%7C190&rndr=render_toolbox%7C5440&cmenu=null&ppd=0&ppl=0&fbe=&xmv=0&xms=0&xmlc=0&jsfw=jquery&jsfwv=jquery-1.7.1&al=men&scr=0&scv=0&apiu=0&ba=3&sid=5912eee014ee924c&rev=v7.13.0-wp&pub=&dp=172.16.44.19&fp=oc%2Findex.php%3Froute%3Dproduct%2Fproduct%26product_id%3D43%26search%3Dmac&pfm=1&icns=' + 
		'addthis%2Cemail%2Cprint%2Cfacebook%2Ctwitter', referer : 'http://172.16.44.19/oc/index.php?route=product/product&product_id=43&search=mac'}
			]
		}
	);

	web.setSocketsOption('SSL_VERSION', '2&3');

	web.regFind(
		{
			text : 'Your Store'
		}
	);

	web.url(
		{
			name : 'index.php_4', 
			url : 'http://172.16.44.19/oc/index.php?route=common/home', 
			resource : 0, 
			recContentType : 'text/html', 
			referer : 'http://172.16.44.19/oc/index.php?route=product/product&product_id=43&search=mac', 
			snapshot : 't17.inf', 
			mode : 'HTML'
		}
	);

	return 0;
}

