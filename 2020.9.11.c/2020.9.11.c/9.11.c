#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<windows.h>

//错题：下列给定程序中，函数fun的功能是；求SS所指字符串数组中长度最短的字符串所在的行下标，作为函数值返回，
//	并把其串长放在形参n所指的变量中。SS所指字符串串数数组中共有M个字符串且串长小于N。
//	请在程序的下划线处填入正确的内容并将下划线删除，使得程序得出正确结果。
//#define M 5
//#define N 20
//int fun(char(* ss)[N],int *n)
//{
//	int i ,k =0, len =N;
//	for(i=0;i<M;i++)
//	{
//		len =strlen(ss[i]);
//		if(i==0)
//			*n=len;
//		if(len< *n)
//		{
//			*n=len;
//			k=i;
//		}
//	}
//	return k;
//}
//main()
//{
//	char ss[M][N]={"shanghai","guangzhou","beijing","tianjing","chongqing"};
//	int n, k ,i;
//	printf("\nThe originalb stringsare:\n");
//	for(i=0;i<M;i++)
//		puts(ss[i]);
//	k=fun(ss,&n);
//	printf("\nThe length of shortest string is : % d\n",n);
//	printf("\nThe shortest string is: %s\n",ss[k]);
//	system("pause");
//}
//int main()
//{
//	float f =5.5;
//	//5.5的二进制写法
//	//101.1
//	//(-1)^0 *1.011*2^2
//	//S=0
//	//M=1.011
//	//E=2
//	// 2+127 =129二进制序列10000001 011 00000000000000000000
//	system("pause");
//	return 0;
//}
