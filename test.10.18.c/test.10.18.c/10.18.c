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
////��NULLָ��Ľ����ò���
////int main()
////{
//	//int *p=(int*)malloc(40);
//	////��p������ص��ж� �Ƿ�Ϊ��ָ��
//	//*p=10;//�п��ܶ�NULLָ�������ʧ�� malloc���ٿռ�ʧ��
//	//2.�Զ�̬�����ڴ��һ��Խ�����
//	//int *p=(int*)malloc(40);
//	//if(p==NULL)
//	//{
//	//	return 0;
//	//}
//	//int i =0;
//	////Խ��
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
////	//3.0�ԷǶ�̬�ڴ�ʹ��free ���󷽷�
////	int a =10;
////	int *p=&a;
////	free(p);
////	p=NULL;
////	return 0;
////}
// //4.0 ʹ��free�ͷŶ�̬�����ڴ��һ����
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
////	free(p);//���տռ�  ���ܶԶ�̬���ڴ�����ͷ�
////	return 0;
////}
////int main()
////{
////	int *p=(int *)malloc(40);
////	if(p==NULL)
////	{
////		return 0;
////	}
////	//ʹ��
////	//�ͷ�
////	free(p);
////	return 0; 
////}
////��̬�ڴ濪�������ͷţ��ڴ�й©��
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