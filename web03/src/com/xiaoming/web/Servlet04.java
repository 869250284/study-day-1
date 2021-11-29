package com.xiaoming.web;

import javax.servlet.ServletException;
import javax.servlet.ServletOutputStream;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.Cookie;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import java.io.IOException;
import java.net.URLEncoder;

/**
 * @program: web03
 * @description
 * @author: YouName
 * @create: 2021-10-19 10:10
 **/
/*
cookie存中文问题
 */
@WebServlet("/cook04")
public class Servlet04 extends HttpServlet {
    @Override
    protected void service(HttpServletRequest req, HttpServletResponse resp) throws ServletException, IOException {
        String name="姓名";
        String value="张三";
        //将中文的值放入URLencoder.encode(name)放进去编码
        name=URLEncoder.encode(name);
        value=URLEncoder.encode(value);
        //创建cookie
        Cookie cookie=new Cookie(name,value);
        //响应cookie
        resp.addCookie(cookie);
    }
}

