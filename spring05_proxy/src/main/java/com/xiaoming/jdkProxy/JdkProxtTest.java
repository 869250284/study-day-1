package com.xiaoming.jdkProxy;

import com.xiaoming.po.User;
import com.xiaoming.po.UserAction;

/**
 * @program: spring05_proxy
 * @description
 * @author: YouName
 * @create: 2021-11-30 17:00
 **/
public class JdkProxtTest {
    public static void main(String[] args) {
        //得到目标对象
        User target=new User();
        //得到代理类
        JdkProxy jdkProxy=new JdkProxy(target);
        //通过代理类，得到代理对象
        UserAction Userproxy= (UserAction) jdkProxy.getProxy();
        //调用接口类中的方法
        Userproxy.toRentHouse();
        //调用有返回值的方法
        String str=Userproxy.toMarry();
        System.out.println(str);
    }
}
