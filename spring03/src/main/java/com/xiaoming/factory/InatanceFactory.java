package com.xiaoming.factory;

import com.xiaoming.service.UserService;

/**
 * @program: spring03
 * @description
 * @author: YouName
 * @create: 2021-11-23 23:26
 **/
public class InatanceFactory {
    public UserService creatService() {
        return new UserService();
    }
}
