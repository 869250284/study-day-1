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
@WebServlet("/se02")
public class Session02 extends HttpServlet {
    @Override
    protected void service(HttpServletRequest req, HttpServletResponse resp) throws ServletException, IOException {
        HttpSession session=req.getSession();
        //设置session域对象(一次会话有效)
        session.setAttribute("username","admin");
        //设置request作用域(只在一次请求有效)
        req.setAttribute("name","zhangsan");
        //请求转发（只在一次请求中有效）
        req.getRequestDispatcher("se03").forward(req,resp);
    }
}
