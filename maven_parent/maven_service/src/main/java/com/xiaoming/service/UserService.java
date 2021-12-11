package com.xiaoming.service;

import com.xiaoming.dao.UserDao;

/**
 * @program: maven_parent
 * @description
 * @author: YouName
 * @create: 2021-10-31 17:00
 **/
public class UserService {
    public static void testService(){
        System.out.println("User Service test....");
        UserDao.testDao();
    }
}
