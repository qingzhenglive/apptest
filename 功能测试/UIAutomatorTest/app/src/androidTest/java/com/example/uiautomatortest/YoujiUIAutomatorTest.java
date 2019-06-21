package com.example.uiautomatortest;

import android.support.test.InstrumentationRegistry;
import android.support.test.uiautomator.UiDevice;
import android.support.test.uiautomator.UiObject;
import android.support.test.uiautomator.UiObjectNotFoundException;
import android.support.test.uiautomator.UiSelector;

import org.junit.Before;
import org.junit.Test;

public class YoujiUIAutomatorTest {
    private UiDevice device;
    @Before
    public void setUp() throws UiObjectNotFoundException {
        device = UiDevice.getInstance(InstrumentationRegistry.getInstrumentation());
        device.pressHome();
        //显示app列表
        UiObject menu=device.findObject(new UiSelector().resourceId("com.android.launcher3:id/all_apps_handle"));
        menu.click();
        UiObject logo = device.findObject(new UiSelector().text("游迹"));
        logo.click();
    }
    //返回“首页”
    public void returnFirstPage() throws UiObjectNotFoundException {
        UiObject firstPage=device.findObject(new UiSelector().text("首页"));
        firstPage.click();
    }
    //切换到“我”的页面
    public void switchToMepage() throws UiObjectNotFoundException, InterruptedException {
        UiObject bar_me =device.findObject(new UiSelector().resourceId("neet.com.youjidemo:id/tab_icon").instance(4));
//        UiObject bar_me =device.findObject(new UiSelector().text("我"));
        bar_me.click();
        Thread.sleep(2000);
    }
    //编辑个人资料
    @Test
    public void testEditDoc() throws UiObjectNotFoundException, InterruptedException {

        //切换到“我”的页面
      switchToMepage();
        //点击个人中心
        UiObject personalCenter=device.findObject(new UiSelector().text("个人中心"));
        personalCenter.click();
        //点击编辑资料
        UiObject editDocument=device.findObject(new UiSelector().text("编辑资料"));
        editDocument.click();
        //简介
        UiObject introduction=device.findObject(new UiSelector().resourceId("neet.com.youjidemo:id/pde_et_introduction"));
        introduction.setText("我是一个谨慎的人");
        //生日
        UiObject birth=device.findObject(new UiSelector().resourceId("neet.com.youjidemo:id/pde_tv_birthday"));
        birth.click();
        //confirm
        UiObject confirm=device.findObject(new UiSelector().text("CONFIRM"));
        confirm.click();
        //返回个人中心
        UiObject backPersonalCenter=device.findObject(new UiSelector().className("android.widget.ImageButton"));
        backPersonalCenter.click();
        //返回“我”
        UiObject back_me=device.findObject(new UiSelector().className("android.widget.ImageButton"));
        back_me.click();
        //返回“首页”
        returnFirstPage();

    }
    //查看个人中心的收藏
    @Test
    public void testCheckCollection() throws UiObjectNotFoundException, InterruptedException {
        //切换到“我”的页面
        switchToMepage();
        //点击个人中心
        UiObject personalCenter=device.findObject(new UiSelector().text("个人中心"));
        personalCenter.click();
        //点击收藏
        UiObject collection=device.findObject(new UiSelector().text("收藏"));
        collection.click();
        Thread.sleep(2000);
        //返回“我”
        UiObject back_me=device.findObject(new UiSelector().className("android.widget.ImageButton"));
        back_me.click();
        //返回“首页”
        returnFirstPage();
    }
    //“我”页面收藏的编辑-删除
    @Test
    public void testDelete() throws UiObjectNotFoundException, InterruptedException {
        switchToMepage();
        //“我”页面的收藏
        UiObject collect=device.findObject(new UiSelector().text("收藏"));
        collect.click();
        Thread.sleep(2000);
        //点击编辑
//        UiObject editCollect=device.findObject(new UiSelector().text("编辑"));
        UiObject editCollect=device.findObject(new UiSelector().resourceId("neet.com.youjidemo:id/tv_editor"));
        editCollect.click();
        //选中要编辑的信息
        UiObject message=device.findObject(new UiSelector().resourceId("neet.com.youjidemo:id/checks").instance(2));
        message.click();
        //删除
        UiObject deleteMessaage=device.findObject(new UiSelector().resourceId("neet.com.youjidemo:id/delete"));
        deleteMessaage.click();
        //返回
        UiObject backMe=device.findObject(new UiSelector().className("android.widget.ImageButton"));
        backMe.click();
        //返回“首页”
        returnFirstPage();
    }
    //发表评论
    @Test
    public void testComment() throws UiObjectNotFoundException {
        //点击信息的图片
        UiObject comment_img=device.findObject(new UiSelector().resourceId("neet.com.youjidemo:id/iv_contentimage").instance(0));
        comment_img.click();
        //点击“点击发表你的评论”
        UiObject cilckComment=device.findObject(new UiSelector().text("点击发表你的评论"));
        cilckComment.click();
        //内容
        UiObject content=device.findObject(new UiSelector().resourceId("neet.com.youjidemo:id/comment_content"));
        content.setText("评论");
        //发表
        UiObject pushCommnet=device.findObject(new UiSelector().text("发表"));
        pushCommnet.click();
        //返回
        UiObject commnetBack=device.findObject(new UiSelector().className("android.widget.ImageButton"));
        commnetBack.click();
    }
    //发表多次评论
    @Test
    public void testCommentMore() throws UiObjectNotFoundException {
        //点击信息的图片
        UiObject comment_img=device.findObject(new UiSelector().resourceId("neet.com.youjidemo:id/iv_contentimage").instance(0));
        comment_img.click();
        //点击“点击发表你的评论”
        UiObject cilckComment=device.findObject(new UiSelector().text("点击发表你的评论"));
        cilckComment.click();
        for (int i=0;i<3;i++){
            //内容
            UiObject content=device.findObject(new UiSelector().resourceId("neet.com.youjidemo:id/comment_content"));
            content.setText("评论"+i);
            //发表
            UiObject pushCommnet=device.findObject(new UiSelector().text("发表"));
            pushCommnet.click();
        }
        //返回
        UiObject commnetBack=device.findObject(new UiSelector().className("android.widget.ImageButton"));
        commnetBack.click();
    }
    //收藏
    @Test
    public void testCollect() throws UiObjectNotFoundException {
        UiObject great=device.findObject(new UiSelector().resourceId("neet.com.youjidemo:id/ib_collect"));
        great.click();
    }
    //取消收藏
    @Test
    public void testCollectCancle() throws UiObjectNotFoundException {
        UiObject great=device.findObject(new UiSelector().resourceId("neet.com.youjidemo:id/ib_collect"));
        great.click();
    }
    //关注
    @Test
    public void testFocus() throws UiObjectNotFoundException {
        UiObject focus=device.findObject(new UiSelector().resourceId("neet.com.youjidemo:id/btn_care"));
        focus.click();
    }
    //取消关注
    @Test
    public void testFocusCancle() throws UiObjectNotFoundException {
        UiObject focus=device.findObject(new UiSelector().resourceId("neet.com.youjidemo:id/btn_care"));
        focus.click();
    }

}
