package cao.xiaoming.web;

import com.xiaoming.service.UserService;

import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import java.io.IOException;

/**
 * @program: maven_parent
 * @description
 * @author: YouName
 * @create: 2021-10-31 17:11
 **/
@WebServlet("/user")
public class UserServlet extends HttpServlet {
    @Override
    protected void service(HttpServletRequest req, HttpServletResponse resp) throws ServletException, IOException {
        System.out.println("User Servlet Test....");
        //调用service模块
        UserService.testService();
    }
}
