package com.xiaoming.factory;

import com.sun.org.apache.xpath.internal.objects.XObject;

/**
 * @program: spring02
 * @description
 * @author: YouName
 * @create: 2021-11-20 23:50
 **/
/*
1.接口
定义方法
* */
public interface MyBeanFactory {
    //通过id值获取对应的bean对象
    Object getBean(String id);
}
