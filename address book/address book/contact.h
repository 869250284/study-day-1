#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<memory.h>
#define MAX_NAME 20
#define MAX 1000
#define MAX_SEX 5
#define MAX_tele 12
#define MAX_addr 30
struct People 
{
	char name [MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_tele];
	char addr[MAX_addr];
};
//ͨѶ¼����
struct Contact
{
	struct People data[MAX];//���һǧ����Ϣ
	int size ;//��ǰ�Ѿ��е�Ԫ�ظ���
};
//��������
void InitContact(struct Contact * ps);
void AddContact(struct Contact *ps);//���������Ϣ
void ShowContact(const struct Contact *ps);//������ʾ�Ѿ��洢����Ϣ
