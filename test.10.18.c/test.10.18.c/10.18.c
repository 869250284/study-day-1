#define _CRT_SECURE_NO_WARNINGS 1
#include<stdlib.h>
#include<stdio.h>
#include<errno.h>
#include<string.h>
#include<Windows.h>
////int main()
////{
////	int *p=(int*)malloc(10*sizeof(int));
////	if(p==NULL)
////	{
////		printf("%s\n",strerror(errno));
////	}
////	else
////	{
////		int i=0;
////		for(i=0;i<10;i++)
////		{
////			*(p+i)=i;
////			printf("%d ",*(p+i));
////		}
////	}
////	free(p);
////	p=NULL;
////	return 0;
////}
// /*int main()
// {
//	 int *p=(int*)calloc(10,sizeof(int));
//	 if(p==NULL)
//		 printf("%s\n",strerror(errno));
//	 else
//	 {
//		 int i=0;
//		 for(i=0;i<10;i++)
//			 printf("%d ",*(p+i));
//	 }
//	 free(p);
//	 p=NULL;
//	 return 0;
// }*/
////int main()
////{
////	realloc
////	return 0;
//////}
////int main()
////{
//	/*int *p=(int*)malloc(40);
//	if(p==NULL)
//	{
//		return 0;
//	}
//	int* p2=(int*)realloc(p,80);
//	if(p2!=NULL)
//	{
//		p=p2;
//	}*/
////	int *p=(int *)realloc(NULL,40);
////	return 0;
////}
////对NULL指针的解引用操作
////int main()
////{
//	//int *p=(int*)malloc(40);
//	////对p进行相关的判断 是否为空指针
//	//*p=10;//有可能对NULL指针解引用失败 malloc开辟空间失败
//	//2.对动态开辟内存的一个越界访问
//	//int *p=(int*)malloc(40);
//	//if(p==NULL)
//	//{
//	//	return 0;
//	//}
//	//int i =0;
//	////越界
//	//for(i=0;i<10;i++)
//	//{
//	//	*(p+i)=i;
//	//}
////	//free(p);
////	//p=NULL;
////	return 0;
////}
////int main()
////{
////	//3.0对非动态内存使用free 错误方法
////	int a =10;
////	int *p=&a;
////	free(p);
////	p=NULL;
////	return 0;
////}
// //4.0 使用free释放动态开辟内存的一部分
////int main()
////{
////	int *p=(int*)malloc(40);
////	if(p==NULL)
////	{
////		return 0;
////	}
////	int i =0;
////	for(i=0;i<10;i++)
////	{
////		*p++=i;
////	}
////	free(p);//回收空间  不能对动态的内存进行释放
////	return 0;
////}
////int main()
////{
////	int *p=(int *)malloc(40);
////	if(p==NULL)
////	{
////		return 0;
////	}
////	//使用
////	//释放
////	free(p);
////	return 0; 
////}
////动态内存开辟忘记释放（内存泄漏）
//int main()
//{
//	while(1)
//	{
//		malloc(1);
//		Sleep(1000);
//	}
//	return 0;
//}
void Test(char * p)
{
	p=(char *)malloc(100);
}
void test(void )
{
	char *str =NULL;
	Test(str);
	strcpy(str,"hello world");
	printf(str);
}
int main()
{
	test();
	return 0;
}