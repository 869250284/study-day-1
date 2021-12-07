<%@ page import="java.util.Date" %>
<%@ page import="java.util.SimpleTimeZone" %>
<%@ page import="java.text.SimpleDateFormat" %><%--
  Created by IntelliJ IDEA.
  User: 86925
  Date: 2021/11/1
  Time: 13:35
  To change this template use File | Settings | File Templates.
--%>
<%@taglib uri="http://java.sun.com/jsp/jstl/core" prefix="c"%>
<%@ page contentType="text/html;charset=UTF-8" language="java" %>
<html>
<head>
    <title>Title</title>
</head>
<body>
<%
    Date date=new Date();
    SimpleDateFormat t=new SimpleDateFormat("yyyy/MM/dd HH:mm:ss");
    String time=t.format(date);
    out.print("欢迎来到java WEB开发联盟："+time);
    response.setIntHeader("Refresh", 1);
    out.close();
%>
</body>
</html>
