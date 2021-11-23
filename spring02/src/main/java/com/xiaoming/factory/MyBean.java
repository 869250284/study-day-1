package com.xiaoming.factory;

/**
 * @program: spring02
 * @description
 * @author: YouName
 * @create: 2021-11-21 00:33
 **/
/*
    用来接受xml配置文件中的bean标签
* */
public class MyBean {
    private String id;//Bean标签对应的ID属性
    private String clazz;//Bean标签对应的class属性

    public String getId() {
        return id;
    }

    public void setId(String id) {
        this.id = id;
    }

    public String getClazz() {
        return clazz;
    }

    public void setClazz(String clazz) {
        this.clazz = clazz;
    }
}
