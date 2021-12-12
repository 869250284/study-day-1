package com.xiaoming.factory;

import com.xiaoming.service.UserService;

/**
 * @program: spring03
 * @description
 * @author: YouName
 * @create: 2021-11-23 23:09
 **/
/*
    静态工厂实例化
 */
public class StaticFactory {
    /*
    定义静态方法，
    返回需要被实例化的bean对象
     */
    public static UserService creatUserservice(){
        return new UserService();
    }
}
