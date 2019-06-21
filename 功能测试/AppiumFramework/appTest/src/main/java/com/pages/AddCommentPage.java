package com.pages;

import com.utils.Actions;

import org.openqa.selenium.WebElement;
import org.openqa.selenium.support.FindBy;
import org.openqa.selenium.support.PageFactory;

import io.appium.java_client.android.AndroidDriver;

public class AddCommentPage {
    //加号
   // @FindBy(xpath = "//*[@id='neet.com.youjidemo:id/tab_icon' and @class='android.widget.ImageView']")
    @FindBy(id = "neet.com.youjidemo:id/tab_icon")
    private WebElement btn_comment;
    //上传输入框
    @FindBy(id = "neet.com.youjidemo:id/et_share_passage")
    private WebElement txt_content;
    //上传图片
    @FindBy(id = "neet.com.youjidemo:id/select_image")
    private WebElement txt_img;
    //选择tupian或相机
    @FindBy(id = "com.android.gallery3d:id/gl_root_view")
    private WebElement btn_img;
    //图片
    @FindBy(id = "com.android.gallery3d:id/gl_root_view")
    private WebElement selectimg;
    //上传
    @FindBy(id = "neet.com.youjidemo:id/btn_share_upload")
    private WebElement btn_upload;
    AndroidDriver driver;
    Actions action;
    public AddCommentPage(AndroidDriver driver){
        this.driver=driver;
        PageFactory.initElements(driver,this);//与@FindBy同时出现的
        action=new Actions(driver);
    }
    //发表
    public void addComment(String content) throws InterruptedException {
        Thread.sleep(5000);
       action.click(btn_comment);
        Thread.sleep(5000);
        action.type(txt_content,content);
        action.click(txt_img);
        action.click(btn_img);
        action.click(selectimg);
        action.click(btn_upload);
        Thread.sleep(5000);
    }
}
