#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>



//数组指针-主语是指针
//int main()
//{
//	int* p=NULL;//p是整型指针-指向整形的指针，可以存放整形的地址
//	char* pa=NULL;//pc是字符指针 指向字符的指针，可以存放字符的地址
//	//数组指针-指向数组的指针，存放数组的地址
//	//int arr[10]={0};
//	//arr-首元素地址
//	//arr[0]-首元素的地址
//	//&arr-数组的地址
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
//int arr[5]   //是一个5个元素的整型数组
//int *parr1[10]  //parr1是一个数组，数组有十个元素，每个元素的类型是int* parr1是指针数组
//int(*parr2)[10]  //parr2是一个指针，该指针指向了一个数组，数组有10个元素，每个元素的类型是int* parr2是数组指针
//int(*parr3[10])[5]//parr3 是个数组，该数组有10个元素 每个元素是一个指针是一个数组指针，该数组指向的数组有5个元素
//每个元素是int
int main()
{
	int i=10;
	int j=010;
	printf("%d %d",i,j);
}