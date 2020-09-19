#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<math.h>
//void reverse(char *str)
//{
//	int len =strlen(str);
//	char *left=str;
//	char *right=str+len-1;
//	while(left<right)
//	{
//	char tmp =*left;
//	*left=*right;
//	*right =tmp;
//	left++;
//	right--;
//	}
//}
//int main()
//{
//	//void *类型的指针不能进行解引用操作
//	//指针进行加减也要确定他的类型 访问几个字节所以void*类型的指针不能进行加减整数的操作
//	char arr[256]={0};
//	scanf("%s",arr);
//	//gets()//叫读取一行
//	reverse(arr);
//	printf("%s\n",arr);
//	return 0;
//}
//int main()
//{
//	int a =0;
//	int n=0;
//	int sum=0;
//	int i=0;
//	int ret =0;
//	scanf("%d %d",&a,&n);
//	//2 22 222  2222 22222
//	for(i=0;i<n;i++)
//	{
//		ret=ret*10+a;
//		sum+=ret;
//	}
//	printf("%d\n",sum);
//	return 0;
//}
//int main()
//{
//	int i =0;
//	for(i=0;i<100000;i++)
//	{
//		//计算i是否为水仙花数（自幂数）
//		//第一步 计算i的位数
//		int n=0;
//		//第二部计算i的每一位的n次方之和 sum
//		//第三步判断i==sum
//		int tmp =i;
//		int sum =(double)0;
//		while(tmp/=10)
//		{
//			n++;
//		}
//
//		tmp=i;
//		while(tmp)
//		{
//			sum+=pow(tmp % 10,n);
//			tmp/=10;
//		}
//		if(i==sum)
//		{
//			printf("%d ",i);
//		}
//	}
//	return 0;
//}