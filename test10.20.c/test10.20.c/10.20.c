#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h> 
#include<string.h>
//char * GetMemory(void)
//{
//	char p[]="hello world ";
//	return p;
//}
//void Test(void)
//{
//	char *str=NULL;
//	str=GetMemory();
//	printf(str);
//}
//int main()
//{
//	Test();
//	return 0;
//}
//void GetMemort(char **p,int num)
//{
//	*p=(char *)malloc(num);
//}
//void Test (void )
//{
//	char *str =NULL;
//	GetMemort(&str,100);
//	strcpy(str,"hello");
//	printf(str);
//	free(str);
//	str=NULL;
//
//}
//int main()
//{
//	Test();
//	return 0;
//}
//void test(void)
//{
//	char * str =(char *)malloc(100);
//	strcpy(str,"hello");
//	free(str);
//	if(str!=NULL)
//	{
//		strcpy(str,"world");
//		printf(str);
//	}
//}
//int main()
//{
//	test();
//	return 0;
//}
//int main()
//
//{
//
//	int i =0;
//
//	int sum=0;//存放最终结果
//
//	int n=0;
//
//	int ret =1;//保存阶乘
//
//	scanf("%d",&n);
//
//	for(i=1;i<=n;i++)
//
//	{
//
//		int j=0;
//
//		ret =1;
//
//		for(j=1;j<=i;j++)
//
//		{
//
//			ret*=j;
//
//		}
//
//		sum+=ret;
//
//	}
//
//	printf("您输入的数的阶乘总和为%d\n",sum);
//
//	return 0;
//
//}
//int main()
//{
//	int i =0;
//	int a =0;
//	int n=0;
//	int sum=0;
//	printf("请输入你要求数最大值");
//	scanf("%d",&n);
//	for(i=0;i<=n;i++)
//	{
//		sum+=(a*a);
//	}
//	printf("%d\n",sum);
//	return 0;
//}
//struct S
//{
//	int n;
//	int * arr;
//};
//int  main()
//{
//	int i =0;
//	struct S  *ps=(struct S*)malloc(sizeof(struct S));
//	ps->arr=(int *)malloc(5*sizeof(int));
//	for(i=0;i<5;i++)
//	{
//		ps->arr[i]=i;
//	}
//	for(i=0;i<5;i++)
//	{
//		printf("%d ",ps->arr[i]);
//	}
//	int *ptr=(int *)realloc(ps->arr,10*sizeof(int));
//	if(ptr!=NULL)
//	{
//		ps->arr=ptr;
//	}
//	for(i=5;i<10;i++)
//	{
//		ps->arr[i]=i;
//	}
//	for(i=0;i<10;i++)
//	{
//		printf("%d ",ps->arr[i]);
//	}
//	return 0;
//} 
int main()

{
    int a,b,c,d,e,f,g,h,i,j,k;
    scanf("`%d\?:[%d],%d.%d==\"(%dx%d\?\?%d)%%%d\n%dcdef%d$%d\;",&a,&b,&c,&d,&e,&f,&g,&h,&i,&j,&k);

    printf("%d",a+b+c+d+e+f+g+h+i+j+k);
    return 0;
}