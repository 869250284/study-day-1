package com.xiaoming.cglibProxy;

/**
 * @program: spring05_proxy
 * @description
 * @author: YouName
 * @create: 2021-11-30 23:36
 **/

import com.xiaoming.po.Person;
import net.sf.cglib.proxy.Enhancer;
import net.sf.cglib.proxy.MethodInterceptor;
import net.sf.cglib.proxy.MethodProxy;

import java.lang.reflect.Method;

/**
 * 得到代理对象
 */
public class CglibProxy {

    //目标对象
    private Object target;
    //通过带参构造，传递目标对象
    public CglibProxy(Object target) {
        this.target=target;
    }

    public Object getProxy(){
        //得到Enhancer对象（通过对象的creat方法，可以得到一个cglib的代理对象）
        Enhancer enhancer=new Enhancer();
        //定义代理对象的父类（父类是目标对象Person）
        enhancer.setSuperclass(target.getClass());
        //得到MethodInterceptor对象，MethodInterceptor接口继承了CallBack接口
        MethodInterceptor methodInterceptor=new MethodInterceptor() {
            /**
             * 当代理对象调用方法时，intercept方法就会被执行
             * @param o Cglib动态生成的代理实例 --personProxy
             * @param method 父类中的方法 --person中的eat方法
             * @param objects 方法所需要的参数
             * @param methodProxy 代理对象中的方法 personProxy中的eat方法
             * @return
             * @throws Throwable
             */
            @Override
            public Object intercept(Object o, Method method, Object[] objects, MethodProxy methodProxy) throws Throwable {
                System.out.println("当前执行类"+method.getName());
                //调用父类的方法
                method.invoke(target,objects);
                return null;
            }
        };
        //实现代理过程
        enhancer.setCallback(methodInterceptor);
        //得到代理对象

        return enhancer.create();
    }
}
