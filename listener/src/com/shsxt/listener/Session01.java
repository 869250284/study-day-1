package com.shsxt.listener;

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
 * @create: 2021-10-24 23:57
 **/
@WebServlet("/se01")
public class Session01 extends HttpServlet {
    @Override
    protected void service(HttpServletRequest req, HttpServletResponse resp) throws ServletException, IOException {
        //创建session对象
        HttpSession session =req.getSession();

        //接受一下参数
        String flag=req.getParameter("flag");
        //判断参数不为空则销毁
        if("1".equals(flag)){
            //销毁session
            session.invalidate();
        }
    }
}
