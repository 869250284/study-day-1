#define _CRT_SECURE_NO_WARNINGS 1
//����һ��stdio.h���ļ�
//std-��׼��standard input output
//
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>
//#include"yanxiaoming1.h"
//#include"yanxiaoming.c"
//int main()
//{
//	const int n=10;//n�Ǳ��������־��г����� ��Ϊ����const����������˵n�ǳ�����
//	n=20��
////
////	//const-ָ���ǳ����Ծ��Ǳ������ֵ���ܸı�
////	//3�����泣��  ֱ��д�����ľͽ����泣��
////	/*int num1=0;
////	int num2=0;
////	int sum=0;
////	scanf("%d%d",&num1,&num2);
////	sum =num1+num2;
//	printf("sum=%d\n",);
////	*/
////	
////	//δ�����ı�ʶ����//extern��ʾ�����ļ�����ı���
//	return 0;
//}

//int main()
//{
//	int num1=0;
//	int num2=0;
//	int sum =0;
//	//�������ݺ�����scanf����ʹ�����뺯��
//	//&������Ž�ȡ��ַ����
//	scanf("%d%d",&num1,&num2);
//	//C�����﷨�涨������Ҫ�����ٵ�ǰ��������ǰ��
//	sum=num1+num2;
//	printf("sum=%d\n",sum);
//	return 0;
//}
//int num2=20;//����Ϊȫ�ֱ���-�����ڴ���飨{}��֮��ı���
//int main()
//{   int num =10;//num1����Ϊ�ֲ�����-�����ڴ���飨{}���ڲ��ı���
//	return 0;
//}
//int main()
//{
//	//short age=20;//short age ��˼�����ڴ����������ֽ�=16��bitλ  �������20
//	float weight =65.2f;//float ���ڴ�����4���ֽڣ����С��
//	return 0;
//}
//int main()
//{   
	//printf("%d\n",sizeof(char));//sizeof������ʾ���������ռ���������ڴ棿
    //printf("%d\n",sizeof(short));
    //printf("%d\n",sizeof(int));
    //printf("%d\n",sizeof(long));
    //printf("%d\n",sizeof(long long));
    //printf("%d\n",sizeof(float));
    //printf("%d\n",sizeof(double));
	//return 0;
//}
//char-�ַ�����
//%d-��ӡ����
//%c-��ӡ�ַ�
//%f-��ӡ��������-��ӡС������˼
//%p-�Ե�ַ����ʽ��ӡ
//%x��ӡ16����
//%o-...
//int main()
//{   //char ch = 'A';//char��ʾ��ռ������ڴ�
    //printf("%c\n",ch);//%C-��˼���Ǵ�ӡ�ַ���ʽ������
	//int age=20;
	//short int -������
	//int������
	//printf("%d\n",age);//%d-��ʾ��ӡ����ʮ���Ƶ�����
	//long�г�����
	//long num = 100;
	//printf("%d\n",num);
	//float f =5.0;
	//printf("%f\n",f);
	//double d =3.14;
	//printf("%lf\n",d);//%lf-��ʾ��ӡ˫��������
 //   return 0;
//}
//int main()//����������-��������
//{ //�����������
	//����Ļ�����hello world
	//����-print function��˼���Ǵ�ӡ����
	//�⺯��-C���Ա����ṩ������ʹ�õĺ���
	//���˵Ķ���-���к�
	//#include����������˼��

	//printf("���\n");
    //return 0;
//int�����͵���˼
//mainǰ���int��ʾmain�������õ�ʱ�򷵻�һ������ֵ
//#define ����ı�ʶ������
//#define MAX 10//����Ժ�Ҫ����һ����������#define������
//int main()
//{
//	int arr[MAX]={0};
//	printf("%d\n",MAX);
//
//	return 0;
//}
//4.ö�ٳ���
//ö��-һһ�о�
//�����Ա��� Ů
//ö�ٹؼ��� enum
//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET
//	//��MALE,FEMALE,SECRET�ͽ�ö�ٳ���-���������治�ɱ��ı�
//};
//int main()
//{
//	printf("%d\n",MALE);//Ĭ��ֵΪ0
//	printf("%d\n",FEMALE);//Ĭ��ֵΪ1
//	printf("%d\n",SECRET);//Ĭ��ֵΪ2
//
//	return 0;
//}
//int main()
//{
//	char arr1[]="abc";//����
//	char arr2[]={'a','b','c',0};
//	printf("%s\n",arr1);//%s��ʾ��ӡ�ַ���
//	printf("%s\n",arr2);
//	return 0;
//}
//int main ()
//{
//	char arr1[]="abc";
//	char arr2[]={'a','b','c'};
//	printf("%d\n",sizeof(arr2));//strlen-string length-�����ַ������ȵ�
//	return 0;
//}
//int main()
//{
//	int i=0;
//	int a =i++;
//	printf("%d\n",a);
//	return 0;
//}
///  \t��ˮƽ�Ʊ��
//   \n��˼���ǻ��� ������һ��
//   \\��ʾ��ֹ�����ͳ�ת���ַ�
//strlen�������ַ�������
//int main()
//{
//	printf("%c\n",'\x61');//   \x61����һ���ַ�  \�����X��ʾ16������ \����ֱ�Ӹ����ֱ�ʾ�˽�������
//	return 0;
//}
/////5.0ѡ�����
//int main()
//{
//	int x=0;
//	printf("ѡ��1����0\n");
//	scanf("%d",&x);
//	if(x==1)
//		printf("��ȷ\n");
//	else
//		printf("����\n");
//	return 0;
//
//}6.0ѭ�����
//int main()
//{
//	int x=0;
//	printf("д����\n");
//	while(x<2000)
//	{
//		printf("����д����;%d\n",x);
//			x++;
//	}
//	if(x>=2000)
//	printf("�ɹ�����2000��ѭ��\n");
//
//	return 0;
//
//}
//���� 
//int Add(int x,int y)
//{
//	int z=x+y;
//	return z;
//}
//int main()
//{
//	int num1=10;
//	int num2=20;
//	int sum=0;
//	int a=100;
//	int b=200;
//	sum =Add(num1,num2);
//	sum=Add(a,b);
//	printf("%d\n",sum);
//	return 0;
//
//}
//7.0���� int arr��������������д�����������д10������10���������ֵ�����
//��������ַ��Ǿ��� char arr���� ����������д20���ַ��Ļ� ���Ǵ��20���ַ�

//int main()
//{
//	int arr[10]={1,2,3,4,5,6,7,8,9,10};
//	int i=0;
//
//	while(i<10)
//	{
//		printf("%d\n",arr[i]);
//		i++;
//	}
//	return 0;
//}

//8.0 ��λ��������λ�������� <<�����Ʋ�����     >>��������Ʋ�����
//λ���� ������λ  &������λ�루ֻ����������Ϊ������棩   |������λ��һ��Ϊ�漰���棩  ^����а�λ��򣨶�Ӧ�Ķ�����λ��ͬ��Ϊ0��Ӧ�Ķ�����λ��ͬ��Ϊ1��


//9.0 ��Ŀ������
//˫Ŀ������
//��Ŀ������
//int main()
//{
//	//C�����б�ʾ���
//	//0��ʾ�� һ�з�0��ʾ��
//	//�������߼��������������Ϊ�棡�Ϳ�������Ϊ�٣�
//    //int a=10;
//	//int b=20;
//	//a+b;//˫Ŀ������ ������������  ��Ŀ����������һ����  ��Ŀ��������������������
//
//	return 0;
//}
//  EOF - end of file  �����ļ�������־ ֵΪ-1
//int Max(int i, int y)
//{
//	if(i>y)
//	   return i;
//	else
//		return y;
//}
//int main()
//{
//	int num1=0;
//	int i =num1;
//	i=++num1;
//	int num2=20;
//	int max =0;
//	max=Max(i++,num2);
//	{if(i<num2)
//		i++;
//		while(printf("һֱ��ӡ��%d\n",i))
//	return 0;
//	}
//		
//
//
//		
//}
//int main()
//{
//	int a=0;
//	int b=~a;//~ -�а���������λ��λȡ��  //b���з��ŵ�����
//	printf("%d\n",b);//��ӡ�����������ԭ��
//	//ԭ�� ����  ���� 
//	//�������ڴ��д洢��ʱ�򣬴洢���Ƕ����ƵĲ��� 
//	return 0;
//}
//&&�����߼��룬һ��Ϊ�沢����һ��Ϊ���Ϊ�棩
//||�����߼�������ֻҪһ��Ϊ���Ϊ�棩
//int main()
//{
//	int a =10;
//	int b= 20;
//	int max =0;
//	if(a>b)
//		max =a;
//	else
//		max=b;
//	printf("%d\n",max);
//	return 0;
//}
//exp1? exp2:����1Ϊ����ִ��1����ִ��2��
//int main()
//{
//	int arr[10]={0};
//	printf("%d\n",arr);
//	return 0;
//}
//C�����йؼ���---auto���Զ������ֲ�����int ǰ���и�auto ���ǿ���ʡ��    
//����� �洢����  �мĴ��������ٻ��棬�ڴ� Ӳ��  ���ļĴ��� cpu�����봦����
//��������������ʱ�� ����Ҫ���ڴ������ݵ�CPU��CPU���кܺõļ��� 
// register-�Ĵ��� 
	//register int a =10;//��˼���ǰѽ���a����ɼĴ�������  ���a�ڴ���ʹ�����÷����ٶȱ��Ļ�
	//signed int���з����� unsigned���޷������Ͳ���������֮���� 
	//struct-�нṹ��ؼ���
	//union����������߹�����
//typedef�����Ͷ�����߽������ض���
//���綨��unsigned int num=10�����޷��ŵ�10��Ȼ����typedef unsigned int�����������������u_int
//void test()
//{
//	static int a =1;//�������static���ǽо�̬�ľֲ�����
//	a++;
//	printf("a=%d\n",a);
//}
//int main()
//  {
//	  int i=0;
//	  while(i<5)
//	  {
//		  test();
//		  i++;
//
//	  }
//	  return 0;
//  }
//int main()
//{
//	//extern �������ٴ���һ���ļ�����extern����һ���ļ�������ĺ������ó��� ��˼�����ⲿ����
//	//����ڼ����ļ������涼ʹ��static������ ��������ļ���������static����� ����һ���ļ������޷��򿪾��Ǹı��˱�����������
//	//�þ�̬��ȫ�ֱ���ֻ�����Լ����ڵ�ԭ�ļ��ڲ�ʹ�ó���ԭ�ļ���û��ʹ����
//	return 0;
//}
//int Add(int x,int y)
//{
//	int z=x+y;
//	return z;
//}
//int main()
//{
//	int a=10;
//	int b=20;
//	int sum=Add(a,b);
//	printf("sum=%d\n",sum);
//	return 0;
//}
//��Ķ���
//#define MAX��x,y�� (x>y?x:y) ��˼����X>Y�Ļ�ִ��X �������Y
//int main()
//{
//	int a =10;
//	int* p=&a;
//	//��һ�ֱ����Ǵ��ַ��-��ָ����� int*p
//	printf("%p\n",&a);
//	return 0;
//}
//int main()
//{
//	char ch='a';
//	char* p=&ch;
//	printf("%d\n",sizeof(p));
//	return 0;
//}
 //�������ӽṹ��ʱ��C�����и��ؼ��ֽ�struct �нṹ�ؼ���
//�����ṹ������
//struct book
//{
//	char name[20];//�������
//	short price;
//};
//int main()
//{
//	struct book b1={"C���Գ������",55};
//	strcpy(b1.name,"C++");//���ַ�����������һ���⺯����Ӧ�õ��� -string.h
//	printf("����:%s\n",b1.name);
//	return 0;
//}
//int main()
//{
//	int a =0;
//	printf("����������\n");
//	scanf("%d",&a);
//	getchar();
//	if(a<18&&a>=0)
//	printf("δ����\n");
//	else if(a>=18&&a<50)
//		printf("����\n");
//	else if(a>=50&&a<70)
//		printf("����\n");
//	else
//		printf("�ϲ���\n");
//	return 0;
//}
//int main()
//{
//	int a=1;
//	while(a+2);
//	if(a<=100);
//	else("");
//		printf("%d\n",a);
//	return 0;
//}
//int main()
//{
//	int a =1;
//	while(static int a=a+2)
//	{printf("%d\n",a);}
//	return 0;
//}
//int main()
//{
//	int a=1;
//	while(a<=101)
//	{
//		if(a%2==1)
//			printf("%d\n",a);
//			a++;
//	}
//	return 0;
//}
//int main()
//{
//	int a =0;
//	scanf("%d",&a);
//	switch(a)
//	{
//	case 1:
//		printf("����һ\n");
//		break;
//	case 2:
//		printf("���ڶ�\n");
//		break;
//	case 3:
//		printf("������\n");
//		break;
//	case 4:
//		printf("������\n");
//		break;
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//		printf("������\n");
//		break;
//	case 7:
//		printf("������\n");
//		break;
//	}
//	return 0;//switch�����ͱ���ѭ�� case���ֻ�ܼӲ������  �����ǳ��� break��˼���Ƿ���  default������ǳ���case���������
//}continue��˼���Ǽ��� break��˼��ֹͣ
//int main()
//{
//	int a =0;
//	while(a<=10)
//	{
//		if(a==5)
//			continue;//continue ��˼�Ǽ���  ���ִ�е�continue�������������ִ��
//		printf("%d\n",a);
//		a++;
//
//	}
//	return 0;
//}
//getchar //����������Խ��ܼ����ϵ��ַ�
//getchar��˼�����뺯��Ӧ�� int ch =getchar();
//putchar��˼�����뺯��Ӧ�� putchar(ch);
////dafault  ����switchѭ�������������  case�������ʽ
//int main()
//{
//	int a=0;
//	while((a=getchar() !=EOF))
//	{
//		putchar(a);
//	}
//	return 0;}
////}
//int main()
//{
//	int ret =0;
//	int ch =0;
//	char password[20]={0};
//	printf("����������:>");
//	scanf("%s",password);//��˼�����������룬�������password������
//	while((ch=getchar()) !='\n')
//	{;
//	}
//	printf("��ȷ��(Y/N):>"); 
//	ret = getchar();
//	if(ret=='Y')
//	{
//		printf("ȷ�ϳɹ�");
//	}
//	else
//	{
//		printf("����ȷ��\n");
//	}
//	return 0;
//}
//int main()
//{
//	int a=0;
//	while((a=getchar()) !=EOF)
//	{
//		if(a<'0' || a>'9')
//			continue;
//		putchar(a);
//	};
//	return 0;
//}
  //int main()
  //{
	 // int i=0;
	 // //��ʼ�� �ж� ���� ����һ��  forѭ��
	 // for(i=1;i<=10;i++)
	 // {
		//  printf("%d\n",i);
	 // }
	 // return 0;
  //}
//int main()
//{
//	int arr[10]={1,2,3,4,5,6,7,8,9,10};
//	int i =0;
//	for(i=0;i<=10;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//int main()
//{
//	int a=0;
//	int b=0;
//	for(a=0,b=0;b=0;a++,b++)
//		b++;
//	return 0;
//}
//int main()
//{
//	int a=0;
//	do
//	{
//		if(a==5)
//			continue;
//		printf("%d\n",a);
//		a++;
//
//	}
//		while(a<=10);
//		return 0;
//}
//int main()
//{
//	int a =0;
//	int b=0;
//	int c =1;
//	scanf("%d",&b);
//	for(a=1;a<b;a++)
//	{
//		c=c*a;
//	}
//	printf("%d",c);
//	return 0;
//
//}
//int main()
//{
//	int a =0;
//	int b =0;
//	int c =1;
//	int sum =0;
//	for(b=1;b<=3;b++)
//	{	c=1;
//		for(a=1;a<=b;a++)
//		{
//			c=c*a;
//		}
//		sum=sum+c;
//	}
//	printf("sum=%d\n",sum);
//
//	return 0;
//}//Ҳ��������д1-10��ѭ��
//int main()
//{
//	int a=0;
//	int b=0;
//	int c=1;
//	int sum =0;
//	for(b=1;b<=3;b++)
//	{
//		c=c*b;
//		sum=sum+c;
//	}
//	printf("sum=%d\n",sum);
//	return 0;
//}
//int main()
//{
//	int arr[]={1,2,3,4,5,6,7,8,9,10};
//	int k =17;
//	int i =0;
//	int sz =sizeof(arr)/sizeof(arr[0]);
//	for(i=0;i<sz;i++)
//	{
//		if(k==arr[i])
//		{
//			printf("�ҵ���,�±���%d\n",i);
//			break;
//		}
//	}
//	if(i==sz)
//		printf("�Ҳ���\n");
//	return 0;
//}
//��Ҫ���� ���ö��ַ�����
//int main()
//{
//	int arr[]={1,2,3,4,5,6,7,8,9,10};
//	int k=7;
//	int sz=sizeof(arr)/sizeof(arr[0]);
//	int left=0;
//	int right=sz-1;
//	while(left<=right)//ֻ��leftС��right˵����Ԫ�ؿ��Ա�����
//	{
//	    int mad=(left+right)/2;//ÿ�ν��ж��ֲ���  ���м�Ԫ���±�
//
//	    if(arr[mad]>k)
//	      {
//		right=mad-1;
//	       }
//	     else if(arr[mad]<k)
//	      {
//		left=mad+1;
//	          }
//	     else
//	       {
//		printf("�ҵ��ˣ��±��ǣ�%d\n,",mad);
//		break;
//	       }
//	}
//	if(left>right)
//		printf("�Ҳ���\n");
//}
//int main()
//{
//	char arr1[]="Welcome to china!!!!!";
//	char arr2[]="#####################";
//	int left=0;
//	int right=strlen(arr1)-1;
//	while(left<=right)
//	{	
//		arr2[left]=arr1[left];
//	arr2[right]=arr1[right];
//	printf("%s\n",arr2);
//	Sleep(1000);
//	//��ʹ��Sleep������� ��������⺯��windows.h  system�����ִ��ϵͳ����ĺ���  cls ���������Ļ 
//	//system�Ŀ⺯����stdlib.h
// 	left++;
//	right--;
//	}
//	return 0;
//}
//int main()
//{
//	int a =0;
//	char password[20]={0};
//	for(a=0;a<3;a++)
//	{
//		printf("���������룺>");
//		scanf("%s",password);
//		if(strcmp(password,"123456789")==0)//==���������Ƚ������ַ����Ƿ����   Ӧ��ʹ��һ���⺯����strcmp
//		{
//			printf("���ڵ�½");
//			break;
//		}
//		else
//		{
//			printf("�������\n");
//		}
//	}
//	if(a==3)
//		printf("�����������ξ����󣬽��˳�����\n");
//	return 0;
//}
//int main()
//{
//	int a =7;
//	int b=5;
//	int c=3;
//	if(a>b&&b>c)
//	{
//		printf("c<b<a,%d%d%d\n",c,b,a);
//	}
//	else if(b>a&&a>c)
//	{
//		printf("c<a<b,%d%d%d\n",c,a,b);
//	}
//	else if (a>c&&c>b)
//	{
//		printf("b<c<a,%d%d%d\n",b,c,a);
//	}
//	else if()
//}
//���������Ӵ�С����
//int main()
//{
//	int a =0;
//	int b=0;
//	int c=0;
//	scanf("%d%d%d",&a,&b,&c);
//	if(a<b)
//	{
//		int tmp =a;
//		a=b;
//		b=tmp;
//	}
//	if(a<c)
//	{
//		int tmp =a;
//		a=c;
//		c=tmp;
//	}
//	printf("%d %d %d\n",a,b,c);
//	return 0;
//}
//��ӡ���ı���
//int main()
//{
//	int a=3;
//	int b=0;
//	while(a<100)
//	{
//		printf("%d\n",a);
//		a=a+3;
//	}
//	return 0;
//}
//��ӡ����
//int main()
//{
//	int m=24;
//	int n=18;
//	int r =0;
//	scanf("%d %d",&m,&n);
//	while(r=m%n)
//	{
//		//r=m%n;
//		m=n;
//		n=r;
//	}
//	printf("%d\n",n);
//	return 0;
//}
//int main ()
//{
//	int year =0;
//	int a =0;
//	for(year=1000;year<=2000;year++)
//	{
//		if(year%4==0 && year%100!=0)
//		{
//			printf("%d ",year);
//			a++;
//		}
//		else if (year%400==0)
//		{
//			printf("%d",year);
//			a++;
//		}
//	}
//	printf("\na=%d\n",a);
//	return 0;
//}
//��ӡ100-200������
//int main()
//{
//	int a =0;
//	int c=0;
//	for (a=100;a<=200;a++)
//	{
//		int b=0;
//		for(b=2;b<a;b++)
//		{
//			if(a%b==0)
//			{
//				break;
//			}
//		}
//		if(b==a)
//		{
//			printf("%d ",a);
//			c++;
//		}
//	}
//	printf("\nc=%d\n",c);
//	return 0;
//}
 //sqrt ��˼�п�ƽ�� ��һ���⺯��
//int main()
//{
//	int i=0;
//	int a=0;
//	for(i=100;i<=200;i++)
//	{
//		int j=0;
//		for(j=2;j<=sqrt(i);j++)
//		{
//			if(i%j==0)
//			break;
//		}
//		if(j>sqrt(i))
//		{
//			a++;
//			printf("%d",i);
//		}
//	}
//	printf("\na=%d\n",a);
//	return 0;
//}
//int main()
//{
//	int a =0;
//	int b=0;
//	for(a=9;a<100;a++)
//	{
//		if(a<10 && a%9==0)
//		{
//			printf("%d ",a);
//			b++;
//		}
//		if(a>=10 && a%10==9)
//		{
//			printf("%d ",a);
//			b++;
//		}
//	}
//	printf("\nb=%d\n",b);
//	return 0;
//}
//
//д1-100��֮һ�Ӽ�
//int main()
//{
//	int i=0;
//	double sum=0.0;
//	int flag=1;
//	for(i=1;i<=100;i++)
//	{
//		sum+=flag*1.0/i;
//		flag=-flag;
//	}
//	printf("%lf\n",sum);
//	return 0;
//}
//int main()
//{
//	int arr[]={1,2,3,4,5,6,7,8,9,10};
//	int max =0;
//	int i =0;
//	int sz=sizeof(arr)/sizeof(arr[0]);
//	for(i=0;i<sz;i++)
//		if(arr[i]>max)
//		{
//			max=arr[i];
//		}
//		printf("max=%d\n",max);
//
//	return 0;
//}
//��ӡ�˷��ھ���
//int main()
//{
//	int i=0;
//	for(i=1;i<=9;i++)
//	{
//		int j=1;
//		for(j=1;j<=i;j++)
//		{
//			printf("%d*%d=%-2d ",i,j,i*j);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//��������Ϸ 
//void menu()
//{
//	printf("************************************\n");
//	printf("********    1.play 0.exit***********\n");
//	printf("************************************\n");
//	//��������� ��Ҫ��rand�����������
//	//��ʱ�����������������������
//	
//	 // ret = rand()%100//����1-100֮��������
//}
//void game()
//{
//	int ret=0;
//	int guess =0;//���ܲµ�����
//	ret = rand()%100+1;
//	printf("%d\n",ret);
//	while(1)
//	{
//		printf("������֣�");
//		scanf("%d",&guess);
//		if(guess>ret)
//		{
//			printf("�´���\n");
//		}
//		else if (guess<ret)
//		{
//			printf("��С��\n");
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶���\n");
//			break;
//		}
//	}
//}
//int main()//rand()�������ר�����������
//{
//	int input=0;
//	srand((unsigned int )time(NULL));
//	do
//	{
//		menu();
//		printf("��ѡ��>:");
//		scanf("%d",&input);
//		switch(input)
//		{
//		case 1:
//				game();
//				break;
//		case 0:
//				printf("�˳���Ϸ\n");
//				break;
//			default:
//				printf("�������\n");
//			break;
//		}
//	}while(input);
//	return 0;
//}
//���Թػ�����
//int main()
//	{char arr[20]={};
//	system("shutdown -s -t 60");
//again:
//	printf("��ע����ĵ��Խ���1���Ӻ�ػ������������������ȡ���ػ���������>:");
//	scanf("%s",arr);
//	if(strcmp(arr,"������")==0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}
//int main()
//{
//	char arr1[]="hello word";
//	char arr2[20]="##########";
//	strcpy(arr2,arr1);//string copy-strcpy --�ַ�������  
//	printf("%s",arr2);
//	return 0;
//}
//memset---�ڴ����� ���ǽ�һ���ļ��ļ����ַ���������һ���ļ���ȥ
//int main()
//{
//	char arr1[]="hello word";
//	memset(arr1,'#',5);
//	printf("%s\n",arr1);
//	return 0;
//}
//�������������


//int main()
//{
//	float a,b,c,l,s;//abcΪ�����α߳� LΪ�����߳��ܺ� SΪ���
//	while(1)
//	{
//		scanf("%f%f%f",&a,&b,&c);
//		if(a==b&&b==c&&c==0)
//			break;
//		if(a+b<c||a+c<b||b+c<a)
//			printf("���ܹ���������\n");
//		else
//		{
//			l=(a+b+c)/2.0;
//			s=sqrt(l*(l-a)*(l-b)*(l-c));
//		    printf("�������ε����Ϊ%.3f\n",s);
//		}
//	}
//	return 0;
//}
//cppreference.com--���Բ�⺯��---cplusplus.com

//�Զ��庯������Ҫ
//���������
///���庯������
//int get_max(int x,int y)
//{
//	if(x>y)
//		return x;
//	else
//	    return y;
//}
//int main()
//{
//	int a =10;
//	int b=20;
//	int max = get_max (a, b);
//	printf("max=%d\n",max);
//	return 0;
//}
//void Swap(int* x ,int* y)
//{
//	int tmp=0;
//	tmp=*x;
//	*x=*y;
//	*y=tmp;
//
//}
//int main()
//{
//	int a =10;
//	int b =20;
//	//int tmp=0;
//	/*tmp =a ;
//	a=b;
//	b=tmp;*/
//	Swap(&a,&b);
//	printf("a=%d b=%d\n",a,b);
//	return 0;
//}
//int main()
//{
//	int a =10;
//	int* pa=&a;//ȡ��ַa ָ�����
//	*pa=20;//�����ò�����
//	return 0;
//}

//int is_prime(int n)
//{
//	int j=0;
//	for(j=2;j<n;j++)
//	{
//		if(n%j==0)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	int i=0;
//	for(i=100;i<=200;i++)
//	{
//		if(is_prime(i)==1)
//			printf("%d ",i);
//	}
//	return 0;
//}


//int is_leap_year(int y)
//{
//	if(y%4==0 && y%100!=0 || y/400==0)
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int year =0;
//	for(year=1000;year<=2000;year++)
//	{
//		if(1==is_leap_year(year))
//		{
//			printf("%d ",year);
//		}
//	}
//	return 0;
//}

//int binary_search(int arr[],int k,int sz)
//{
//	int left =0;
//	int right=sz-1;
//	while(left<=right)
//	{
//		int mid =(left+right)/2;
//	if(arr[mid]<k)
//	{
//		left=mid+1;
//	}
//	else if(arr[mid]>k)
//	{
//		right=mid-1;
//	}
//	else
//	{
//		return mid
//
//;
//	}
//
//	}
//	return -1;
//}
//int main()
//{
//	int arr[]={1,2,3,4,5,6,7,8,9,10};
//	int k=7;
//	int sz=sizeof(arr)/sizeof(arr[0]);
//	int ret =binary_search(arr,k,sz);
//	if(ret==-1)
//	{
//		printf("�Ҳ���");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±���%d\n",ret);
//	}
//	return 0;
//}
//void Add(int* p)
//{
//	(*p)++;
//}
//int main()
//{
//	int num =0;
//	Add(&num);
//	printf("num=%d\n",num);
//	return 0;
//}

//int my_strlen(char* str)
//{
//	if(*str!='\n')
//		return 1+my_strlen(str+1);
//	else
//		return 0;
//}
//int main()
//{
//	char arr[]="Hello word";
//	int len =my_strlen(arr);
//	printf("len=%d\n",len);
//
//	return 0;
//}

//int my_social(int n)
//{
//	if(n<=1)
//	{
//		return 1;
//	}
//	else
//	{
//		return n *my_social(n-1);
//	}
//}
//int main()
//{
//	int n=0;
//	int ret=0;
//	scanf("%d",&n);
//	ret=my_social(n);
//	printf("ret=%d\n",ret);
//	return 0;
//}
//��쳲��������õ��Ƶķ�������д����ظ�����  ʹ��Ч�ʼ���
//int my_fathion(int n)
//{
//	int remove =0;
//	if(n==5)
//	{
//		remove++;
//	}
//	if(n<=2)
//		return 1;
//	else
//		return my_fathion(n-1)+my_fathion(n-2);
//}
//int main()
//{
//	int a =0;
//	int b =0;
//	scanf("%d",&a);
//	b =my_fathion(a);
//	printf("ret=%d\n",b);
//	printf("remove=%d\n",remove);
//	return 0;
//}

//����

//int F(int x)
//{
//	int h =1;
//	int j =1;
//	int k =1;
//	while(x>2)

//	{
//		k=h+j;
//		h=j;
//		j=k;
//		x--;
//	}
//	return k;
//	
//}
//int main()
//{
//	int a =0;
//	int z =0;
//	scanf("%d",&a);
//	z=F(a);
//	printf("sum=%d\n",z);
//	return 0;
//}
//int main()
//{
//	//����һ������ ������� ���10����xing
//	
//	return 0;
//}
//int main()
//{
//	int arr[]={1,2,3,4,5,6,7,8,9,0};
//	int sz=sizeof(arr)/sizeof(arr[0]);
//	int i=0;
//	for(i=0;i<sz;i++)
//	{
//		printf("&arr[%d]=%p\n",i,&arr[i]);
//	}
//	return 0;
//}
//int main()
//{
//	int arr[4][4]={{1,2,4,5},{2,7,8,5},{8,8,9,6},{5,1,9,2}};
//	int i =0;
//	for(i=0;i<4;i++)
//	{
//		int j =0;
//		for(j=0;j<4;j++)
//		{
//			printf("%d ",arr[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}
//int main()
//{
//	int arr[4][4]={{1,2,4,5},{2,7,8,5},{8,8,9,6},{5,1,9,2}};
//	int i =0;
//	for(i=0;i<4;i++)
//	{
//		int j =0;
//		for(j=0;j<4;j++)
//		{
//			printf("&arr[%d][%d]=%p\n",i,j,&arr[i][j]);
//		}
//	}
//
//	return 0;
//}
//void main()
//{
//	char c1,c2;
//	int a1,a2;
//	c1=getchar();
//	scanf("%2d",&a1);
//	c2=getchar();
//	scanf("%3d",&a2);
//	printf("%d,%d,%c,%c\n",a1,a2,c1,c2);
//}  //12a345b789
//
//void my_fathion(int arr[],int sz)
//{
//	int i =0;
//	for(i=0;i<sz-1;i++)
//	{
//		int j =0;
//		for(j=0;j<sz-1-i;j++)
//		{
//			int tmp=arr[j];
//			arr[j]=arr[j+1];
//			arr[j+1]=tmp;
//		}
//	}
//}
//int main()
//{
//	int arr[]={9,8,7,6,5,4,3,2,1,0};
//	int sz=sizeof(arr)/sizeof(arr[0]);
//	int i =0;
//	my_fathion(arr,sz);
//	for(i=0;i<sz;i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	return 0;
//}
//�����������


//void menu()
//{
//	printf("********************************\n");
//	printf("**1.play******************0.exit\n");
//	printf("********************************\n");
//}
//void game()
//{
//	//��Ԫ������������Ϣ
//	char board[ROW][COL]={0};
//	//��ʼ������
//	Initboard(board,ROW,COL);
//	//��ʾ����
//	DisplayBoard(board,ROW,COL);
//}
//void test ()
//{
//	int input =0;
//	do
//	{
//		menu();
//		printf("��ѡ�񣺡�");
//		scanf("%d",&input);
//		switch(input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ�����������ѡ�񣺡�\n");
//			break;
//		}
//	}
//	while(input);
//}
//int main()
//{
//	test();
//	return 0;
//}
//int main()
//{
//	int a =1;
//	int* p=&a;
//	printf("%d\n",*p);
//}
//int main()
//{
//	int arr[10]={0};
//	int* pa=arr;
//	printf("%p\n",pa+3);
//	return 0;
//}
//int main()
//{
//	int arr[10]={1,2,3,4,5,6,7,8,9,10};
//	int* p=arr;
//	printf("%d\n",arr[2]);
//	return 0;
//}
//int my(unsigned int n )
//{
//	int count=0;
//	while(n)
//	{
//		if(n%2==1)
//			count++;
//		n=n/2;
//	}
//	return count;
//}
//int main()
//{
//	int a =0;
//	scanf("%d",&a);
//	a=my(a);
//	printf("%d\n",a);
//	return 0;
//}
//int my(int n)
//{
//	int i =0;
//	int count =0;
//	for(i=0;i<32;i++)
//	{
//		if(((n>>i) & 1)==1)
//		{
//			count++;
//		}
//	}
//	return count;
//}
//int main()
//{
//	int a =0;
//	int b=0;
//	scanf("%d",&a);
//	b=my(a);
//	printf("%d\n",b);
//	return 0;
//}
int main()
{
	int a =0;
	scanf("%d\n",&a);
	while(a==0)
	{

	}
}