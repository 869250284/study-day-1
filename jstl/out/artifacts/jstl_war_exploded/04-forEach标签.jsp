<%@ page import="java.util.List" %>
<%@ page import="java.util.ArrayList" %><%--
  Created by IntelliJ IDEA.
  User: 86925
  Date: 2021/10/23
  Time: 13:55
  To change this template use File | Settings | File Templates.
--%>
<%@ page contentType="text/html;charset=UTF-8" language="java" %>
<%@taglib uri="http://java.sun.com/jsp/jstl/core" prefix="c"%>
<html>
<head>
    <title>forEach标签</title>
</head>
<body>
<%--
    forEach标签：
      格式：
        <c:foreach
            items="<object>"
            begin="<int>"
            end="<int>"
            step="<int>"
            var="<string>"
            varStatus="<string>">
        </c:foreach>
     遍历主体内容多次
        <c:forEach begin="开始数" end="结束数" var="限域变量名" step="间隔数"><c:foreach>
     遍历：
        <c:forEach items="域对象要遍历的集合" var="限域变量名"></c:forEach>
        想当于java中的
            for(String str:list){
            }
--%>
    <%--遍历主体内容多次--%>
    <c:forEach begin="1" end="10" var="i">
        ${i}
        <h2></h2>
    </c:forEach>
    <%--遍历--%>
        <%
            List<String> list=new ArrayList<>();
            list.add("aaa");
            list.add("bbb");
            list.add("ccc");
            request.setAttribute("list",list);
        %>
        <c:forEach items="${list}" var="list" varStatus="iteams">
            ${list}<br>--是否第一个被遍历${iteams.first}--当前下标${iteams.index}
            --当前循环次数:${iteams.count}--是否最后一个被遍历:${iteams.last}
            <br>
        </c:forEach>
</body>
</html>
