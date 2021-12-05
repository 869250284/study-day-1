import javax.servlet.annotation.WebServlet;
import java.sql.*;

/**
 * @program: JDBC02
 * @description
 * @author: YouName
 * @create: 2021-10-26 00:21
 **/
public class JDBCtest01 {
    public static void main(String[] args) {
        Connection conn=null;
        Statement stmt=null;
        ResultSet rs=null;
        try {//注册驱动
            DriverManager.registerDriver(new com.mysql.cj.jdbc.Driver());
            //获取连接
            conn=DriverManager.getConnection("jdbc:mysql://localhost:3306/yxmtest?characterEncoding=UTF-8","root","123456");
            //获取数据库操作对象
            stmt=conn.createStatement();
            //执行sql语句
            String sql="select * from yanxiaoming";
            rs=stmt.executeQuery(sql);
            if(rs ==null){
                System.out.println("无查询结果。。。");
            }
            else{
                System.out.println("rs....");
            }
            if (conn ==null){
                System.out.println("连接失败");
            }
            else {
                System.out.println("连接成功");
            }
            //处理查询结果集
        } catch (SQLException e) {
            e.printStackTrace();
        }finally {
            //释放资源
            if(rs !=null){
                try {
                    rs.close();
                } catch (SQLException e) {
                    e.printStackTrace();
                }
            }
            if(stmt !=null){
                try {
                    stmt.close();
                } catch (SQLException e) {
                    e.printStackTrace();
                }
            }
            if( conn !=null){
                try {
                    conn.close();
                } catch (SQLException e) {
                    e.printStackTrace();
                    System.out.println("....");
                }
            }
        }
    }
}
