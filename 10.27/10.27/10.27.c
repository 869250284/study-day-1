#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//struct S
//{
//	int n ;
//	float score;
//	char arr[20];
//};
//int main()
//{
//	struct S s={100,3.14f,"hello world"};
//	FILE * pf=fopen("test.txt","w");
//	if(pf==NULL)
//	{
//		return 0;
//	}
//	fprintf(pf,"%d %f %s",s.n,s.score,s.arr);
//	fclose(pf);
//	pf=NULL;
//	return 0;
//}
//struct S
//{
//	int n ;
//	float score;
//	char arr[20];
//};
//int main()
//{
//	struct S s={0};
//	FILE * pf=fopen("test.txt","r");
//	if(pf==NULL)
//	{
//		return 0;
//	}
////格式化的输入数据
//	fscanf(pf,"%d %f %s",&(s.n),&(s.score),s.arr);
//	printf("%d %f %s",s.n,s.score,s.arr);
//	fclose(pf);
//	pf=NULL;
//	return 0;
//}
//struct S
//{
//	int n ;
//	float score;
//	char arr[20];
//};
//int main()
//{
//	struct S s={0};
////格式化的输入数据
//	fscanf(stdin,"%d %f %s",&(s.n),&(s.score),s.arr);
//	fprintf(stdout,"%d %f %s",s.n,s.score,s.arr);
//	return 0;
//}
struct S
{
	int n ;
	float score;
	char arr[20];
};
int main()
{
	struct S s={100,3.14f,"hello"};
	char buf[1024]={0};
	sprintf(buf,"%d %f %s",s.n,s.score,s.arr);
	printf("%s\n",buf);
	return 0;
}