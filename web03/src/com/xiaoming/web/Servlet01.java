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
 * @create: 2021-10-19 09:26
 **/
/*
COOkie的创建与发送
new cookie("名称","值")；
response.addcookie(cookie对象)
 */
    @WebServlet("/cook01")
public class Servlet01 extends HttpServlet {
    @Override
    protected void service(HttpServletRequest req, HttpServletResponse resp) throws ServletException, IOException {
        //创建cookie对象
        Cookie cookie=new Cookie("name","张三");
        resp.addCookie(cookie);
    }
}
