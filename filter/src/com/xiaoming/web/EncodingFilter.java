package com.xiaoming.web;

import javax.servlet.*;
import javax.servlet.Filter;
import javax.servlet.annotation.WebFilter;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import java.io.IOException;

/**
 * @program: filter
 * @description
 * @author: YouName
 * @create: 2021-10-24 23:41
 **/
@WebFilter("/*")
public class EncodingFilter implements Filter {
    @Override
    public void init(FilterConfig filterConfig) throws ServletException {

    }

    @Override
    public void destroy() {

    }

    @Override
    public void doFilter(ServletRequest servletRequest, ServletResponse servletResponse, FilterChain filterChain) throws IOException, ServletException {
        //设置基于HTTP的
        HttpServletRequest request=(HttpServletRequest) servletRequest;
        HttpServletResponse response=(HttpServletResponse) servletResponse;

        //设置请求编码
        request.setCharacterEncoding("UTF-8");
        //设置响应编码
        response.setCharacterEncoding("text/html;charset=UTF-8");

        //放行资源
        filterChain.doFilter(request,response);
    }
}
