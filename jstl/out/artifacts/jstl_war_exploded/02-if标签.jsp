<%@ taglib prefix="c" uri="http://java.sun.com/jsp/jstl/core" %>
<%--
  Created by IntelliJ IDEA.
  User: 86925
  Date: 2021/10/23
  Time: 1:03
  To change this template use File | Settings | File Templates.
--%>
<%@ page contentType="text/html;charset=UTF-8" language="java" %>
<html>
<head>
    <title>if标签</title>
</head>
<body>
<%--
    if标签
        用来做条件判断，当条件满足时，执行具体代码
        格式：
            <c:if test="判断条件"></c:if>
        属性：
            test：判断条件
            var：限域变量名，用来接受判断条件的返回值
            scope：域对象的范围 page|request|session|application
        注：
            1.if标签操作必须是域对象的值
            2.if标签必须有test属性
            3.if标签没有else标签如果要设置else必须给个if完全为反的条件
--%>
<%
    int score=80;
    request.setAttribute("score",score);
%>
<c:if test="${score<60}">
    成绩不及格
</c:if>
<c:if test="${score==60}">成绩合格</c:if>
<c:if test="${score>60}">成绩优秀</c:if>
</body>
</html>
