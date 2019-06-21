package com.pages;

import com.utils.Actions;

import org.openqa.selenium.WebElement;
import org.openqa.selenium.support.FindBy;
import org.openqa.selenium.support.PageFactory;
import org.testng.annotations.Test;

import io.appium.java_client.android.AndroidDriver;

public class FirstPage {
    //评论的图片
    @FindBy(id = "neet.com.youjidemo:id/iv_contentimage")
    private WebElement img_commit;
    //“点击发表你的评论”
    @FindBy(id = "neet.com.youjidemo:id/image_detail_comment")
    private WebElement txt_commit;
    //评论框
    @FindBy(id = "neet.com.youjidemo:id/comment_content")
    private WebElement txt_content;
    //发表按钮
    @FindBy(id = "neet.com.youjidemo:id/comment_send")
    private WebElement btn_commit;
    //隐藏按钮
    @FindBy(id = "neet.com.youjidemo:id/hide_down")
    private WebElement btn_hide;
    //返回按钮
    @FindBy(className = "android.widget.ImageButton")
    private WebElement btn_back;
    //收藏图案(心形)
    @FindBy(id = "neet.com.youjidemo:id/ib_collect")
    private WebElement btn_heart;
    //点赞图案（大拇指）
    @FindBy(id = "neet.com.youjidemo:id/ib_good")
    private WebElement btn_finger;
    //关注
    @FindBy(id = "neet.com.youjidemo:id/btn_care")
    private WebElement btn_care;
    //上方菜单栏
    //推荐
    @FindBy(xpath = "//*[@text='推荐']")
    private WebElement btn_recommand;
    //美食
    @FindBy(xpath = "//*[@text='美食']")
    private WebElement btn_food;
    //游玩
    @FindBy(xpath = "//*[@text='游玩']")
    private WebElement btn_sight;
    //逛街
    @FindBy(xpath = "//*[@text='逛街']")
    private WebElement btn_shopping;
    //滑冰
    @FindBy(xpath = "//*[@text='滑冰']")
    private WebElement btn_skate;
    //摄影
    @FindBy(xpath = "//*[@text='摄影']")
    private WebElement btn_film;
    AndroidDriver driver;
    Actions action;
    public FirstPage(AndroidDriver driver){
        this.driver=driver;
        PageFactory.initElements(driver,this);//与@FindBy同时出现的
        action=new Actions(driver);
    }
    //查看评论
    public void commit(){
        action.click(img_commit);
        action.click(btn_back);
    }
    //发表评论
    public void commit(String content) throws InterruptedException {
        Thread.sleep(2000);
        action.click(img_commit);
        Thread.sleep(2000);
        action.click(txt_commit);
        action.type(txt_content,content);
        action.click(btn_commit);
        action.click(btn_back);
    }
    //隐藏评论
    public void hideCommit(String content) throws InterruptedException {
        Thread.sleep(2000);
        action.click(img_commit);
        Thread.sleep(2000);
        action.click(txt_commit);
        action.type(txt_content,content);
        action.click(btn_hide);
        action.click(btn_back);
    }
    //发表多次评论.num是发表评论的次数
    public void commitMore(String content,int num) throws InterruptedException {
        Thread.sleep(2000);
        action.click(img_commit);
        Thread.sleep(2000);
        action.click(txt_commit);
        for (int i=0;i<num;i++){
            action.type(txt_content,content+i);
            action.click(btn_commit);
        }
        action.click(btn_back);
    }
    //点击关注

    public void focus(){

    }
    //取消关注
    public void focusCancle(){

    }
    //收藏
    public void collect(){
        action.click(btn_heart);
    }
    //取消收藏
    public void collectCancle(){
        action.click(btn_heart);
    }
    //点赞
    public void praise(){
        action.click(btn_finger);
    }
    //取消点赞
    public void praiseCancle(){
        action.click(btn_finger);
    }
    //切换到上方菜单栏任意项目
    public void switchTo(String name) throws InterruptedException {
        Thread.sleep(2000);
        switch (name){
            case "推荐":
                action.click(btn_recommand);
                break;
            case "美食":
                action.click(btn_food);
                break;
            case "游玩"  :
                action.click(btn_sight);
                break;
            case "逛街":
                action.click(btn_shopping);
                break;
            case "滑冰" :
                action.click(btn_skate);
                break;
            case "摄影"  :
                action.click(btn_film);
                break;
            default:
                System.out.println("没有这一项");
        }
    }

}




