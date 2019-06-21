package com.pages;

import com.utils.Actions;

import org.openqa.selenium.WebElement;
import org.openqa.selenium.support.FindBy;
import org.openqa.selenium.support.PageFactory;

import io.appium.java_client.android.AndroidDriver;

public class YoujiLoginPage {
    //"我"
   // @FindBy(id = "neet.com.youjidemo:id/tab_icon")
//    @FindBy(id = "neet.com.youjidemo:id/tab_text")
    @FindBy(xpath = "//*[@text='我']")
    private WebElement bar_me;
    //“点击登录”
    @FindBy(id = "iv_head_sculpture")
    private WebElement img_clicklogin;
    //手机号
    @FindBy(id = "et_userPhone")
    private WebElement txt_phone;
    //密码
    @FindBy(id = "et_user_password")
    private WebElement txt_pwssword;
    //登录按钮
    @FindBy(id = "btn_login")
    private  WebElement btn_submit;

    AndroidDriver driver;
    Actions action;
    public YoujiLoginPage(AndroidDriver driver){
        this.driver=driver;
        PageFactory.initElements(driver,this);//与@FindBy同时出现的
        action=new Actions(driver);
    }
    //切换到登陆页面
    public void switchToLoginPage() throws InterruptedException {
        Thread.sleep(5000);
        action.click(bar_me);
        Thread.sleep(5000);
        action.click(img_clicklogin);
    }
    //登录
    public void login(String phoneNumber,String password) throws InterruptedException {
        action.type(txt_phone,phoneNumber);
        action.type(txt_pwssword,password);
        action.click(btn_submit);
    }
}
