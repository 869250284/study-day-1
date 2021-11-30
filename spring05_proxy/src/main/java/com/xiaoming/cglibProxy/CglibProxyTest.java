package com.xiaoming.cglibProxy;

/**
 * @program: spring05_proxy
 * @description
 * @author: YouName
 * @create: 2021-11-30 23:36
 **/

import com.xiaoming.po.Person;

/**
 * cglib动态代理
 */
public class CglibProxyTest {
    public static void main(String[] args) {
        //得到目标对象
        Person person=new Person();
        //调用方法
        //person.eat();

        //得到代理类
        CglibProxy cglibProxy=new CglibProxy(person);

        //得到代理对象
        Person personproxy= (Person) cglibProxy.getProxy();
        //通过代理对象调用父类中的方法
        personproxy.eat();
    }
}
