package com.xiaoming.JDBC;

import java.sql.*;

/**
 * @program: JDBC
 * @description
 * @author: YouName
 * @create: 2021-10-25 11:07
 **/
/*
JDBC编程六步
    1.注册驱动
        (通知JAVA程序我们即将要连接那个品牌的数据库)
    2.获取数据库连接
        (java进程和mysql进程，两个进程的通道打开)
    3.获取数据库操作对象
        (这个对象很重要，用这个对象执行sql的)
    4.执行sql语句
    5.处理查询结果
    6.释放资源
        (关闭所有资源，因为JDBC毕竟是进程之间的通信，占用很多资源，需要关闭！)
 */
public class JDBC {
    public static void main(String[] args) {
        Connection conn=null;
        Statement stmt=null;
        //1.注册驱动
        try{
            Driver driver=new com.mysql.jdbc.Driver();
            DriverManager.registerDriver(driver);
            //2.获取连接数据库
            String url="jdbc:mysql://localhost:3306/跟数据库名";
            String user="root";
            String password="123456";
            DriverManager.getConnection(url,user,password);
            //3.获取数据库操作对象
            conn.createStatement();
            //4.执行sql语句
            String insertSql="insert into yxmtest";
            //Statement接口中executeUpdate方法专门来执行DML语句的
            //该方法的返回值表示：影响了数据库表中的总记录条数！
            int count=stmt.executeUpdate(insertSql);
        }catch (SQLException e){
            e.printStackTrace();
        }
        //释放资源
        finally {
            //先释放statement在释放connection
            //分别进行try catch处理
            //放到finally关闭
            if(stmt !=null){
                try{
                    stmt.close();
                }catch (SQLException e){
                    e.printStackTrace();
                }
            }
            if(conn !=null){
                try {
                    conn.close();
                }catch (SQLException e){
                    e.printStackTrace();
                }
            }
        }
    }
}
