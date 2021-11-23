package com.xiaoming.factory;

import org.dom4j.Document;
import org.dom4j.Element;
import org.dom4j.XPath;
import org.dom4j.io.SAXReader;

import java.net.URL;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

/**
 * @program: spring02
 * @description
 * @author: YouName
 * @create: 2021-11-20 23:53
 **/
/*
springIOC Bean对象实例化模拟实现
    1.通过构造器得到配置文件
    2.解析配置文件，通过集合接受所有的bean标签（集合类型是一个javabean对象（实体类）javabean中有
    id属性和class字段）
    3.遍历集合，得到对应的ID字段和对应的class字段，通过class字段的值得到对应的实例化对象并设置到map中
    4.通过id从map对象获取实例化好的对象
* */
public class MyClassPathXmlApplicationContext implements MyBeanFactory{
    //准备map对象，用来存放实例化好的Bean对象 （key是id属性值，value是class属性值）
    private Map<String,Object> beanMap=new HashMap<>();
    //准备list集合，用来存放解析xml解析后的bean标签
    List<MyBean> myBeanList=null;
    //通过构造器，传递配置文件
    public MyClassPathXmlApplicationContext(String fileName) {
        //1.解析XML文件
        parseXML(fileName);
        //2.实例化Bean对象
        instanceBean();
    }
    /*
    解析xml文件
    1.得到解析器SaxReader
    2.得到需要被解析配置文件的url
    3.解析配置文件，返回document对象
    4.通过xpath语法，得到beans标签下的所有bean标签 beans/bean
    5.通过指定语法解析，得到list（element）
    6.遍历list<Element>集合，得到bean标签的ID属性值与CLASS属性值并且设置到Mybean对象中
    7.将Mybean设置到自己指定的集合中
    * */
    private void parseXML(String fileName) {
        //得到解析器SaxReader
        SAXReader saxReader=new SAXReader();
        //得到需要被解析配置文件的url
        URL url=this.getClass().getClassLoader().getResource(fileName);
        try{
            //解析配置文件，返回document对象
            Document document=saxReader.read(url);
            //通过xpath语法，得到beans标签下的所有bean标签 beans/bean
            XPath xPath=document.createXPath("beans/bean");
            //通过指定语法解析，得到list（element）
            List<Element>elements=xPath.selectNodes(document);
            //遍历list<Element>集合，得到bean标签的ID属性值与CLASS属性值并且设置到Mybean对象中
            if(elements!=null && elements.size()>0){
                //实例化集合
                myBeanList =new ArrayList<>();
                for (Element element: elements) {
                    //通过属性名获取对应的属性值
                    String id=element.attributeValue("id");
                    String clazz=element.attributeValue("class");
                    //得到Mybean对象
                    MyBean myBean=new MyBean();
                    myBean.setId(id);
                    myBean.setClazz(clazz);
                    //将Mybean设置到集合中
                    myBeanList.add(myBean);
                }
            }
        }catch (Exception e){
            e.printStackTrace();
        }
        /*实例化Bean对象
        1.遍历MyBeanList集合，得到MyBean对象
        2.得到MyBean中的id字段值与class字段值
        3.通过class字段值，得到对应的实例化的bean对象
        4.将id字段值与实例化好的Bean对象设置到map中
         */
    }
    private void instanceBean() {
        //判断集合是否为空
        if (myBeanList!=null){
            for (MyBean bean:myBeanList) {
               try {
                   //通过class字段得到实例化的bean对象
                   Object object=Class.forName(bean.getClazz()).newInstance();
                   //将ID和bean对象设置到map中
                   beanMap.put(bean.getId(),object);
               }catch (Exception e){
                   e.printStackTrace();
               }
            }
        }
    }

    @Override
    /*通过ID得到bean对象*/
    public Object getBean(String id) {
        Object object=beanMap.get(id);
        return object;
    }
}
