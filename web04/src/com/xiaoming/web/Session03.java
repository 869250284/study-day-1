package com.xiaoming.web;

import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import javax.servlet.http.HttpSession;
import java.io.IOException;

/**
 * @program: web04
 * @description
 * @author: YouName
 * @create: 2021-10-19 15:09
 **/
/*
session作用域
 */
@WebServlet("/se03")
public class Session03 extends HttpServlet {
    @Override
    protected void service(HttpServletRequest req, HttpServletResponse resp) throws ServletException, IOException {
        HttpSession session=req.getSession();
        //获取session作用域
        String username=(String) session.getAttribute("username");
        System.out.println("session作用域的值  "+username);
        //获取request作用域
        String name=(String) req.getAttribute("name");
        System.out.println("这里是request作用域的值  "+name);
    }
}
