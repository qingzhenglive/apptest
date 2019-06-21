package com.testcases;

import com.base.BaseTest;
import com.pages.PersonalCenterPage;

import org.testng.Assert;
import org.testng.annotations.Test;

public class PersonalCenterPageTest extends BaseTest {
    //编辑资料（简介、生日)
    @Test
    public void editTest() throws InterruptedException {
        PersonalCenterPage pp=new PersonalCenterPage(getDriver());
        pp.enterPersonalCenter();
        pp.editDocuments("我是一个认真的人");
        pp.exitPersonalCerter();
        System.out.print(getDriver().currentActivity());
        Assert.assertEquals(".MainActivity",getDriver().currentActivity());
    }
    //查看收藏
    @Test
    public void checkWorks() throws InterruptedException {
        PersonalCenterPage pp=new PersonalCenterPage(getDriver());
        pp.enterPersonalCenter();
        pp.checkWorks();
        pp.exitPersonalCerter();
        System.out.print(getDriver().currentActivity());
        Assert.assertEquals(".MainActivity",getDriver().currentActivity());
    }
    //收藏、作品、粉丝的切换
    @Test
    public void switchCheckTest() throws InterruptedException {
        PersonalCenterPage pp=new PersonalCenterPage(getDriver());
        pp.enterPersonalCenter();
        pp.switchCheck();
        pp.exitPersonalCerter();
        System.out.print(getDriver().currentActivity());
        Assert.assertEquals(".MainActivity",getDriver().currentActivity());
    }
}
