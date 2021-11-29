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
 * @create: 2021-10-19 14:31
 **/
/*
Cookie的路径
1.在当前服务器中，任意资源都可以访问
 */
@WebServlet("/cook05")
public class Servlet05 extends HttpServlet {
    @Override
    protected void service(HttpServletRequest req, HttpServletResponse resp) throws ServletException, IOException {
        Cookie cookie1=new Cookie("a1","A1");
        //设置响应cookie
        resp.addCookie(cookie1);
        //在当前服务器中，任意资源都可以访问
        Cookie cookie2=new Cookie("a1","A2");
        cookie2.setPath("/");
        resp.addCookie(cookie2);
        Cookie cookie3=new Cookie("a1","A1");
    }
}
