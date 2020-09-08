#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>
#include<math.h>

//int main()
//{
//	int i=0;
//	for(i=1;i<=9;i++)
//	{
//		int j =1;
//		for(j=1;j<=i;j++)
//		{
//			printf("%d*%d=%-2d ",i,j,i*j);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//int main()
//{
//	int a =0;
//	for(a=100;a<=200;a++)
//	{
//		int b=0;
//		for(b=2;b<a;b++)
//		{
//			if(a%b==0)
//				break;
//		}
//		if(b==a)
//		{
//			printf("%d ",a);
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int a =0;
//	for(a=100;a<=200;a++)
//	{
//		int b=0;
//		for(b=2;b<=sqrt(a*1.0);b++)
//		{
//			if(a%b==0)
//				break;
//		}	
//		if(b>sqrt(a*1.0))
//			printf("%d ",a);
//	}
//	return 0;
//}
int main()
{
	int i =0;
	int sum=0;//存放最终结果
	int n=0;
	int ret =1;//保存阶乘
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		int j=0;
		ret =1;
		for(j=1;j<=i;j++)
		{
			ret*=j;
		}
		sum+=ret;
	}
	printf("您输入的数的阶乘总和为%d\n",sum);
	return 0;
}