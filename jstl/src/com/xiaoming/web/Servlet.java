package com.xiaoming.web;

import com.xiaoming.po.User;

import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import java.io.IOException;
import java.util.ArrayList;
import java.util.List;

/**
 * @program: jstl
 * @description
 * @author: YouName
 * @create: 2021-10-23 15:15
 **/
@WebServlet("/test")
public class Servlet extends HttpServlet {
    @Override
    protected void service(HttpServletRequest req, HttpServletResponse resp) throws ServletException, IOException {
        List <String> list=new ArrayList<>();
        list.add("aaa");
        list.add("bbb");
        list.add("ccc");
        req.setAttribute("list",list);

        List<User> userList=new ArrayList<>();
        User user1=new User();
        user1.setUserID(1);
        user1.setUsername("zhangsan");
        user1.setUpwd("123456");
        User user2=new User();
        user2.setUserID(2);
        user2.setUsername("lisi");
        user2.setUpwd("123456");
        User user3=new User();
        //设置一下触发代码
        user3.setUsername("<script>alert(1)</script>");

        userList.add(user1);
        userList.add(user2);
        userList.add(user3);
        req.setAttribute("userList",userList);
        //请求转发
        req.getRequestDispatcher("05-test.jsp").forward(req,resp);
    }
}
