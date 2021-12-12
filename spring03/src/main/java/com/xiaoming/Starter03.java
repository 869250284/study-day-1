package com.xiaoming;

import com.xiaoming.service.AccountService;
import org.springframework.beans.factory.BeanFactory;
import org.springframework.context.support.ClassPathXmlApplicationContext;

/**
 * @program: spring03
 * @description
 * @author: YouName
 * @create: 2021-11-23 23:42
 **/
public class Starter03 {
    public static void main(String[] args) {
        BeanFactory beanFactory=new ClassPathXmlApplicationContext("spring03.xml");
        AccountService accountService= (AccountService) beanFactory.getBean("accountService");
        accountService.test();
    }
}
