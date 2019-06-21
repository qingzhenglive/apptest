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
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/bugfree3.0.3/themes/classic/assets/images/blue/seperate_line.png", ENDITEM, 
		"Url=/bugfree3.0.3/themes/classic/assets/images/blue/logo_login.png", ENDITEM, 
		LAST);

	lr_start_transaction("login");
    web_reg_find("Search=Body",
		"SaveCount=login_count",
		"Text=Case",
		LAST);
	web_submit_data("login_2", 
		"Action=http://10.7.90.119:8032/bugfree3.0.3/index.php/site/login/", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://10.7.90.119:8032/bugfree3.0.3/index.php/site/login/", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=LoginForm[username]", "Value={username}", ENDITEM, 
		"Name=LoginForm[password]", "Value=111111", ENDITEM, 
		"Name=LoginForm[language]", "Value=zh_cn", ENDITEM, 
		"Name=LoginForm[rememberMe]", "Value=0", ENDITEM, 
		EXTRARES, 
		"Url=/bugfree3.0.3/themes/classic/assets/images/down.gif", "Referer=http://10.7.90.119:8032/bugfree3.0.3/index.php/bug/list/1", ENDITEM, 
		"Url=/bugfree3.0.3/themes/classic/assets/images/active.png", "Referer=http://10.7.90.119:8032/bugfree3.0.3/index.php/bug/list/1", ENDITEM, 
		"Url=/bugfree3.0.3/themes/classic/assets/images//close_div.gif", "Referer=http://10.7.90.119:8032/bugfree3.0.3/index.php/bug/list/1", ENDITEM, 
		"Url=/bugfree3.0.3/assets/50038a0d/jui/css/base/images/ui-bg_highlight-soft_75_cccccc_1x100.png", "Referer=http://10.7.90.119:8032/bugfree3.0.3/index.php/bug/list/1", ENDITEM, 
		"Url=/bugfree3.0.3/assets/50038a0d/jui/css/base/images/ui-bg_flat_75_ffffff_40x100.png", "Referer=http://10.7.90.119:8032/bugfree3.0.3/index.php/bug/list/1", ENDITEM, 
		"Url=/bugfree3.0.3/assets/50038a0d/jui/css/base/images/ui-icons_222222_256x240.png", "Referer=http://10.7.90.119:8032/bugfree3.0.3/index.php/bug/list/1", ENDITEM, 
		"Url=/bugfree3.0.3/assets/bc55afbf/img/page.gif", "Referer=http://10.7.90.119:8032/bugfree3.0.3/index.php/bug/list/1", ENDITEM, 
		LAST);

	lr_end_transaction("login", LR_AUTO);
//检查是否登陆成功
if(atoi(lr_eval_string("{login_count}"))>0)
	lr_end_transaction("login", LR_PASS);
else		
	lr_end_transaction("login", LR_FAIL)；

	lr_end_transaction("login", LR_AUTO);

	web_submit_data("getProductModule", 
		"Action=http://10.7.90.119:8032/bugfree3.0.3/index.php/search/getProductModule", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://10.7.90.119:8032/bugfree3.0.3/index.php/bug/list/1", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=product_id", "Value=1", ENDITEM, 
		"Name=productmodule_id", "Value=0", ENDITEM, 
		LAST);

	web_url("1", 
		"URL=http://10.7.90.119:8032/bugfree3.0.3/index.php/case/list/1", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.7.90.119:8032/bugfree3.0.3/index.php/bug/list/1", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		LAST);

	web_submit_data("getProductModule_2", 
		"Action=http://10.7.90.119:8032/bugfree3.0.3/index.php/search/getProductModule", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://10.7.90.119:8032/bugfree3.0.3/index.php/case/list/1", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=product_id", "Value=1", ENDITEM, 
		"Name=productmodule_id", "Value=0", ENDITEM, 
		LAST);

	

	web_url("edit", 
		"URL=http://10.7.90.119:8032/bugfree3.0.3/index.php/info/edit?type=case&action=opened&product_id=1", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.7.90.119:8032/bugfree3.0.3/index.php/case/list/1", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/bugfree3.0.3/assets/50038a0d/jui/css/base/images/ui-bg_flat_75_ffffff_40x100.png", "Referer=http://10.7.90.119:8032/bugfree3.0.3/index.php/info/edit?type=case&action=opened&product_id=1", ENDITEM, 
		"Url=/bugfree3.0.3/assets/50038a0d/jui/css/base/images/ui-bg_highlight-soft_75_cccccc_1x100.png", "Referer=http://10.7.90.119:8032/bugfree3.0.3/index.php/info/edit?type=case&action=opened&product_id=1", ENDITEM, 
		"Url=/bugfree3.0.3/assets/50038a0d/jui/css/base/images/ui-icons_222222_256x240.png", "Referer=http://10.7.90.119:8032/bugfree3.0.3/index.php/info/edit?type=case&action=opened&product_id=1", ENDITEM, 
		"Url=/bugfree3.0.3/assets/8e4d999e/themes/default/default.css", "Referer=http://10.7.90.119:8032/bugfree3.0.3/index.php/info/edit?type=case&action=opened&product_id=1", ENDITEM, 
		"Url=/bugfree3.0.3/assets/8e4d999e/themes/default/default.png", "Referer=http://10.7.90.119:8032/bugfree3.0.3/index.php/info/edit?type=case&action=opened&product_id=1", ENDITEM, 
		"Url=/bugfree3.0.3/assets/93d21f33/indicator.gif", "Referer=http://10.7.90.119:8032/bugfree3.0.3/index.php/info/edit?type=case&action=opened&product_id=1", ENDITEM, 
		LAST);

	lr_think_time(19);
lr_start_transaction("edit");
web_reg_find("Search=Body",
		"SaveCount=edit_count",
		"Text=Case标题",
		LAST);
	web_submit_data("edit_2", 
		"Action=http://10.7.90.119:8032/bugfree3.0.3/index.php/info/edit?type=case&action=opened&product_id=1", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://10.7.90.119:8032/bugfree3.0.3/index.php/info/edit?type=case&action=opened&product_id=1", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=CaseInfoView[deleted_file_id]", "Value=", ENDITEM, 
		"Name=CaseInfoView[lock_version]", "Value=", ENDITEM, 
		"Name=CaseInfoView[product_id]", "Value=1", ENDITEM, 
		"Name=isPageDirty", "Value=1", ENDITEM, 
		"Name=templateTitle", "Value=", ENDITEM, 
		"Name=CaseInfoView[title]", "Value={title}", ENDITEM, 
		"Name=layer1_module", "Value=0", ENDITEM, 
		"Name=CaseInfoView[productmodule_id]", "Value=0", ENDITEM, 
		"Name=CaseInfoView[case_status]", "Value=Active", ENDITEM, 
		"Name=CaseInfoView[assign_to_name]", "Value={assignname}", ENDITEM, 
		"Name=CaseInfoView[mail_to]", "Value=", ENDITEM, 
		"Name=CaseInfoView[priority]", "Value=1", ENDITEM, 
		"Name=Custom[CaseType]", "Value=鍔熻兘", ENDITEM, 
		"Name=Custom[CaseMethod]", "Value=鑷姩鍖栬剼鏈\xAC", ENDITEM, 
		"Name=Custom[CasePlan]", "Value=", ENDITEM, 
		"Name=Custom[ScriptStatus]", "Value=", ENDITEM, 
		"Name=Custom[ScriptedBy]", "Value=", ENDITEM, 
		"Name=Custom[ScriptedDate]", "Value=", ENDITEM, 
		"Name=Custom[ScriptLocation]", "Value=", ENDITEM, 
		"Name=Custom[CaseKeyword]", "Value=", ENDITEM, 
		"Name=Custom[DisplayOrder]", "Value=0", ENDITEM, 
		"Name=CaseInfoView[related_bug]", "Value=", ENDITEM, 
		"Name=CaseInfoView[related_case]", "Value=", ENDITEM, 
		"Name=attachment_file[]", "Value=", "File=Yes", ENDITEM, 
		"Name=CaseInfoView[action_note]", "Value=", ENDITEM, 
		"Name=CaseInfoView[case_step]", "Value=[姝ラ]<br />\r\n1.ccccccccccc<br />\r\n2.<br />\r\n<br />\r\n[楠岃瘉]<br />\r\n<br />\r\n[澶囨敞]<br />\r\n<br />", ENDITEM, 
		LAST);

	lr_end_transaction("edit", LR_AUTO);
    //check
if(atoi(lr_eval_string("{edit_count}"))>0)
	{lr_output_message("edit successfully");}	
else		
	{
	lr_error_message("edit falied");
	return 0;
	}
	web_url("BugFree", 
		"URL=http://10.7.90.119:8032/bugfree3.0.3/index.php/case/list/1", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/bugfree3.0.3/themes/classic/assets/images/down.gif", ENDITEM, 
		"Url=/bugfree3.0.3/themes/classic/assets/images//close_div.gif", ENDITEM, 
		"Url=/bugfree3.0.3/assets/bc55afbf/img/page.gif", ENDITEM, 
		LAST);

	web_url("case1", 
		"URL=http://10.7.90.119:8032/bugfree3.0.3/index.php/case/6", 
		"TargetFrame=_blank", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t17.inf", 
		"Mode=HTML", 
		LAST);

	web_submit_data("getProductModule_3", 
		"Action=http://10.7.90.119:8032/bugfree3.0.3/index.php/search/getProductModule", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://10.7.90.119:8032/bugfree3.0.3/index.php/case/list/1", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=product_id", "Value=1", ENDITEM, 
		"Name=productmodule_id", "Value=0", ENDITEM, 
		LAST);

	web_url("getPreNextId", 
		"URL=http://10.7.90.119:8032/bugfree3.0.3/index.php/search/getPreNextId?id=6&type=case&product_id=1", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.7.90.119:8032/bugfree3.0.3/index.php/case/6", 
		"Snapshot=t19.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}