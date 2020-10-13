#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//union Un//联合体也叫共用体
//{
//	char c;
//	int i;
//};
//int main()
//{
//	union Un u;
//	printf("%d\n",sizeof(u));
//	printf("%p\n",&u);
//
//	printf("%p\n",&(u.c));
//	printf("%p\n",&(u.i));
//	return 0;
//}
//int main()
//{
//	//int a =0x11223344;
//	//低地址----------->高地址
//	//【】【】【11】【22】【33】【44】【】【】【】【】【】【】
//	//【】【】【44】【33】【22】【11】【】【】【】【】【】【】
//	//讨论一个数据，在内存中的存放字节顺序
//	//大小端字节顺序
//
//	return 0;
//}
//int check_sys()
//{
//	union Un
//	{
//		char c;
//		int i;
//	}u;
//	u.i=1;
//	return u.c;
//}
//int main()
//{
//	int a =0;
//	int ret=check_sys();
//	if(1==ret)
//	{
//		printf("小端\n");
//	}
//	else
//		printf("大端\n");
//	return 0;
//}
//union Un
//{
//	int a ;
//	char arr;
//};
//int main()
//{
//	union Un u;
//	printf("%d\n",sizeof(u));
//	return 0;
//}

