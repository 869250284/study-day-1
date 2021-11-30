package com.xiaoming.jdkProxy;

/**
 * @program: spring05_proxy
 * @description
 * @author: YouName
 * @create: 2021-11-30 15:34
 **/

import java.lang.reflect.InvocationHandler;
import java.lang.reflect.Method;
import java.lang.reflect.Proxy;

/**
 * JDK动态代理
 *  得到代理对象
 *      通过Proxy类中的newProxyInstance方法，得到代理对象，返回Object类型
 */
public class JdkProxy {
    /**
     * 得到代理对象
     * @return
     */
    //准备目标对象
    private Object target;
    //通过带参构造传递目标对象

    public JdkProxy(Object target) {
        this.target = target;
    }

    public Object getProxy(){
        //得到类加载器的三个参数
        ClassLoader classLoader=this.getClass().getClassLoader();
        //得到目标对象实现的接口数组
        Class[] interfaces=target.getClass().getInterfaces();
        //得到InvocationHandler接口（每当代理对象调用方法时都会执行InvocationHandler中的invoke方法）
        InvocationHandler invocationHandler=new InvocationHandler() {
            /**
             * 当代理对象每调用一次方法，会调用一次invoke方法
             *              *  执行目标对象的方法
             *              *  增加目标对象的行为
             * @param proxy 代理对象的实例
             * @param method 目标对象的方法
             * @param args  目标对象所需要的参数
             * @return
             * @throws Throwable
             */
            @Override
            public Object invoke(Object proxy, Method method, Object[] args) throws Throwable {
                //行为增强
                System.out.println("方法执行前");
                //通过反射，调用指定类的指定方法
                Object object=method.invoke(target,args);
                System.out.println("方法执行后");
                return object;
            }
        };
        //得到对象
        Object proxy= Proxy.newProxyInstance(classLoader,interfaces,invocationHandler);
        return proxy;
    }
}
