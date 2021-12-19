package com.shsxt.servlet;

import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import javax.servlet.http.HttpSession;
import java.io.IOException;

/**
 * @program: listener
 * @description
 * @author: YouName
 * @create: 2021-10-25 00:13
 **/
@WebServlet("/online")
public class OnlineServlet extends HttpServlet {
    @Override
    protected void service(HttpServletRequest req, HttpServletResponse resp) throws ServletException, IOException {
        //创建session对象
        HttpSession session=req.getSession();
        //判断是否是注销
        String flag=req.getParameter("flag");
        if("1".equals(flag)){
            //销毁session对象
            session.invalidate();
        }
        //获取访问者的ip
        String ip=req.getRemoteAddr();
        System.out.println("当前IP为："+ip);
        //将在线用户输出
        Integer onlineNumber=(Integer) session.getServletContext().getAttribute("onlineNumber");
        //设置相应编码
        resp.setContentType("text/html;charset=utf-8");
        //输出人数
        resp.getWriter().write("<h2>在线人数："+onlineNumber+"</h2><h3><a href='online?flag=1'>注销</a></h3>"+"当前IP为："+ip);
        resp.getWriter().close();
    }
}
