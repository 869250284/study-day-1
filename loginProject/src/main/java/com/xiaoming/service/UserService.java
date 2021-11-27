package com.xiaoming.service;

import com.xiaoming.dao.UserDao;
import com.xiaoming.model.ResultInfo;
import com.xiaoming.po.User;
import org.springframework.stereotype.Service;

import javax.annotation.Resource;

/**
 * @program: loginProject
 * @description
 * @author: YouName
 * @create: 2021-11-27 01:27
 **/
@Service
public class UserService {
    @Resource
    private UserDao userDao;
    public ResultInfo userLogin(String userName,String userPwd){
        ResultInfo resultInfo=new ResultInfo();
        //判断用户名与密码是否为空
        if(userName==null ||"".equals(userName)){
            resultInfo.setCode(0);
            resultInfo.setMsg("用户名称不能为空");
            return resultInfo;
        }
        if(userPwd==null ||"".equals(userPwd)){
            resultInfo.setCode(0);
            resultInfo.setMsg("用户密码不能为空");
            return resultInfo;
        }
        //查用户对象
        User user=userDao.queryUserByname(userName);
        //判断用户对象是否为空
        if(userName==null){
            resultInfo.setCode(0);
            resultInfo.setMsg("用户不存在！");
            return resultInfo;
        }
        //如果用户存在，则比较密码
        if(!userPwd.equals(user.getUserPwd())){
            resultInfo.setCode(0);
            resultInfo.setMsg("用户密码错误");
            return resultInfo;
        }
        //登陆成功的地方
        resultInfo.setCode(1);
        resultInfo.setMsg("登陆成功");
        return resultInfo;
    }
}
