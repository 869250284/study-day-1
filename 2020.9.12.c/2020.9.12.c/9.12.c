#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//void test(int arr[])
//{
//	printf("%d\n",sizeof(arr)/sizeof arr[0]);
//}
//
//int main()
//{
//	int arr[10]={0};
//	test(arr);
//	return 0;
//}

//字符指针
//int main()
//{
//	char ch='w';
//	char *p=&ch;
//	return 0;
//}
//int main()
//{
//	char arr[]="abcdef";
//	char *pc=arr;
//	printf("%s\n",pc);
//	return 0;
//}
//int main()
//{
//	char* p="abcdef";
//	printf("%c\n",*p);
//	printf("%s\n",p);
//	return 0;
////}
//int main()
//{
//	char* p="abcdef";
//	*p='w';
//	//Segmentation fault -段错误 相当于越界访问 
//	printf("%s\n",p);
//	return 0;
//}
//int main()
//{
//	char arr1[]="abcdef";
//	char arr2[]="abcdef";
//	char* p1="abcdef";//常量字符串 所以不能被修改
//	char* p2="abcdef";
//	//if(arr1==arr2)
//	//{
//	//	printf("hehe\n");
//	//}
//	//else
//	//{
//	//	printf("haha\n");
//	//}
//	//
//	if(p1==p2)
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha");
//	}
//}

int main()
{
	int a[5]={1,2,3,4,5};
	int i=0;
	for(i=4;i>=0;i--)
	{
	printf("%d\n",a[i]);
	}
	return 0;
}