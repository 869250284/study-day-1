package com.xiaoming;

import com.xiaoming.dao.UserDao;
import com.xiaoming.factory.MyBeanFactory;
import com.xiaoming.factory.MyClassPathXmlApplicationContext;

/**
 * @program: spring02
 * @description
 * @author: YouName
 * @create: 2021-11-20 23:45
 **/
public class Starter {
    public static void main(String[] args) {
        MyBeanFactory beanFactory=new MyClassPathXmlApplicationContext("spring.xml");
        UserDao userDao= (UserDao) beanFactory.getBean("userDao");
        userDao.test();
    }
}
