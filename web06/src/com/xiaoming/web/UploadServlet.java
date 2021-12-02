package com.xiaoming.web;

import javax.servlet.ServletException;
import javax.servlet.annotation.MultipartConfig;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import javax.servlet.http.Part;
import java.io.IOException;

/**
 * @program: web06
 * @description
 * @author: YouName
 * @create: 2021-10-19 16:12
 **/
/*
文件上传
    如果是文件上传表单(二进制表单)对应的servlet需要添加注解@MultipartConfig
    servlet将Multipartconfig/form-data的post请求封装part通过Part对上传的文件操作
 */
@WebServlet("/UploadServlet")
@MultipartConfig//文件上传一定要加！！！
public class UploadServlet extends HttpServlet {
    @Override
    protected void service(HttpServletRequest req, HttpServletResponse resp) throws ServletException, IOException {
        //设置请求的编码格式
        req.setCharacterEncoding("UTF-8");

        //获取普通表单数据
        String usernmae=req.getParameter("username");//代表文本框的属性值
        System.out.println("拿到的普通表单的username"+usernmae);

        //获取上传的文件
        //通过request.getPart(name)方法，获取part对象  name代表前端name的属性
        Part part=req.getPart("myfile");
        //获取上传文件的文件名
        String filename=part.getSubmittedFileName();
        System.out.println("上传文件名为："+filename);

        //获取项目真实路径  意思就是设置文件存放路径
        String realPath=req.getServletContext().getRealPath("/upload");

        //上传文件
        part.write(realPath+filename);

    }
}
