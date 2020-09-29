#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<Windows.h>
#include<malloc.h>
#include<stdlib.h>
//int main()
//{
//	int killer =0;
//	for(killer='a';killer<='d';killer++)
//		if((killer!='a')+(killer=='c')+(killer=='d')+(killer!='d')==3)
//		{
//			printf("killer = %c\n",killer);
//		}
//	
//	system("pause");
//	return 0;
//}
//赛马问题；有36匹马，6个跑道，没有计时器，请赛马确定，36匹马中的前三名
//请问最少比赛有几次
//烧香问题
//有一种香，材质不均匀，但是每一根这样的香烧完恰好是一小时。
//给你2根香，帮我确定一个15分钟的时间段
//int main()
//{
//	int a,b,c,d,e;
//	for(a=1;a<=5;a++)
//	{
//		for(b=1;b<=5;b++)
//		{
//			for(c=1;c<=5;c++)
//			{
//				for(d=1;d<=5;d++)
//				{
//					for(e=1;e<=5;e++)
//					{
//						if(((b==2)+(a==3)==1)&((b==2)+(e==4)==1)&((c==1)+(d==2))&((c==5)+(d==3)==1)&((e==4)+(a==1))==1)
//						{
//							if(a*b*c*d*e==120)
//							printf("a=%d b=%d c=%d d=%d e=%d\n",a,b,c,d,e);
//						}
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}
int main()
{
	//申请空间
	int *p=(int*)molloc(10*sizeof(int));
	//使用空间
	//释放空间
	free(p);
	p=NULL;
	return 0;
}