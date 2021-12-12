package com.xiaoming.service;

import com.xiaoming.dao.AccountDao;

/**
 * @program: spring03
 * @description
 * @author: YouName
 * @create: 2021-11-23 23:37
 **/
/*
    set方法注入
 */
public class AccountService {
    private AccountDao accountDao;


    public void setAccountDao(AccountDao accountDao) {
        this.accountDao = accountDao;
    }

    public void test(){
        System.out.println("AccountService...");
        accountDao.test();
    }
}
