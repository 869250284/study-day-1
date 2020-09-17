#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//int Add(int x,int y)
//{
//	return x+y;
//}
//int main()
//{
//	//指针数组 -
//	int *arr[10];
//	//数组指针
//	int* (*pa)[10]=&arr;
//	//函数指针
//	int (*pAdd)(int ,int )=Add;
//	int sum=(*pAdd)(1,2);
//	printf("%d\n",sum);
//	//函数指针的数组-
//	int(*pArr[4])(int,int );
//	//指向函数指针数组的指针
//	int (*(*ppArr)[4])(int ,int )=&pArr;
//	return 0;
//}
//void bubble_sort(int arr[] ,int sz )
//{
//	int i=0;
//	for(i=0;i<sz-1;i++)
//	{
//		每次做一趟冒泡排序
//		int j=0;
//		for(j=0;j<sz-1-i;j++)
//		{
//		if(arr[j]>arr[j+1])
//		{
//			int tmp=arr[j];
//			arr[j]=arr[j+1];
//			arr[j+1]=tmp;
//		}
//		}//相邻两个元素比较
//	}
//}
//struct Stu
//{
//	char name[20];
//	int age;
//}
//int main()
//{
//	int arr[10]={9,8,7,6,5,4,3,2,1,0};
//	int sz=sizeof(arr)/sizeof(arr[0]);
//	int i =0;
//	struct Stu s[3]={{"张三",20},{"李四",30},{"王五",10}};
//	qsort(arr,sz,sizeof(arr[0],))
//	bubble_sort(arr,sz);
//	for(i=0;i<sz;i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	return 0;
//}
//qsort --库函数-排序
//使用的算法是quick-sort 快速排序
//void qsort( void *base, 
//	size_t num, 
//	size_t width,
//	
//	int (__cdecl *compare )(const void *elem1, const void *elem2 ) );

int main()
{
	int a= 10;
	int *pa=&a;
	char *pc =&a;
	void *pa=&a;
	char ch='w';
		pa=&a;
		//void可以接受任意类型的地址
	return 0;
}