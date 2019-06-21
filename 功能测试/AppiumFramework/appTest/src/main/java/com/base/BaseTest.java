package com.base;

import org.openqa.selenium.WebElement;
import org.openqa.selenium.remote.DesiredCapabilities;
import org.testng.annotations.AfterSuite;
import org.testng.annotations.BeforeClass;
import org.testng.annotations.BeforeSuite;

import java.io.File;
import java.io.IOException;
import java.net.URL;

import io.appium.java_client.android.AndroidDriver;
import io.appium.java_client.android.AndroidElement;

public class BaseTest {
   public  AndroidDriver<AndroidElement> driver;
//    @BeforeSuite
    @BeforeClass
    public void startApp() throws IOException, InterruptedException {

        File classpathRoot = new File(System.getProperty("user.dir"));
        File appDir = new File(classpathRoot+"/apps");
//        File app = new File(appDir.getCanonicalPath(), "todolist.apk");
        File app = new File(appDir.getCanonicalPath(), "app-debug.apk");
        DesiredCapabilities capabilities = new DesiredCapabilities();
//        capabilities.setCapability("deviceName", "127.0.0.1:62001");//夜神模拟器
        capabilities.setCapability("deviceName", "emulator-5554 device");
        capabilities.setCapability("app", app.getAbsolutePath());
        capabilities.setCapability("noReset",true);//保留历史数据
//        capabilities.setCapability("appPackage", "com.example.todolist");
//        capabilities.setCapability("appActivity", ".LoginActivity");
//        capabilities.setCapability("appPackage", "neet.com.youjidemo");
//        capabilities.setCapability("appActivity", ".MainActivity");
        capabilities.setCapability("unicodeKeyboard",true);
        capabilities.setCapability("resetKeyboard",true);
        driver =new  AndroidDriver<AndroidElement>(new URL("http://127.0.0.1:4723/wd/hub"),capabilities);

        Thread.sleep(200);
    }
//    @AfterSuite
//    public void tearDown(){
//        driver.quit();
//    }
    public AndroidDriver getDriver() {
        return this.driver;
    }
}
