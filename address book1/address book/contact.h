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
void Delcontact(struct Contact *ps);//ɾ��ָ������ϵ��
void SearchContact(const struct Contact *ps);//������ϵ��
void ModIFYcontact(struct Contact *ps);//�޸�ָ����ϵ��