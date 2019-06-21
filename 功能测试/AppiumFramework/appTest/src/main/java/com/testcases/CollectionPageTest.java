package com.testcases;

import com.base.BaseTest;
import com.pages.CollectionPage;

import org.testng.Assert;
import org.testng.annotations.Test;

public class CollectionPageTest extends BaseTest {
    //查看收藏
    @Test
    public void checkCollectionTest() throws InterruptedException {
        CollectionPage cp=new CollectionPage(getDriver());
        cp.checkCollection();
        Assert.assertEquals(".MainActivity",getDriver().currentActivity());
    }
    //编辑收藏
    @Test
    public void delete() throws InterruptedException {
        CollectionPage cp=new CollectionPage(getDriver());
        cp.deleteCollection(1);
        Assert.assertEquals(".MainActivity",getDriver().currentActivity());
    }
    //取消对收藏的编辑
    @Test
    public void editCancelTest() throws InterruptedException {
        CollectionPage cp=new CollectionPage(getDriver());
        cp.deleteCollectionCancel(1);
        System.out.print(getDriver().currentActivity());
        Assert.assertEquals(".MainActivity",getDriver().currentActivity());
    }
    //撤销编辑
    @Test
    public void revokeTest() throws InterruptedException {
        CollectionPage cp=new CollectionPage(getDriver());
        cp.revokeEdit(1);
        Assert.assertEquals(".MainActivity",getDriver().currentActivity());
    }
}
