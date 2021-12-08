package com.xiaoming.calc;

/**
 * @program: calc
 * @description
 * @author: YouName
 * @create: 2021-11-01 13:49
 **/
public class XiaomingCalc {
    private String value1="";
    private String value2="";
    private String oper="";

    public String getValue1() {
        return value1;
    }

    public void setValue1(String value1) {
        this.value1 = value1;
    }

    public String getValue2() {
        return value2;
    }

    public void setValue2(String value2) {
        this.value2 = value2;
    }

    public String getOper() {
        return oper;
    }

    public void setOper(String oper) {
        this.oper = oper;
    }
    public String calculate(){
        double d1,d2,result=0.0;
        d1=Double.parseDouble(value1);
        d2=Double.parseDouble(value2);
        if(oper.equals("+")){
            result=d1+d2;
        }else if(oper.equals("-")){
            result=d1-d2;
        }else if(oper.equals("*")){
            result=d1*d2;
        }else{
            result=d1/d2;
        }
        return ""+result;
    }
}
