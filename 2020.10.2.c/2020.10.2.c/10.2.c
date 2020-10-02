#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<errno.h>
#include<ctype.h>
#include<assert.h>
//int main()
//{
//	char arr[]="zpw@bitdu.tech";
//	char *p="@.";
//	char buf[1024]={0};
//	char *ret=strtok(arr,p);
//	printf("%s\n",ret);
//	ret=strtok(NULL,p);
//	printf("%s\n",ret);
//	ret=strtok(NULL,p);
//	printf("%s\n",ret);
//	return 0;
//}
//int main()
//{
//	char arr[]="zpw@bitdu.tech";
//	char *p="@.";
//	char buf[1024]={0};
//	char *ret=NULL;
//	strcpy(buf,arr);
//	for(ret=strtok(arr,p); ret!=NULL;ret=strtok(NULL,p))
//	{
//		printf("%s\n",ret);
//	}
//	return 0;
//}
//int main()
//{
//	
//	/*char *str=strerror(errno);
//	printf("%s\n",str);*/
//	FILE * pf=fopen("test.txt","r");
//	if(pf==NULL)
//	{
//		printf("%s\n",strerror(errno));
//	}
//	else
//	{
//		printf("open file success\n");
//	}
//	return 0;
//}
//int main()
//{
//	//char ch ='2';
//	////int ret=islower(ch);
//	//int ret=isdigit(ch);
//	//printf("%d\n",ret);
//	/*char ch =tolower('Q');
//	putchar(ch);*/
//	char arr[]="I am a student";
//	int i =0;
//	while(arr[i])
//	{
//		if(isupper (arr[i]))
//		{
//			arr[i]=tolower(arr[i]);
//		}
//		i++;
//	}
//	printf("%s\n",arr);
//	return 0;
//}
struct S
{
	char name[20];
      int age;
};
void * my_memcpy(void * dest ,const void *src,size_t num)
{
	void* ret =dest;
	assert((dest&&src)!=NULL);
	while(num--)
	{
	*(char*)dest=*(char *)src;
	++(char*)dest;
	++(char*)src;
	}
	return ret ;
}
int main()
{
	int arr1[]={1,2,3,4,5};
	int arr2[5]={0};
	struct S arr3[]={{"张三",20},{"李四",30}};
	struct S arr4[3]={0};
	my_memcpy(arr4,arr3,sizeof(arr3));
	//memcpy(arr2,arr1,sizeof(arr1));
	return 0;
}