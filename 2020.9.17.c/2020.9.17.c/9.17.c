#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//int Add(int x,int y)
//{
//	return x+y;
//}
//int main()
//{
//	//ָ������ -
//	int *arr[10];
//	//����ָ��
//	int* (*pa)[10]=&arr;
//	//����ָ��
//	int (*pAdd)(int ,int )=Add;
//	int sum=(*pAdd)(1,2);
//	printf("%d\n",sum);
//	//����ָ�������-
//	int(*pArr[4])(int,int );
//	//ָ����ָ�������ָ��
//	int (*(*ppArr)[4])(int ,int )=&pArr;
//	return 0;
//}
//void bubble_sort(int arr[] ,int sz )
//{
//	int i=0;
//	for(i=0;i<sz-1;i++)
//	{
//		ÿ����һ��ð������
//		int j=0;
//		for(j=0;j<sz-1-i;j++)
//		{
//		if(arr[j]>arr[j+1])
//		{
//			int tmp=arr[j];
//			arr[j]=arr[j+1];
//			arr[j+1]=tmp;
//		}
//		}//��������Ԫ�رȽ�
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
//	struct Stu s[3]={{"����",20},{"����",30},{"����",10}};
//	qsort(arr,sz,sizeof(arr[0],))
//	bubble_sort(arr,sz);
//	for(i=0;i<sz;i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	return 0;
//}
//qsort --�⺯��-����
//ʹ�õ��㷨��quick-sort ��������
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
		//void���Խ����������͵ĵ�ַ
	return 0;
}