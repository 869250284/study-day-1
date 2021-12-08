<%--
  Created by IntelliJ IDEA.
  User: 86925
  Date: 2021/11/1
  Time: 13:48
  To change this template use File | Settings | File Templates.
--%>
<%@ page contentType="text/html;charset=UTF-8" language="java" %>
<jsp:useBean id="calculator" class="com.xiaoming.calc.XiaomingCalc" scope="page"/>
<html>
  <head>
    <title>计算结果页面</title>
  </head>
  <body>
  <jsp:setProperty name="calculator" property="*"/>
  <jsp:getProperty property="value1" name="calculator"/>
  <jsp:getProperty name="calculator" property="oper"/>
  <jsp:getProperty name="calculator" property="value2"/>
  <%=calculator.calculate() %>
  </body>
</html>
