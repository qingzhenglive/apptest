package com.pages;

import com.utils.Actions;

import org.openqa.selenium.By;
import org.openqa.selenium.WebElement;
import org.openqa.selenium.support.FindBy;
import org.openqa.selenium.support.PageFactory;

import io.appium.java_client.android.AndroidDriver;

public class MePage {
    //"我"
    @FindBy(xpath = "//*[@text='我']")
    private WebElement bar_me;
    //“点击登录”
    @FindBy(id = "iv_head_sculpture")
    private WebElement img_clicklogin;
    //收藏
    @FindBy(name = "收藏")
    private WebElement img_collect;
    //个人中心
    @FindBy(name = "个人中心")
    private WebElement btn_personalCenter;
    AndroidDriver driver;
    Actions action;
    public MePage(AndroidDriver driver){
        this.driver=driver;
        PageFactory.initElements(driver,this);//与@FindBy同时出现的
        action=new Actions(driver);
    }
    public  WebElement geteElement(WebElement name){
        return name;
    }

}
