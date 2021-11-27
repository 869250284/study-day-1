package com.xiaoming.model;

/**
 * @program: loginProject
 * @description
 * @author: YouName
 * @create: 2021-11-27 01:30
 **/
/*
用来封装返回的结果
 */
public class ResultInfo {
    private Integer code;//状态码 0表示成功  1表示失败
    private String msg;//提供错误信息

    public Integer getCode() {
        return code;
    }

    public void setCode(Integer code) {
        this.code = code;
    }

    public String getMsg() {
        return msg;
    }

    public void setMsg(String msg) {
        this.msg = msg;
    }

    public String toString() {
        return "ResultInfo{" +
                "code=" + code +
                ", msg='" + msg + '\'' +
                '}';
    }
}
