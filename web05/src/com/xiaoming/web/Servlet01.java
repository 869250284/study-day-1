package com.xiaoming.web;

import javax.servlet.ServletConfig;
import javax.servlet.ServletContext;
import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import java.io.IOException;

/**
 * @program: web05
 * @description
 * @author: YouName
 * @create: 2021-10-19 15:42
 **/
/*
ServletContext对象
 */
@WebServlet("/ser01")
public class Servlet01 extends HttpServlet {
    @Override
    protected void service(HttpServletRequest req, HttpServletResponse resp) throws ServletException, IOException {
        //通过request获取对象
        ServletContext servletContext=req.getServletContext();
        //通过session获取
        ServletContext servletContext1=req.getSession().getServletContext();
        //通过Servletconfig对象
        ServletContext servletContext2=getServletConfig().getServletContext();
        //直接获取
        ServletContext servletContext3=getServletContext();


        //常用方法
        //获取服务器的版本信息
        String serverInfo=servletContext.getServerInfo();
        System.out.println("获取服务器版本信息："+serverInfo);
        //获取项目真实路径
        String Path=servletContext.getRealPath("/");
        System.out.println("服务器真实路径："+Path);

    }
}
