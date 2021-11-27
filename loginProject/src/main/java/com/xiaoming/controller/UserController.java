package com.xiaoming.controller;

import com.xiaoming.model.ResultInfo;
import com.xiaoming.service.UserService;
import org.springframework.stereotype.Controller;

import javax.annotation.Resource;

/**
 * @program: loginProject
 * @description
 * @author: YouName
 * @create: 2021-11-27 01:28
 **/
@Controller
public class UserController {
    @Resource
    private UserService userService;
    /*
        用户登录
            1.参数校验，判断用户名和密码是否为空
                如果为空，resultinfo的code为0 msg为xxx不能为空返回resultinfo对象
            2.通过用户名查询用户对象
                判断用户对象是否为空
                    如果为空，resultinfo的code为0 msg为用户不存在返回resultinfo对象
            3.比较前台是否传递的密码与数据库是否一直
                如果不一致，resultInfo的code为0，msg为密码不正确，返回resultInfo对象
            4.如果正确登陆成功
     */
    public ResultInfo userLogin(String userName,String userPwd){
        //调用Service的登陆方法，得到返回的resultInfo对象
        ResultInfo resultInfo=userService.userLogin(userName,userPwd);
        //将resultInfo对象返回
        return resultInfo;
    }
}
