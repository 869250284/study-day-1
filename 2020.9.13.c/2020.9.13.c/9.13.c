#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>



//����ָ��-������ָ��
//int main()
//{
//	int* p=NULL;//p������ָ��-ָ�����ε�ָ�룬���Դ�����εĵ�ַ
//	char* pa=NULL;//pc���ַ�ָ�� ָ���ַ���ָ�룬���Դ���ַ��ĵ�ַ
//	//����ָ��-ָ�������ָ�룬�������ĵ�ַ
//	//int arr[10]={0};
//	//arr-��Ԫ�ص�ַ
//	//arr[0]-��Ԫ�صĵ�ַ
//	//&arr-����ĵ�ַ
//	int arr[10]={1,2,3,4,5,6,7,8,9,10};
//	int (*p)[10]=&arr;
//	printf("%s\n",p);
//	return 0;
////}
//int main()
//{
//	char* arr[5];
//	char* (*pa)[5]=&arr;
//	int arr2[5]={1,2,3,4,5};
//	int (*pa2)[5]=&arr2;
//	return 0;
//}
//int main()
//{
//	int arr[10]={1,2,3,4,5,6,7,8,9,10};
//	int i=0;
//	int (*p)[10]=&arr;
//	
//	/*for(i=0;i<10;i++)
//	{
//		printf("%d",(*p)[i]);
//	}*/
//	/*for(i=0;i<10;i++)
//	{
//		printf("%d",*(*p+i));
//	}*/
//	return 0;
//}

//void print1(int arr[3][5],int x ,int y)
//{
//	int i =0;
//	int j=0;
//	for(i=0;i<x;i++)
//	{
//		for(j=0;j<y;j++)
//		{
//			printf("%d ",arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5]={{1,2,3,4,5,},{2,3,4,5,6},{3,4,5,6,7}};
//	print1(arr,3,5);
//	return 0;
//}
//void print2(int (*p)[5],int x,int y)
//{
//	int i=0;
//	int j=0;
//	for(i=0;i<x;i++)
//	{
//		for(j=0;j<y;j++)
//		{
//		printf("%d ",*(*(p+i)+j));
//		}
//		printf("\n");
//	}
//
//}
//int main()
//{
//	int arr[3][5]={{1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7}};
//	print2(arr,3,5);
//	return 0;
//}
//int arr[5]   //��һ��5��Ԫ�ص���������
//int *parr1[10]  //parr1��һ�����飬������ʮ��Ԫ�أ�ÿ��Ԫ�ص�������int* parr1��ָ������
//int(*parr2)[10]  //parr2��һ��ָ�룬��ָ��ָ����һ�����飬������10��Ԫ�أ�ÿ��Ԫ�ص�������int* parr2������ָ��
//int(*parr3[10])[5]//parr3 �Ǹ����飬��������10��Ԫ�� ÿ��Ԫ����һ��ָ����һ������ָ�룬������ָ���������5��Ԫ��
//ÿ��Ԫ����int
int main()
{
	int i=10;
	int j=010;
	printf("%d %d",i,j);
}