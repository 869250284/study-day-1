package com.xiaoming.po;

/**
 * @program: jstl
 * @description
 * @author: YouName
 * @create: 2021-10-23 15:21
 **/
public class User {
    private Integer userID;
    private String username;
    private String upwd;

    public Integer getUserID() {
        return userID;
    }

    public void setUserID(Integer userID) {
        this.userID = userID;
    }

    public String getUsername() {
        return username;
    }

    public void setUsername(String username) {
        this.username = username;
    }

    public String getUpwd() {
        return upwd;
    }

    public void setUpwd(String upwd) {
        this.upwd = upwd;
    }
}
