#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>

/*v*//*oid print(int *p,int sz)
{
	int i=0;
	for(i=0;i<sz;i++)
	{
		printf("%d\n",*(p+i));
	}
}
int main()
{
	int arr[10]={1,2,3,4,5,6,7,8,9,10};
	int* p=arr;
	int sz=sizeof(arr)/sizeof(arr[0]);
	print(p,sz);
	system("pause");
	return 0;
}*/
//��һ�������Ĳ���������Ϊһ��ָ���ʱ�򣬺����ܽ���ʲô����
//void test(int *p)
//{
//
//}
//int main()
//{
//	int a =10;
//	int *p1=&a;
//	test(&a);
//	test(p1);
//
//	return 0;
//}
//����ָ�봫��;
//void test(int** prt)
//{
//	printf("%d\n",**prt);
//}
//int main()
//{
//	int n=10;
//	int *p=&n;
//	int **pp=&p;
//	test(pp);
//	test(&p);
//	return 0;
//}
//void test(int **p)//������ָ�� �޷Ǿͽ���һ��ָ���ַ���߶���ָ��
//{
//
//}
//int main()
//{
//	int *prt;
//	test(&prt);
//	int *arr[10];
//	test(arr);
//	return 0;
//}
//����ָ��-ָ�������ָ��
//����ָ��-ָ������ָ��--��ź�����ַ��һ��ָ��
//����ָ��
//void test()
//{
//	printf("hehe\n");
//}
//int main()
//{
//	printf("%p\n",test);
//	printf("%p\n",test);
//	system("pause");
//	return 0;
//}
//int Add(int x,int y)
//{
//	int z=0;
//	z=x+y;
//	return z;
//
//}
//int main()
//{
//	int a =10;
//	int b =20;
//	//int arr[10]={0};
//	printf("%d\n",Add(a,b));
//	printf("%p\n",&Add);
//	system("pause");
//	return 0;
//}

//int  Add(int x ,int y)
//{
//	int z =0;
//	z=x+y;
//	return z;
//}
//int main()
//{
//	int a =10;
//	int b=20;
//	int (*p)(int x, int y )=Add;
//	printf("%d\n",(*p)(2,3));
//	system("pause");
//
//	return 0;
//}
void print(char* str)
{
	printf("%s\n",str);
}
int main()
{
	void (*p)(char* )=print;
	(*p)("Hello world");
	system("pause");
	return 0;
}