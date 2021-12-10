package com.xiaoming.web;

import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import java.io.IOException;

/**
 * @program: filter
 * @description
 * @author: YouName
 * @create: 2021-10-24 15:35
 **/
@WebServlet("/s01")
public class Servlet01 extends HttpServlet {
    @Override
    protected void service(HttpServletRequest req, HttpServletResponse resp) throws ServletException, IOException {
        System.out.println("11111100111");
        System.out.println("获取参数");
        String reqq=req.getParameter("username");
        System.out.println("获取的参数为："+reqq);
    }
}
