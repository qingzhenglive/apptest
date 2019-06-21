package com.testcases;

import com.base.BaseTest;
import com.utils.Actions;

import org.openqa.selenium.By;
import org.openqa.selenium.JavascriptExecutor;
import org.openqa.selenium.WebElement;
import org.openqa.selenium.support.FindAll;
import org.openqa.selenium.support.FindBy;
import org.openqa.selenium.support.PageFactory;
import org.testng.annotations.Test;

import java.util.List;

import io.appium.java_client.android.Activity;
import io.appium.java_client.android.AndroidDriver;
import io.appium.java_client.android.AndroidElement;

public class test extends BaseTest {
//    AndroidDriver driver=getDriver();
    @Test
    public void testLogin() throws InterruptedException {
//        driver.startActivity(new Activity("neet.com.youjidemo",".LoginActivity"));
//        Thread.sleep(5000);
      //  driver.findElementById("neet.com.youjidemo:id/iv_contentimage").click();//发表评论
//        driver.findElementById("neet.com.youjidemo:id/tab_icon").click();//上传
//        driver.findElementById("neet.com.youjidemo:id/tab_icon").click();
//        AndroidElement my= driver.findElementById("tab_icon");

//        driver.findElementById("tab_icon").click();
//        JavascriptExecutor js=(JavascriptExecutor)driver;
//        js.executeScript("arguments[0].click();",my);
//        driver.findElementByName("我").click();
//        Thread.sleep(3000);
//        driver.findElementById("iv_head_sculpture").click();


//        Thread.sleep(5000);
//        driver.findElementByXPath("//*[@text='我']").click();
//        Thread.sleep(5000);
//        driver.findElementById("neet.com.youjidemo:id/iv_head_sculpture").click();
//        Thread.sleep(5000);
//        driver.findElementById("neet.com.youjidemo:id/et_userPhone").sendKeys("1234567891");
//        driver.findElement(By.className("android.widget.RelativeLayout")).sendKeys("111111");
//        driver.findElementById("neet.com.youjidemo:id/btn_login").click();
//        Thread.sleep(5000);
            driver.findElement(By.xpath("//*[@id='neet.com.youjidemo:id/tab_icon']")).click();
    }
}
