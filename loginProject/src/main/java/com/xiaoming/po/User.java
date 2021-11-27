package com.xiaoming.po;

/**
 * @program: loginProject
 * @description
 * @author: YouName
 * @create: 2021-11-27 01:19
 **/
/*
实体类
 */
public class User {
    private Integer userID;//用户ID
    private String userName;//用户名
    private String userPwd;//用户密码

    public Integer getUserID() {
        return userID;
    }

    public void setUserID(Integer userID) {
        this.userID = userID;
    }

    public String getUserName() {
        return userName;
    }

    public void setUserName(String userName) {
        this.userName = userName;
    }

    public String getUserPwd() {
        return userPwd;
    }

    public void setUserPwd(String userPwd) {
        this.userPwd = userPwd;
    }
}
