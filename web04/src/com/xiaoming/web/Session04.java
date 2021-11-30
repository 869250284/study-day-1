package com.xiaoming.web;

import com.sun.scenario.effect.impl.sw.sse.SSEBlend_SRC_OUTPeer;

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
 * @create: 2021-10-19 15:23
 **/
/*
session销毁
    1.默认到期时间是三十分钟 可以在tomcat解压目录中web.xml中修改session-config
    2.手动设定失效时间 session.setMaxInactiveInterval("秒")通过session.getMaxInactiveInterval（获取失效时间）
    3.手动销毁
        session.invalidata();
    4.关闭浏览器
        session底层依赖cookie cookie默认关闭浏览器失效
    5.关闭服务器

 */
@WebServlet("/se04")
public class Session04 extends HttpServlet {
    @Override
    protected void service(HttpServletRequest req, HttpServletResponse resp) throws ServletException, IOException {
        HttpSession session=req.getSession();
        //2.手动设置失效时间
        //获取当前最大活动时间
        System.out.println("session最大活动时间： "+session.getMaxInactiveInterval());
        //设置最大活动时间
        session.setMaxInactiveInterval(20);
        System.out.println("设置后session最大活动时间： "+session.getMaxInactiveInterval());
        //手动销毁
        session.invalidate();
    }
}
