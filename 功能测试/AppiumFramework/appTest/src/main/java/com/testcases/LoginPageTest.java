package com.testcases;

import com.base.BaseTest;
import com.pages.LoginPage;

import org.testng.Assert;
import org.testng.annotations.Test;


public class LoginPageTest extends BaseTest {
    //todolist的用例
    @Test
    public void loginSuccessful(){
        LoginPage loginPage =new LoginPage(getDriver());
        loginPage.login("1","1");
        System.out.print(getDriver().currentActivity());
        Assert.assertEquals(".MainActivity",getDriver().currentActivity());
    }


}
