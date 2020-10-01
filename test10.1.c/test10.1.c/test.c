#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>
//void menu()
//{
//	printf("**************************\n");
//	printf("*1.add***********2.sub****\n");
//	printf("*3.mul***********4.div****\n");
//	printf("********0.exit************\n");
//	printf("**************************\n");
//}
//int Add(int x ,int y )
//{
//	return x+y;
//}
//int Sub(int x,int y)
//{
//	return x-y;
//}
//int mul(int x ,int y)
//{
//	return x*y;
//}
//int Div(int x ,int y)
//{
//	return x/y;
//}
//int main()
//{
//	int input =0;
//	int x =0;
//	int y=0;
//	do
//	{
//		menu();
//		printf("请选择>");
//		scanf("%d",&input);
//		printf("请输入两个数");
//		scanf("%d%d",&x,&y);
//		switch (input)
//		{
//		case 1:
//			printf("请输入两个数");
//			printf("%d\n",Add(x,y));
//			break;
//		case 2:
//			printf("请输入两个数");
//			printf("%d\n",Sub(x,y));
//			break;
//		case 3:
//			printf("请输入两个数");
//			printf("%d\n",mul(x,y));
//			break;
//		case 4:
//			printf("请输入两个数");
//			printf("%d\n",Div(x,y));
//			break;
//		case 0:
//			printf("退出\n");
//			break;
//		default:
//			printf("选择错误，请重新选择");
//		}
//	}while(input);
//	return 0;
//}
//int main()
//{
//	char arr1[]="abc";
//	char arr2[]=""
//	return 0;
//}
//int main()
//{
//	const char *p1="abcdef";
//	const char *p2="abcqwer";
//	int ret=strncmp(p1,p2,4);
//	printf("%d\n",ret);
//	return 0;
//}
char *my_strstr( const char *p1, const char* p2)
{
	char * s1=p1;
	char * s2=p2;
	char * cur=p1;
	assert(p1!=NULL);
	assert(p2!=NULL);

	if(*p2=='\0')
	{
		return  p1;;
	}
	while(*cur)
	{
		s1=cur;
		s2=p2;
		while((*s1!='\0')&&(*s2!='\0')&&(*s1==*s2))
		{
			s1++;
			s2++;
		}
		if(*s2=='\0')
		{
			return cur;
		}
		cur++;
	}
}
int main()
{
	char *p1="abcdef";
	char *p2="def";
	char *ret=my_strstr(p1,p2);
	if(ret==NULL)
	{
		printf("子串不存在\n");
	}
	else
	{
		printf("%s\n",ret);
	}
	return 0;
}