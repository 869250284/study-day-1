#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<windows.h>

//���⣺���и��������У�����fun�Ĺ����ǣ���SS��ָ�ַ��������г�����̵��ַ������ڵ����±꣬��Ϊ����ֵ���أ�
//	�����䴮�������β�n��ָ�ı����С�SS��ָ�ַ������������й���M���ַ����Ҵ���С��N��
//	���ڳ�����»��ߴ�������ȷ�����ݲ����»���ɾ����ʹ�ó���ó���ȷ�����
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
//	//5.5�Ķ�����д��
//	//101.1
//	//(-1)^0 *1.011*2^2
//	//S=0
//	//M=1.011
//	//E=2
//	// 2+127 =129����������10000001 011 00000000000000000000
//	system("pause");
//	return 0;
//}
