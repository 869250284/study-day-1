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
 * @create: 2021-10-19 14:59
 **/
@WebServlet("/se01")
public class Session01 extends HttpServlet {
    @Override
    protected void service(HttpServletRequest req, HttpServletResponse resp) throws ServletException, IOException {
        //获取session(如果session对象不存在则创建session如果session存在则获取session)
        HttpSession session=req.getSession();
        //获取session标识符
        System.out.println("session标识符为"+session.getId());
        //获取第一次访问访问时间
        System.out.println("session第一次访问时间"+session.getCreationTime());
        //获取最后一次访问时间
        System.out.println("session最后一次访问时间"+session.getLastAccessedTime());
        //是否新的session对象
        System.out.println("第一次创建为ture，不是第一次为flase"+session.isNew());
    }

}
