#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>
//int main()
//{
//	char str1[]="hello world ";
//	char str2[]="hello world ";
//	char *str3="hello world";
//	char *str4="hello world";
//	if(str1==str2)
//		printf("str1 and str2 are same");
//	else
//		printf("str1 and str2 are not same");
//	if(str3==str4)
//		printf("str3 and str4 are same");
//	else
//		printf("str3 and str4 are not same");
//	return 0;
//}
//int main()
//{
//	int arr[3][5]={1,2,3,4,5,6,7,8,9,10};
//	return 0;
////}
//int main()
//{
//	int a[5]={5,4,3,2,1};
//	int *ptr=(int *)(&a+1);
//	printf("%d %d",*(a+1),*(ptr-1));
//	return 0;
//}
//int main()
//{
//	int aa[2][5]={10,9,8,7,6,5,4,3,2,1};
//	int *ptr1=(int *)(&aa+1);
//	int *ptr2=(int *)(*(aa+1));
//	printf("%d %d",*(ptr1-1),*(ptr2-1));
//	return 0;
//}]
//题目内容
//实现一个函数，可以左旋字符串中的k个字符
//例如
//ABCD左旋一个字符得到BCDA
//ABCD左旋两个字符得到CDAB
//void left_move(char* arr ,int k)
//{
//	int i =0;
//	assert(arr);
//	int len=strlen(arr);
//	for(i=0;i<k;i++)
//	{
//		//旋转一个字符
//		char tmp=*arr;
//		//吧后边元素往前方
//		int j =0;
//		for(j=0;j<len-1;j++)
//		{
//			*(arr+j)=*(arr+j+1);
//		}
//		*(arr+len-1)=tmp;
//	}
//}
//void reverse(char* left ,char* right)
//{
//	assert(left!=NULL);
//	assert(right!=NULL);
//	while(left<right)
//	{
//		char tmp =*left;
//		*left=*right;
//		*right=tmp;
//		left++;
//		right--;
//	}
//}
//void left_move(char* arr,int k)
//{
//	int len=strlen(arr);
//	assert(arr);
//	assert(k<=len);
//	reverse(arr,arr+k-1);//逆序左边
//	reverse(arr+k,arr+len-1);//逆序右边
//	reverse(arr,arr+len-1);//逆序整体+
//}
//int main()
//{
//	char arr[]="abcdef";
//	left_move(arr,2);
//	printf("%s\n",arr);
//	return 0;
//}

//int is_left_move(char* s1,char* s2)
//{
//	int len=strlen(s1);
//	int i=0;
//	for(i=0;i<len;i++)
//	{
//		left_move
//	}
//}
//int main()
//{
//	char *arr1="abcdef";
//	char *arr2="cdefab";
//	int ret=is_left_move(arr1,arr2);
//	if(ret==1)
//		printf("Yes\n");
//	else
//		printf("NO\n");
//	return 0;
//}
