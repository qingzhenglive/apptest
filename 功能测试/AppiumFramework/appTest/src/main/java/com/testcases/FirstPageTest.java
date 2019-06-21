package com.testcases;

import com.base.BaseTest;
import com.pages.FirstPage;

import org.testng.Assert;
import org.testng.annotations.Test;

public class FirstPageTest extends BaseTest {
  //查看评论
    @Test
    public void readCommitTest(){
        FirstPage ft=new FirstPage(getDriver());
        ft.commit();
        System.out.print(getDriver().currentActivity());
        Assert.assertEquals(".MainActivity",getDriver().currentActivity());
    }
    //发表评论
    @Test
    public void commitSuccessfulTest() throws InterruptedException {
        FirstPage ft=new FirstPage(getDriver());
        ft.commit("评论1111111");
        System.out.print(getDriver().currentActivity());
        Assert.assertEquals(".MainActivity",getDriver().currentActivity());
    }
    //隐藏评论
    @Test
    public void cancelCommitTest() throws InterruptedException {
        FirstPage ft=new FirstPage(getDriver());
        ft.hideCommit("22222");
        System.out.print(getDriver().currentActivity());
        Assert.assertEquals(".MainActivity",getDriver().currentActivity());
    }
    //连续发表评论
    @Test
    public void commitMoreTest() throws InterruptedException {
        FirstPage ft=new FirstPage(getDriver());
        ft.commitMore("评论",2);
        System.out.print(getDriver().currentActivity());
        Assert.assertEquals(".MainActivity",getDriver().currentActivity());
    }

    //收藏
    @Test
    public void collectTest(){
        FirstPage ft=new FirstPage(getDriver());
        ft.collect();
        System.out.print(getDriver().currentActivity());
        Assert.assertEquals(".MainActivity",getDriver().currentActivity());
    }
    //取消收藏
    @Test
    public void collectCancelTest(){
        FirstPage ft=new FirstPage(getDriver());
        ft.collectCancle();
        System.out.print(getDriver().currentActivity());
        Assert.assertEquals(".MainActivity",getDriver().currentActivity());
    }
    //点赞
    @Test
    public void praiseTest(){
        FirstPage ft=new FirstPage(getDriver());
        ft.praise();
        System.out.print(getDriver().currentActivity());
        Assert.assertEquals(".MainActivity",getDriver().currentActivity());
    }
    //取消点赞
    @Test
    public void praiseCancelTest(){
        FirstPage ft=new FirstPage(getDriver());
        ft.praiseCancle();
        System.out.print(getDriver().currentActivity());
        Assert.assertEquals(".MainActivity",getDriver().currentActivity());
    }
    //点击关注
    @Test
    public void focusTest(){
        FirstPage ft=new FirstPage(getDriver());
        ft.focus();
        System.out.print(getDriver().currentActivity());
        Assert.assertEquals(".MainActivity",getDriver().currentActivity());
    }
    //取消关注
    @Test
    public void focusCancelTest(){
        FirstPage ft=new FirstPage(getDriver());
        ft.focusCancle();
        System.out.print(getDriver().currentActivity());
        Assert.assertEquals(".MainActivity",getDriver().currentActivity());
    }
    //从美食切换到游玩
    @Test
    public void switchTest() throws InterruptedException {
        FirstPage ft=new FirstPage(getDriver());
        ft.switchTo("美食");
        Thread.sleep(200);
        ft.switchTo("游玩");
        System.out.print(getDriver().currentActivity());
        Assert.assertEquals(".MainActivity",getDriver().currentActivity());
    }
    //切换到美食后进行收藏
    @Test
    public void switchAndCollectTest() throws InterruptedException {
        FirstPage ft=new FirstPage(getDriver());
        ft.switchTo("美食");
        Thread.sleep(200);
        ft.collect();
        System.out.print(getDriver().currentActivity());
        Assert.assertEquals(".MainActivity",getDriver().currentActivity());
    }
}
