package com.xiaoming;

import com.xiaoming.service.UserService;
import org.springframework.context.ApplicationContext;
import org.springframework.context.support.ClassPathXmlApplicationContext;

/**
 * @program: spring03
 * @description
 * @author: YouName
 * @create: 2021-11-23 23:20
 **/
public class Starter02 {
    public static void main(String[] args) {
        //得到上下文环境
        ApplicationContext ac=new ClassPathXmlApplicationContext("spring02.xml");
        UserService userService= (UserService) ac.getBean("userService");
        System.out.println(userService);
    }
}
