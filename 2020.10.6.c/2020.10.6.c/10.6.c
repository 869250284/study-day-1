#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<memory.h>
#include<assert.h>
#include<string.h>
int main()
{
	int arr1[]={1,2,3,4,5};
	int arr2[10]={0};
	int i =0;
	memcpy(arr2,arr1,sizeof(arr1));
	for(i=0;i<5;i++)
	{
		printf("%d\n",arr1[i]);
	}
	printf("%d\n",arr1);
	return 0;
}
void * my_memcpy(void * left, const void * right, size_t count )
{
	int i =count;
	int p;
	(char *) p=left;
	assert(left!=NULL);
	assert(right!=NULL);
	while(count--)
	{
		*(char*)left=*(char *)right;
		++(char*)left;
		++(char*)right;
	}
	return p;
}
void * memmove(void * dest ,void *src,size_t count)
{

}
int main()
{
	int arr1[]={1,2,3,4,5};
	int arr2[10]={0};
	int arr3[]={1,2,3,4,5,6,7,8,9,10};
	my_memcpy(arr2,arr1,sizeof(arr1));
	my_memcpy(arr3+2,arr3,20);
	memmove(arr3+2,arr3,20);
	return 0;
}