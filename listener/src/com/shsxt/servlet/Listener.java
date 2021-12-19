package com.shsxt.servlet;

import javax.servlet.annotation.WebListener;
import javax.servlet.http.HttpSessionEvent;
import javax.servlet.http.HttpSessionListener;

/**
 * @program: listener
 * @description
 * @author: YouName
 * @create: 2021-10-24 23:54
 **/
@WebListener
public class Listener implements HttpSessionListener {
    @Override
    public void sessionCreated(HttpSessionEvent se) {
        System.out.println("session对象被创建了。。。。。");
    }

    @Override
    public void sessionDestroyed(HttpSessionEvent se) {
        System.out.println("session对象被销毁了。。。。。");
    }
}
