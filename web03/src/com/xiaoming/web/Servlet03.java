package com.xiaoming.web;

import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.Cookie;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import java.io.IOException;

/**
 * @program: web03
 * @description
 * @author: YouName
 * @create: 2021-10-19 09:44
 **/
/*
cookie的到期时间
到期时间，到期时间用来指定该cookie什么时候失效
我们可以手动设定cookie有效时间通过SetMaxAge（int time）方法设定cookie最大有效时间
MaxAge如果是负整数在浏览器存活 浏览器关闭就销毁
 */
    @WebServlet("/cook03")
public class Servlet03 extends HttpServlet {
    @Override
    protected void service(HttpServletRequest req, HttpServletResponse resp) throws ServletException, IOException {
        Cookie cookie=new Cookie("name","张三");
        //负整数，表示关闭浏览器失效
        //cookie.setMaxAge(-1);
        //正整数   表示会存活指定秒数
        cookie.setMaxAge(16);
        //响应cookie
        resp.addCookie(cookie);
    }
}
