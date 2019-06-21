package com.testcases;

import com.base.BaseTest;
import com.pages.YoujiLoginPage;

import org.testng.Assert;
import org.testng.annotations.Test;

public class youjiLoginTest extends BaseTest {

    //登陆失败,密码不正确
    @Test
    public void loginFailed() throws InterruptedException {
        YoujiLoginPage loginPage =new YoujiLoginPage(getDriver());
        loginPage.switchToLoginPage();
        loginPage.login("1234567891","1111");
        System.out.print(getDriver().currentActivity());
        Assert.assertEquals(".view.LoginActivity",getDriver().currentActivity());
    }
    //登录成功
    @Test
    public void loginSuccessful() throws InterruptedException {
        YoujiLoginPage loginPage =new YoujiLoginPage(getDriver());
        loginPage.login("1234567891","111111");
        System.out.print(getDriver().currentActivity());
        Assert.assertEquals(".MainActivity",getDriver().currentActivity());
    }
}
