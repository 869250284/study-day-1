package com.shsxt.listener;

import javax.servlet.annotation.WebListener;
import javax.servlet.http.HttpSession;
import javax.servlet.http.HttpSessionEvent;
import javax.servlet.http.HttpSessionListener;

/**
 * @program: listener
 * @description
 * @author: YouName
 * @create: 2021-10-25 00:06
 **/
//监听在线人数
    @WebListener
        //当有新的session对象被创建时，人数+1，反之销毁
public class OnlineListener implements HttpSessionListener {
        private Integer onlineNumber=0;
    @Override
    public void sessionCreated(HttpSessionEvent se) {
        //人数加1
        onlineNumber++;
        //将数据存到session作用域中但是当前用户只能看见自己作用域中的数据（每个用户看见在线人数不对）
        //se.getSession().setAttribute("onlineNumber",onlineNumber);
        //通过session对象获取servletContext对象，设置对应作用域
        se.getSession().getServletContext().setAttribute("onlineNumber",onlineNumber);

    }

    @Override
    public void sessionDestroyed(HttpSessionEvent se) {
        //人数减1
        onlineNumber--;
        //se.getSession().setAttribute("onlineNumber",onlineNumber);
        se.getSession().getServletContext().setAttribute("onlineNumber",onlineNumber);

    }
}
