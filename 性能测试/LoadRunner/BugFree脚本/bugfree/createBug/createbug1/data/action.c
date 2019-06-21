Action()
{

	web_add_cookie("1_product=ed19a46d580cd427bc4d1a363cd580197d78ac65s%3A1%3A%221%22%3B; DOMAIN=10.7.90.119");

	web_add_cookie("pageSize=e37cc0d01a5e29f8fb3ae7ceccc56d9228d79284s%3A2%3A%2220%22%3B; DOMAIN=10.7.90.119");

	web_add_cookie("2_product=ed19a46d580cd427bc4d1a363cd580197d78ac65s%3A1%3A%221%22%3B; DOMAIN=10.7.90.119");

	web_add_cookie("ac-cookie=%5B%7B%22data%22%3A%5B%22user1%22%2C%22user1%5Buser1%5D%22%5D%2C%22value%22%3A%22user1%22%2C%22result%22%3A%22user1%22%7D%2C%7B%22data%22%3A%5B%22user2%22%2C%22user2%5Buser2%5D%22%5D%2C%22value%22%3A%22user2%22%2C%22result%22%3A%22user2%22%7D%5D; DOMAIN=10.7.90.119");

	web_add_cookie("3_product=ed19a46d580cd427bc4d1a363cd580197d78ac65s%3A1%3A%221%22%3B; DOMAIN=10.7.90.119");

	web_add_cookie("language=dfacf804dd6212d70b530775c1186ab4ab2e8670s%3A5%3A%22zh_cn%22%3B; DOMAIN=10.7.90.119");

	web_url("login", 
		"URL=http://10.7.90.119:8032/bugfree3.0.3/index.php/site/login/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/bugfree3.0.3/themes/classic/assets/images/blue/seperate_line.png", ENDITEM, 
		"Url=/bugfree3.0.3/themes/classic/assets/images/blue/logo_login.png", ENDITEM, 
		LAST);

	web_submit_data("login_2", 
		"Action=http://10.7.90.119:8032/bugfree3.0.3/index.php/site/login/", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://10.7.90.119:8032/bugfree3.0.3/index.php/site/login/", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=LoginForm[username]", "Value=user1", ENDITEM, 
		"Name=LoginForm[password]", "Value=111111", ENDITEM, 
		"Name=LoginForm[language]", "Value=zh_cn", ENDITEM, 
		"Name=LoginForm[rememberMe]", "Value=0", ENDITEM, 
		EXTRARES, 
		"Url=/bugfree3.0.3/themes/classic/assets/images/down.gif", "Referer=http://10.7.90.119:8032/bugfree3.0.3/index.php/bug/list/1", ENDITEM, 
		"Url=/bugfree3.0.3/themes/classic/assets/images/active.png", "Referer=http://10.7.90.119:8032/bugfree3.0.3/index.php/bug/list/1", ENDITEM, 
		"Url=/bugfree3.0.3/themes/classic/assets/images//close_div.gif", "Referer=http://10.7.90.119:8032/bugfree3.0.3/index.php/bug/list/1", ENDITEM, 
		"Url=/bugfree3.0.3/assets/50038a0d/jui/css/base/images/ui-icons_222222_256x240.png", "Referer=http://10.7.90.119:8032/bugfree3.0.3/index.php/bug/list/1", ENDITEM, 
		"Url=/bugfree3.0.3/assets/50038a0d/jui/css/base/images/ui-bg_flat_75_ffffff_40x100.png", "Referer=http://10.7.90.119:8032/bugfree3.0.3/index.php/bug/list/1", ENDITEM, 
		"Url=/bugfree3.0.3/assets/50038a0d/jui/css/base/images/ui-bg_highlight-soft_75_cccccc_1x100.png", "Referer=http://10.7.90.119:8032/bugfree3.0.3/index.php/bug/list/1", ENDITEM, 
		"Url=/bugfree3.0.3/assets/bc55afbf/img/page.gif", "Referer=http://10.7.90.119:8032/bugfree3.0.3/index.php/bug/list/1", ENDITEM, 
		LAST);

	web_submit_data("getProductModule", 
		"Action=http://10.7.90.119:8032/bugfree3.0.3/index.php/search/getProductModule", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://10.7.90.119:8032/bugfree3.0.3/index.php/bug/list/1", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=product_id", "Value=1", ENDITEM, 
		"Name=productmodule_id", "Value=0", ENDITEM, 
		LAST);

	web_url("edit", 
		"URL=http://10.7.90.119:8032/bugfree3.0.3/index.php/info/edit?type=bug&action=opened&product_id=1", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.7.90.119:8032/bugfree3.0.3/index.php/bug/list/1", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/bugfree3.0.3/themes/classic/assets/images/active.png", "Referer=http://10.7.90.119:8032/bugfree3.0.3/index.php/info/edit?type=bug&action=opened&product_id=1", ENDITEM, 
		"Url=/bugfree3.0.3/assets/50038a0d/jui/css/base/images/ui-bg_flat_75_ffffff_40x100.png", "Referer=http://10.7.90.119:8032/bugfree3.0.3/index.php/info/edit?type=bug&action=opened&product_id=1", ENDITEM, 
		"Url=/bugfree3.0.3/assets/50038a0d/jui/css/base/images/ui-bg_highlight-soft_75_cccccc_1x100.png", "Referer=http://10.7.90.119:8032/bugfree3.0.3/index.php/info/edit?type=bug&action=opened&product_id=1", ENDITEM, 
		"Url=/bugfree3.0.3/assets/50038a0d/jui/css/base/images/ui-icons_222222_256x240.png", "Referer=http://10.7.90.119:8032/bugfree3.0.3/index.php/info/edit?type=bug&action=opened&product_id=1", ENDITEM, 
		"Url=/bugfree3.0.3/assets/8e4d999e/themes/default/default.css", "Referer=http://10.7.90.119:8032/bugfree3.0.3/index.php/info/edit?type=bug&action=opened&product_id=1", ENDITEM, 
		"Url=/bugfree3.0.3/assets/8e4d999e/themes/default/default.png", "Referer=http://10.7.90.119:8032/bugfree3.0.3/index.php/info/edit?type=bug&action=opened&product_id=1", ENDITEM, 
		"Url=/bugfree3.0.3/assets/93d21f33/indicator.gif", "Referer=http://10.7.90.119:8032/bugfree3.0.3/index.php/info/edit?type=bug&action=opened&product_id=1", ENDITEM, 
		LAST);

	lr_think_time(15);

	web_submit_data("edit_2", 
		"Action=http://10.7.90.119:8032/bugfree3.0.3/index.php/info/edit?type=bug&action=opened&product_id=1", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://10.7.90.119:8032/bugfree3.0.3/index.php/info/edit?type=bug&action=opened&product_id=1", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=BugInfoView[deleted_file_id]", "Value=", ENDITEM, 
		"Name=BugInfoView[lock_version]", "Value=", ENDITEM, 
		"Name=BugInfoView[product_id]", "Value=1", ENDITEM, 
		"Name=isPageDirty", "Value=1", ENDITEM, 
		"Name=templateTitle", "Value=", ENDITEM, 
		"Name=BugInfoView[title]", "Value=111", ENDITEM, 
		"Name=layer1_module", "Value=0", ENDITEM, 
		"Name=BugInfoView[productmodule_id]", "Value=0", ENDITEM, 
		"Name=BugInfoView[assign_to_name]", "Value=user1", ENDITEM, 
		"Name=BugInfoView[mail_to]", "Value=", ENDITEM, 
		"Name=BugInfoView[severity]", "Value=1", ENDITEM, 
		"Name=BugInfoView[priority]", "Value=", ENDITEM, 
		"Name=Custom[BugType]", "Value=代码错误", ENDITEM, 
		"Name=Custom[HowFound]", "Value=功能测试", ENDITEM, 
		"Name=Custom[BugOS]", "Value=", ENDITEM, 
		"Name=Custom[BugBrowser]", "Value=", ENDITEM, 
		"Name=Custom[OpenedBuild]", "Value=111", ENDITEM, 
		"Name=Custom[ResolvedBuild]", "Value=", ENDITEM, 
		"Name=Custom[BugSubStatus]", "Value=", ENDITEM, 
		"Name=Custom[BugMachine]", "Value=", ENDITEM, 
		"Name=Custom[BugKeyword]", "Value=", ENDITEM, 
		"Name=BugInfoView[related_bug]", "Value=", ENDITEM, 
		"Name=BugInfoView[related_case]", "Value=", ENDITEM, 
		"Name=BugInfoView[related_result]", "Value=", ENDITEM, 
		"Name=attachment_file[]", "Value=", "File=Yes", ENDITEM, 
		"Name=BugInfoView[action_note]", "Value=", ENDITEM, 
		"Name=BugInfoView[repeat_step]", "Value=[步骤]<br />\r\n1.<br />\r\n2.<br />\r\n<br />\r\n[结果]<br />\r\n<br />\r\n[期望]<br />\r\n<br />\r\n[备注]<br />\r\n<br />", ENDITEM, 
		LAST);

	web_url("BugFree", 
		"URL=http://10.7.90.119:8032/bugfree3.0.3/index.php/bug/list/1", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/bugfree3.0.3/themes/classic/assets/images/down.gif", ENDITEM, 
		"Url=/bugfree3.0.3/themes/classic/assets/images//close_div.gif", ENDITEM, 
		"Url=/bugfree3.0.3/assets/bc55afbf/img/page.gif", ENDITEM, 
		LAST);

	web_url("111", 
		"URL=http://10.7.90.119:8032/bugfree3.0.3/index.php/bug/1180", 
		"TargetFrame=_blank", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		LAST);

	web_url("getPreNextId", 
		"URL=http://10.7.90.119:8032/bugfree3.0.3/index.php/search/getPreNextId?id=1180&type=bug&product_id=1", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.7.90.119:8032/bugfree3.0.3/index.php/bug/1180", 
		"Snapshot=t17.inf", 
		"Mode=HTML", 
		LAST);

	web_submit_data("getProductModule_2", 
		"Action=http://10.7.90.119:8032/bugfree3.0.3/index.php/search/getProductModule", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://10.7.90.119:8032/bugfree3.0.3/index.php/bug/list/1", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=product_id", "Value=1", ENDITEM, 
		"Name=productmodule_id", "Value=0", ENDITEM, 
		LAST);

	return 0;
}