package com.xiaoming;

import com.sun.org.apache.bcel.internal.util.ClassPath;
import com.xiaoming.service.UserDao;
import com.xiaoming.service.UserService;
import javafx.application.Application;
import org.springframework.context.ApplicationContext;
import org.springframework.context.support.ClassPathXmlApplicationContext;
import org.springframework.context.support.FileSystemXmlApplicationContext;
import org.springframework.core.io.ClassPathResource;
import org.springframework.core.io.FileSystemResource;

import java.applet.AppletContext;

/**
 * @program: spring03
 * @description
 * @author: YouName
 * @create: 2021-11-22 15:47
 **/
/*
    SpringIOC加载配置文件
        1.单配置文件
            相对路径
            绝对路径
 */
public class Starter {
    public static void main(String[] args) {
        //相对路径加载配置文件
        //ApplicationContext ac=new ClassPathXmlApplicationContext("spring.xml");


        //绝对路径加载配置文件
        //ApplicationContext ac=new FileSystemXmlApplicationContext("D:\\JAVA\\JAVAcode0\\spring03\\src\\main\\resources\\spring.xml");

        //加载多个配置文件
        //ApplicationContext ac=new ClassPathXmlApplicationContext("spring.xml","bean.xml");

        //在总的配置文件通过import标签导入其他配置文件，只需要加载总的配置文件即可
        ApplicationContext ac=new ClassPathXmlApplicationContext("service.xml");


        UserDao userDao= (UserDao) ac.getBean("userDao");
        UserService userService= (UserService) ac.getBean("userService");
        userService.test();
        userDao.test();
    }
}
