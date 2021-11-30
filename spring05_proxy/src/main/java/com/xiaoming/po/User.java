package com.xiaoming.po;

/**
 * @program: spring05_proxy
 * @description
 * @author: YouName
 * @create: 2021-11-30 16:57
 **/
public class User implements UserAction {
    @Override
    public void toRentHouse() {
        System.out.println("租房。。。");
    }

    @Override
    public String toMarry() {
        System.out.println("toMarry调用有返回值的参数");
        return "ToMarry调用";
    }
}
