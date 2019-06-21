package com.pages;

import com.utils.Actions;

import org.openqa.selenium.By;
import org.openqa.selenium.WebElement;
import org.openqa.selenium.support.FindBy;
import org.openqa.selenium.support.PageFactory;

import io.appium.java_client.android.AndroidDriver;

public class PersonalCenterPage {
    //"我"
    @FindBy(xpath = "//*[@text='我']")
    private WebElement bar_me;
    //"首页"
    @FindBy(xpath = "//*[@text='首页']")
    private WebElement bar_first;
    //个人中心
    //@FindBy(name = "个人中心")
    @FindBy(id = "neet.com.youjidemo:id/btn_personal_center")
    private WebElement btn_personalCenter;
    //编辑资料
   // @FindBy(name = "编辑资料")
    @FindBy(id = "neet.com.youjidemo:id/pc_btn")
    private WebElement btn_editDocument;
    //简介
    @FindBy(id = "neet.com.youjidemo:id/pde_et_introduction")
    private WebElement txt_instruction;
    //生日
    @FindBy(id = "neet.com.youjidemo:id/pde_tv_birthday")
    private WebElement txt_birthday;
    //确定按钮
    @FindBy(id = "neet.com.youjidemo:id/btnSubmit")
    private WebElement btn_confirm;
    //作品
    @FindBy(xpath ="//*[@text='作品']")
    private WebElement btn_works;
//    private WebElement btn_works=getTxt_name("作品");
    //收藏
    //@FindBy(name = "收藏")
    @FindBy(xpath = "//*[@text='收藏']")
    private WebElement btn_collect;
    //粉丝
    @FindBy(xpath = "//*[@text='粉丝']")
    private WebElement btn_fans;
    //返回（个人中心）
    @FindBy(className = "android.widget.ImageButton")
    private WebElement btn_back;
    private  WebElement getTxt_name(String name){
        return driver.findElement(By.name(name));
    }
    AndroidDriver driver;
    Actions action;
    public PersonalCenterPage(AndroidDriver driver){
        this.driver=driver;
        PageFactory.initElements(driver,this);//与@FindBy同时出现的
        action=new Actions(driver);
    }
    //进入个人中心
    public void enterPersonalCenter() throws InterruptedException {
        Thread.sleep(5000);
        action.click(bar_me);
        Thread.sleep(5000);
        action.click(btn_personalCenter);
    }
    //退出个人中心(退到首页)
    public void exitPersonalCerter() throws InterruptedException {
        action.click(btn_back);
        Thread.sleep(5000);
        action.click(bar_first);
        Thread.sleep(5000);
    }
    //编辑资料(简介、生日)
    public void editDocuments(String instruction) throws InterruptedException {
        action.click(btn_editDocument);
        action.clear(txt_instruction);
        action.type(txt_instruction,instruction);
        action.click(txt_birthday);
        action.click(btn_confirm);
        action.click(btn_back);
        Thread.sleep(5000);

    }
    //查看收藏
    public void checkCollect() throws InterruptedException {
        action.click(btn_collect);
    }
    //查看作品
    public void checkWorks() throws InterruptedException {
        action.click(btn_works);
    }
    //查看粉丝
    public void checkFans() throws InterruptedException {
        action.click(btn_fans);
    }
    //收藏、作品、粉丝的切换
    public void switchCheck(){
    action.click(btn_collect);
    action.click(btn_works);
    action.click(btn_fans);
    }
}
