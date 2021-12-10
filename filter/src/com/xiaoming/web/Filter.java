package com.xiaoming.web;

import javax.servlet.*;
import javax.servlet.annotation.WebFilter;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import java.io.IOException;

/**
 * @program: filter
 * @description
 * @author: YouName
 * @create: 2021-10-24 15:51
 **/
@WebFilter("/s01")
public class Filter implements javax.servlet.Filter {
    @Override
    public void init(FilterConfig filterConfig) throws ServletException {

    }

    @Override
    public void destroy() {

    }

    @Override
    public void doFilter(ServletRequest servletRequest, ServletResponse servletResponse, FilterChain filterChain) throws IOException, ServletException {
        System.out.println("Filter01......");
        HttpServletRequest request=(HttpServletRequest) servletRequest;
        HttpServletResponse response=(HttpServletResponse) servletResponse;
        //doFilter方法之前的代码是处理请求的
        //doFilter方法之后是处理响应的
        //放行资源
        filterChain.doFilter(servletRequest,servletResponse);
    }
}
