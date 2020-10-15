#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<memory.h>
#include<stdlib.h>
#include<string.h>
#define MAX_NAME 20
#define MAX 1000
#define MAX_SEX 5
#define MAX_tele 13
#define MAX_addr 30
enum Option
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	SORT
};
struct People 
{
	char name [MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_tele];
	char addr[MAX_addr];
};
//通讯录类型
struct Contact
{
	struct People data[MAX];//存放一千个信息
	int size ;//当前已经有的元素个数
};
//声明函数
void InitContact(struct Contact * ps);
void AddContact(struct Contact *ps);//用来添加信息
void ShowContact(const struct Contact *ps);//用来显示已经存储的信息
void Delcontact(struct Contact *ps);//删除指定的联系人
void SearchContact(const struct Contact *ps);//查找联系人
void ModIFYcontact(struct Contact *ps);//修改指定联系人