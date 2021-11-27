package com.xiaoming.dao;

import com.xiaoming.po.User;
import org.springframework.stereotype.Repository;

import javax.annotation.Resource;
import javax.jws.soap.SOAPBinding;

/**
 * @program: loginProject
 * @description
 * @author: YouName
 * @create: 2021-11-27 01:21
 **/
@Repository
public class UserDao {
    /*
    通过用户名查询用户对象
     */
    private final String USERNAME="admin";
    private final String USERPWD="admin";
    public User queryUserByname(String userName){
        //判断用户名是否为admin
        if(!USERNAME.equals(userName)){
            return  null;
        }
        //得到对象
        User user=new User();
        user.setUserID(1);
        user.setUserName(USERNAME);
        user.setUserPwd(USERPWD);
        return user;
    }
}
