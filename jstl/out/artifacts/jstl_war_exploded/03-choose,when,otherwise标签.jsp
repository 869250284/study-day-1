<%--
  Created by IntelliJ IDEA.
  User: 86925
  Date: 2021/10/23
  Time: 13:34
  To change this template use File | Settings | File Templates.
--%>
<%@ page contentType="text/html;charset=UTF-8" language="java" %>
<%@ taglib uri="http://java.sun.com/jsp/jstl/core" prefix="c"%>
<html>
<head>
    <title>03-choose,when,otherwise标签</title>
</head>
<body>
<%--
    choose,when,otherwise标签
        相当于java中switch case关键字
        格式：
        <c:choose>
            <c:when test="判断条件"></c:when>
            <c:when test=""></c:when>
            .....
            <c:otherwise></c:otherwise>
        </c:choose>
        注：
            1.choose和otherwise没有属性但是when标签必须有test属性
            2.choose标签中至少有一个when标签
            3.otherw标签必须在when标签之后
            4.choose标签中不能嵌套其他标签，if标签和otherwise标签可以嵌套
            5.otherwise标签中会在 所有when标签条件不满足时候进行

--%>
<%
    int score=60;
    request.setAttribute("score",score);
%>
<c:choose>
    <c:when test="${score<60}">
        <h2>不合格</h2>
    </c:when>
    <c:when test=""></c:when>
    <c:otherwise></c:otherwise>
</c:choose>
</body>
</html>
