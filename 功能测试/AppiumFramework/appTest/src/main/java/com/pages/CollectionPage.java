package com.pages;

import com.utils.Actions;

import org.openqa.selenium.WebElement;
import org.openqa.selenium.support.FindAll;
import org.openqa.selenium.support.FindBy;
import org.openqa.selenium.support.PageFactory;

import java.util.List;

import io.appium.java_client.android.AndroidDriver;

public class CollectionPage {
    //"我"
    @FindBy(xpath = "//*[@text='我']")
    private WebElement bar_me;
    //"首页"
    @FindBy(xpath = "//*[@text='首页']")
    private WebElement bar_first;
    //收藏
    @FindBy(id = "neet.com.youjidemo:id/btn_love")
    private WebElement btn_collection;
    //返回收藏
    @FindBy(className = "android.widget.ImageButton")
    private WebElement btn_back;
    //编辑收藏
    @FindBy(id = "neet.com.youjidemo:id/tv_editor")
    private  WebElement btn_edit;
    //收藏的帖子
    @FindAll({@FindBy(id="neet.com.youjidemo:id/checks")})
    public List<WebElement> elementList;
    //删除按钮
    @FindBy(id = "neet.com.youjidemo:id/delete")
    private WebElement btn_delete;
    //取消
    @FindBy(id = "neet.com.youjidemo:id/tv_editor")
    private  WebElement btn_cancelEdit;
    //撤销
    @FindBy(id = "neet.com.youjidemo:id/cancle")
    private  WebElement btn_revoke;
    AndroidDriver driver;
    Actions action;
    public CollectionPage(AndroidDriver driver){
        this.driver=driver;
        PageFactory.initElements(driver,this);//与@FindBy同时出现的
        action=new Actions(driver);
    }
    //查看收藏
    public void checkCollection() throws InterruptedException {
        action.click(bar_me);
        Thread.sleep(5000);
        action.click(btn_collection);
        Thread.sleep(2000);
        action.click(btn_back);
        action.click(bar_first);
    }
    //编辑收藏
    public void deleteCollection(int i) throws InterruptedException {
        action.click(bar_me);
        Thread.sleep(5000);
        action.click(btn_collection);
        action.click(btn_edit);
        action.click(elementList.get(i));
        action.click(btn_delete);
        action.click(btn_back);
        action.click(bar_first);
    }
    //编辑取消
    public void deleteCollectionCancel(int i) throws InterruptedException {
        action.click(bar_me);
        Thread.sleep(5000);
        action.click(btn_collection);
        action.click(btn_edit);
        action.click(elementList.get(i));
        action.click(btn_cancelEdit);
        action.click(btn_back);
        action.click(bar_first);
    }
    //撤销编辑
    public void revokeEdit(int i) throws InterruptedException {
        action.click(bar_me);
        Thread.sleep(5000);
        action.click(btn_collection);
        action.click(btn_edit);
        action.click(elementList.get(i));
        action.click(btn_revoke);
        action.click(btn_back);
        action.click(bar_first);
    }
}
