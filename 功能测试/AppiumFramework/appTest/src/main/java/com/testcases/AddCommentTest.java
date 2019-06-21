package com.testcases;

import com.base.BaseTest;
import com.pages.AddCommentPage;

import org.testng.Assert;
import org.testng.annotations.Test;

public class AddCommentTest extends BaseTest {
    //发表
    @Test
    public void commentTest() throws InterruptedException {
        AddCommentPage ac=new AddCommentPage(getDriver());
        ac.addComment("检测");
        System.out.print(getDriver().currentActivity());
        Assert.assertEquals(".MainActivity",getDriver().currentActivity());
    }
}
