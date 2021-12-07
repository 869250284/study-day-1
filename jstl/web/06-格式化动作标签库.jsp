<%@ page import="javax.xml.crypto.Data" %>
<%@ page import="java.util.Date" %><%--
  Created by IntelliJ IDEA.
  User: 86925
  Date: 2021/10/23
  Time: 16:24
  To change this template use File | Settings | File Templates.
--%>
<%@ page contentType="text/html;charset=UTF-8" language="java" %>
<%@taglib uri="http://java.sun.com/jsp/jstl/fmt" prefix="fmt"%>>
<html>
<head>
    <title>格式化动作标签</title>
</head>
<body>
    <%--
        formatNumber标签
        formatNumber标签用于格式化数字，百分比，货币。j将数字型数据转换成字符串类型数据
        <fmt:formatNumber value="要格式化的数值" type="格式化的类型" var="限域变量名"></fmt:formatNumber>
    --%>
<fmt:formatNumber value="10" type="number" ></fmt:formatNumber><br>
    <fmt:formatNumber value="10" type="number" var="num"></fmt:formatNumber>${num}<br>
    <fmt:formatNumber value="10" type="currency"></fmt:formatNumber><br>
    <fmt:formatNumber value="10" type="percent" ></fmt:formatNumber><br>
    <%--
        formatDate标签
            将日期型数据转换成指定字符串类型数据
    --%>
    <%
        request.setAttribute("date", new Date());
    %>
    <fmt:formatDate value="${date}" type="date" /><br>
    <fmt:formatDate value="${date}" type="date" dateStyle="long" /><br>
    <fmt:formatDate value="${date}" type="time" /><br>
    <fmt:formatDate value="${date}" type="time" timeStyle="full" /><br>
    <fmt:formatDate value="${date}" type="both" /><br>
    <fmt:formatDate value="${date}" pattern="yyyy-MM-dd HH:mm" /><br>
<hr>
    <%--
        parseNumber标签：将指定字符串类型数据转换成数值型
    --%>
    <fmt:parseNumber value="100"/><br>
    <fmt:parseNumber value="100" type="number"/><br>
    <fmt:parseNumber value="100%" type="percent"/><br>
    <fmt:parseNumber value="￥100.00" type="currency"/><br>

</body>
</html>
