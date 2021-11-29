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
 * @create: 2021-10-19 09:33
 **/
/*
获取cookie对象
通过request.getcookies();获取cookie对象数组
 */
@WebServlet("/cook02")
public class Servlet02 extends HttpServlet {
    @Override
    protected void service(HttpServletRequest req, HttpServletResponse resp) throws ServletException, IOException {
        Cookie[] cookies=req.getCookies();
        //判断cookie是否存在
        if(cookies!=null && cookies.length>0){
            //遍历cookie数组
            for (Cookie cookie:cookies){
                if("name".equals(cookie.getName())){
                    System.out.println(cookie.getValue());
                }
            }
        }
    }
}
