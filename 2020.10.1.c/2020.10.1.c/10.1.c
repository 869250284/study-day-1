#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>
//int main()
//{
//	char arr1[30]="abc";
//	char arr2[]="def";
//	strcat(arr1,arr2);
//	printf("%s\n",arr1);
//	return 0;
//}
//int main()
//{
//	/*int len =strlen("abcdef");*/
//	/*printf("%d\n",len);*/
//	char arr[]={'a','b','c','d','e','f'};
//	int len=strlen(arr);
//	printf("%d\n",len);
//	return 0;
//}
//int my_strlen(const char *str)
//{
//	int count =0;
//	assert(str!=NULL);
//	while(*str!='\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	/*int len =my_strlen("abcdef");
//	printf("%d\n",len);*/
//	if(my_strlen("abc")-my_strlen("abcdef")>0)
//	{
//		printf("�Ǻ�\n");
//	}
//	else
//		printf("����");
//	return 0;
//}
//char* my_strcpy(char* dest,const char* src)
//{
//	assert(dest!=NULL);
//	assert(src!=NULL);
//	char *ret=dest;
//	while(*dest++=*src++)
//	{
//		;
//	
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[]="abcdefghi";
//	char arr2[]="bit";
//	my_strcpy(arr1,arr2);
//	printf("%s\n",arr1)
//	return 0;
//char * my_strcat(char* dest ,const char *src)
//{
//	char *ret =dest;
//	assert(dest&&src!=NULL);
//	//�ҵ�Ŀ�ĵص�\0;
//	while(*dest!='\0')
//	{
//		dest++;
//	}
//	//׷��
//	while(*dest++=*src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[30]="hello";
//	char arr2[]="world";
//	my_strcat(arr1,arr2);
//	printf("%s\n",arr1);
//	return 0;
//}
//int main()
//{
//	char* p1="abcdef";
//	char *p2="sqwer";
//	int ret=strcmp(p1,p2);
//	printf("%d\n",ret);
//	return 0;
//}
//int my_strcmp(const char* str1 ,const char *str2)
//{
//	assert(str1&&str2);
//	//�Ƚ�
//	while(*str1==*str2)
//	{
//		if(*str1=='\0')
//		{
//			return 0;//����
//		}
//		str1++;
//		str2++;
//	}
//	if(*str1>*str2)
//		return 1;//����
//	else
//		return -1;
//
//}
//int main()
//{
//	char *p1="abcdef";
//	char *p2="abqwe";
//	int ret= my_strcmp(p1,p2);
//	printf("ret=%d\n",ret);
//	return 0;
//}
//strcpy
//strcat
//strcmp
//�г��Ȳ������Ƶ��ַ�������----׷�ӵ�����׷�� ���������ܿ��� �ԡ�\0��Ϊ������־
