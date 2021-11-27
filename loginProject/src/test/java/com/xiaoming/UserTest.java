package com.xiaoming;

import com.xiaoming.controller.UserController;
import com.xiaoming.model.ResultInfo;
import org.junit.Test;
import org.springframework.beans.factory.BeanFactory;
import org.springframework.context.support.ClassPathXmlApplicationContext;

/**
 * @program: loginProject
 * @description
 * @author: YouName
 * @create: 2021-11-27 01:58
 **/

public class UserTest {
    @Test
    public void testUserLogin(){
        //得到上下文环境
                BeanFactory beanFactory=new ClassPathXmlApplicationContext("spring.xml");
        //得到userController
        UserController userController= (UserController) beanFactory.getBean("userController");
        ResultInfo resultInfo=userController.userLogin(null,null);
        System.out.println(resultInfo );
    }
}
