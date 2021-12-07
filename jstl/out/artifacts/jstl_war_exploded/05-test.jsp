<%--
  Created by IntelliJ IDEA.
  User: 86925
  Date: 2021/10/23
  Time: 15:34
  To change this template use File | Settings | File Templates.
--%>
<%@ page contentType="text/html;charset=UTF-8" language="java" %>
<%@ taglib uri="http://java.sun.com/jsp/jstl/core" prefix="c"%>
<html>
<head>
    <title>Title</title>
</head>
<body>
<%--判断数据是否存在--%>
    <c:if test="${!empty userList}">
        <table border="1" width="400px"  style="border-collapse: collapse" >
            <tr>
                <th>编号</th>
                <th>姓名</th>
                <th>密码</th>
            </tr>
            <%--遍历数据--%>
            <c:forEach items="${userList}" var="user">
                <tr>
                    <td>
                        ${user.userID}</td>
                    <td>${user.username}</td>
                    <td>${user.upwd}</td>
                </tr>

            </c:forEach>
        </table>
    </c:if>
</body>
</html>
