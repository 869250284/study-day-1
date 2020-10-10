#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stddef.h>
//typedef struct Node
//{
//	int date;
//	struct Node * next;
//}Node;
//int main()
//{
//
//	return 0;
//}
//struct T
//{
//	double weight;
//	short age;
//};
//struct S
//{
//	char c;
//	int a;
//	struct T st;
//	double d;
//	char arr[20];
//};
//int main()
//{
//	//struct S s={'c',100,3.14,"hello world"};
//	struct S s={'c',100,{55.6,30},3.14,"hello world"};
//	//printf("%c %d %lf %s\n",s.c,s.a,s.d,s.arr);
//	printf("%lf %d",s.st.weight,s.st.age);
//	return 0;
//}
//struct S1
//{
//	char c1;
//	char c2;
//	int a;
//	
//};
//int main()
//{
//	struct S1 s1={0};
//	printf("%d\n",sizeof(s1));
//	printf("%d\n",sizeof(s1.c1));
//	printf("%d\n",sizeof(s1.c2));
//	printf("%d\n",sizeof(s1.a));
//	printf("%d\n",sizeof(double));
//	return 0;
//}
//struct S3
//{
//	double a;
//	char b;
//	int c;
//};
//struct S4
//{
//	char c1;
//	struct S3 s3;
//	double d;
//};
//int main()
//{
//	printf("%d\n",sizeof(struct S3));
//	printf("%d\n",sizeof(struct S4));
//	return 0;
//}
//设计默认对齐数为4
//#pragma pack(4)
//struct S
//{
//	char c1;
//	double d;
//};
//int main()
//{
//	struct S s;
//	printf("%d\n",sizeof(s));
//	return 0;
//}
struct S
{
	char c;
	int i;
	double d;
};
int main()
{
	printf("%d\n",offsetof(struct S,c));
	printf("%d\n",offsetof(struct S,i));
	printf("%d\n",offsetof(struct S,d));
	return 0;
}