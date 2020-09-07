#define _CRT_SECURE_NO_WARNINGS 1
//包含一个stdio.h的文件
//std-标准的standard input output
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
//	const int n=10;//n是变量，但又具有常属性 因为加了const，所以我们说n是常变量
//	n=20；
////
////	//const-指的是常属性就是被赋予的值不能改变
////	//3叫字面常量  直接写出来的就叫字面常量
////	/*int num1=0;
////	int num2=0;
////	int sum=0;
////	scanf("%d%d",&num1,&num2);
////	sum =num1+num2;
//	printf("sum=%d\n",);
////	*/
////	
////	//未声明的标识符，//extern表示声明文件以外的变量
//	return 0;
//}

//int main()
//{
//	int num1=0;
//	int num2=0;
//	int sum =0;
//	//输入数据函数叫scanf（）使用输入函数
//	//&这个符号叫取地址符号
//	scanf("%d%d",&num1,&num2);
//	//C语言语法规定，变量要定义再当前代码快的最前面
//	sum=num1+num2;
//	printf("sum=%d\n",sum);
//	return 0;
//}
//int num2=20;//被称为全局变量-定义在代码块（{}）之外的变量
//int main()
//{   int num =10;//num1被称为局部变量-定义在代码块（{}）内部的变量
//	return 0;
//}
//int main()
//{
//	//short age=20;//short age 意思是向内存申请两个字节=16个bit位  用来存放20
//	float weight =65.2f;//float 向内存申请4个字节，存放小数
//	return 0;
//}
//int main()
//{   
	//printf("%d\n",sizeof(char));//sizeof（）表示这个东西向空间申请多少内存？
    //printf("%d\n",sizeof(short));
    //printf("%d\n",sizeof(int));
    //printf("%d\n",sizeof(long));
    //printf("%d\n",sizeof(long long));
    //printf("%d\n",sizeof(float));
    //printf("%d\n",sizeof(double));
	//return 0;
//}
//char-字符类型
//%d-打印整型
//%c-打印字符
//%f-打印浮点数字-打印小数的意思
//%p-以地址的形式打印
//%x打印16进制
//%o-...
//int main()
//{   //char ch = 'A';//char表示向空间申请内存
    //printf("%c\n",ch);//%C-意思就是打印字符格式的数据
	//int age=20;
	//short int -短整型
	//int叫整型
	//printf("%d\n",age);//%d-表示打印整型十进制的数据
	//long叫长整型
	//long num = 100;
	//printf("%d\n",num);
	//float f =5.0;
	//printf("%f\n",f);
	//double d =3.14;
	//printf("%lf\n",d);//%lf-表示打印双精度类型
 //   return 0;
//}
//int main()//这是主函数-程序的入口
//{ //这里完成任务
	//在屏幕上输出hello world
	//函数-print function意思就是打印函数
	//库函数-C语言本身提供给我们使用的函数
	//别人的东西-打招呼
	//#include（包含的意思）

	//printf("你好\n");
    //return 0;
//int是整型的意思
//main前面的int表示main函数调用的时候返回一个整型值
//#define 定义的标识符常量
//#define MAX 10//如果以后要定义一个常量就用#define来定义
//int main()
//{
//	int arr[MAX]={0};
//	printf("%d\n",MAX);
//
//	return 0;
//}
//4.枚举常量
//枚举-一一列举
//例如性别；男 女
//枚举关键字 enum
//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET
//	//把MALE,FEMALE,SECRET就叫枚举常量-放在这里面不可被改变
//};
//int main()
//{
//	printf("%d\n",MALE);//默认值为0
//	printf("%d\n",FEMALE);//默认值为1
//	printf("%d\n",SECRET);//默认值为2
//
//	return 0;
//}
//int main()
//{
//	char arr1[]="abc";//数组
//	char arr2[]={'a','b','c',0};
//	printf("%s\n",arr1);//%s表示打印字符串
//	printf("%s\n",arr2);
//	return 0;
//}
//int main ()
//{
//	char arr1[]="abc";
//	char arr2[]={'a','b','c'};
//	printf("%d\n",sizeof(arr2));//strlen-string length-计算字符串长度的
//	return 0;
//}
//int main()
//{
//	int i=0;
//	int a =i++;
//	printf("%d\n",a);
//	return 0;
//}
///  \t叫水平制表符
//   \n意思就是换行 换到下一行
//   \\表示防止被解释成转移字符
//strlen用来求字符串长度
//int main()
//{
//	printf("%c\n",'\x61');//   \x61等于一个字符  \后面跟X表示16进制数 \后面直接跟数字表示八进制数字
//	return 0;
//}
/////5.0选择语句
//int main()
//{
//	int x=0;
//	printf("选择1还是0\n");
//	scanf("%d",&x);
//	if(x==1)
//		printf("正确\n");
//	else
//		printf("错误\n");
//	return 0;
//
//}6.0循环语句
//int main()
//{
//	int x=0;
//	printf("写代码\n");
//	while(x<2000)
//	{
//		printf("继续写代码;%d\n",x);
//			x++;
//	}
//	if(x>=2000)
//	printf("成功跳出2000的循环\n");
//
//	return 0;
//
//}
//函数 
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
//7.0数组 int arr【】大括号里面写几个数组比如写10定义存放10个整数数字的数组
//如果想存放字符那就是 char arr【】 大括号里面写20个字符的话 就是存放20个字符

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

//8.0 移位（二进制位）操作符 <<叫左移操作符     >>这个叫右移操作符
//位操作 二进制位  &叫做按位与（只有两个数都为真才是真）   |叫做按位或（一个为真及是真）  ^这个叫按位异或（对应的二进制位相同则为0对应的二进制位不同则为1）


//9.0 单目操作符
//双目操作符
//三目操作符
//int main()
//{
//	//C语言中表示真假
//	//0表示假 一切非0表示真
//	//！叫做逻辑反操作符（如果为真！就可以让他为假）
//    //int a=10;
//	//int b=20;
//	//a+b;//双目操作符 就是有两个数  单目操作符就是一个数  三目操作数就是三个操作数
//
//	return 0;
//}
//  EOF - end of file  叫做文件结束标志 值为-1
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
//		while(printf("一直打印；%d\n",i))
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
//	int b=~a;//~ -叫按（二进制位）位取反  //b是有符号的整型
//	printf("%d\n",b);//打印的是这个数的原码
//	//原码 反码  补码 
//	//负数在内存中存储的时候，存储的是二进制的补码 
//	return 0;
//}
//&&（叫逻辑与，一个为真并且另一个为真才为真）
//||（叫逻辑或，两个只要一个为真就为真）
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
//exp1? exp2:（若1为真则执行1否则执行2）
//int main()
//{
//	int arr[10]={0};
//	printf("%d\n",arr);
//	return 0;
//}
//C语言中关键字---auto叫自动本来局部变量int 前面有个auto 但是可以省略    
//计算机 存储数据  有寄存器，高速缓存，内存 硬盘  最贵的寄存器 cpu叫中央处理器
//计算机进行运算的时候 首先要从内存拿数据到CPU让CPU进行很好的计算 
// register-寄存器 
	//register int a =10;//意思就是把建议a定义成寄存器变量  如果a在大量使用想让访问速度变快的话
	//signed int叫有符号数 unsigned叫无符号数就不存在正负之分了 
	//struct-叫结构体关键字
	//union叫联合体或者共用体
//typedef叫类型定义或者叫类型重定义
//比如定义unsigned int num=10；叫无符号的10；然后用typedef unsigned int重新起个简单名字例如u_int
//void test()
//{
//	static int a =1;//如果加上static就是叫静态的局部变量
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
//	//extern 比如你再创建一个文件就用extern把另一个文件夹里面的函数调用出来 意思声明外部符号
//	//如果在几个文件夹里面都使用static来定义 例如这个文件夹里面用static定义的 再另一个文件里面无法打开就是改变了变量的作用域
//	//让静态的全局变量只能在自己所在的原文件内部使用出了原文件就没法使用了
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
//宏的定义
//#define MAX（x,y） (x>y?x:y) 意思就是X>Y的话执行X 否则就是Y
//int main()
//{
//	int a =10;
//	int* p=&a;
//	//有一种变量是存地址的-叫指针变量 int*p
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
 //描述复杂结构的时候C语言有个关键字叫struct 叫结构关键字
//创建结构体类型
//struct book
//{
//	char name[20];//书的名字
//	short price;
//};
//int main()
//{
//	struct book b1={"C语言程序设计",55};
//	strcpy(b1.name,"C++");//叫字符串拷贝它是一个库函数你应该调用 -string.h
//	printf("书名:%s\n",b1.name);
//	return 0;
//}
//int main()
//{
//	int a =0;
//	printf("请输入年龄\n");
//	scanf("%d",&a);
//	getchar();
//	if(a<18&&a>=0)
//	printf("未成年\n");
//	else if(a>=18&&a<50)
//		printf("成年\n");
//	else if(a>=50&&a<70)
//		printf("老年\n");
//	else
//		printf("老不死\n");
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
//		printf("星期一\n");
//		break;
//	case 2:
//		printf("星期二\n");
//		break;
//	case 3:
//		printf("星期三\n");
//		break;
//	case 4:
//		printf("星期四\n");
//		break;
//	case 5:
//		printf("星期五\n");
//		break;
//	case 6:
//		printf("星期六\n");
//		break;
//	case 7:
//		printf("星期天\n");
//		break;
//	}
//	return 0;//switch叫整型变量循环 case后边只能加不变的量  及就是常量 break意思就是返回  default命令就是除了case的其他情况
//}continue意思就是继续 break意思是停止
//int main()
//{
//	int a =0;
//	while(a<=10)
//	{
//		if(a==5)
//			continue;//continue 意思是继续  如果执行到continue就跳到上面继续执行
//		printf("%d\n",a);
//		a++;
//
//	}
//	return 0;
//}
//getchar //这个函数可以接受键盘上的字符
//getchar意思叫输入函数应该 int ch =getchar();
//putchar意思叫输入函数应该 putchar(ch);
////dafault  除了switch循环外的其他可能  case变量表达式
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
//	printf("请输入密码:>");
//	scanf("%s",password);//意思是请输入密码，并存放在password数组中
//	while((ch=getchar()) !='\n')
//	{;
//	}
//	printf("请确认(Y/N):>"); 
//	ret = getchar();
//	if(ret=='Y')
//	{
//		printf("确认成功");
//	}
//	else
//	{
//		printf("放弃确认\n");
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
	 // //初始化 判断 调整 放在一起  for循环
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
//}//也可以这样写1-10的循环
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
//			printf("找到了,下标是%d\n",i);
//			break;
//		}
//	}
//	if(i==sz)
//		printf("找不到\n");
//	return 0;
//}
//重要代码 利用二分法查找
//int main()
//{
//	int arr[]={1,2,3,4,5,6,7,8,9,10};
//	int k=7;
//	int sz=sizeof(arr)/sizeof(arr[0]);
//	int left=0;
//	int right=sz-1;
//	while(left<=right)//只有left小于right说明有元素可以被查找
//	{
//	    int mad=(left+right)/2;//每次进行二分查找  找中间元素下表
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
//		printf("找到了，下标是：%d\n,",mad);
//		break;
//	       }
//	}
//	if(left>right)
//		printf("找不到\n");
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
//	//想使用Sleep这个函数 必须引入库函数windows.h  system这个是执行系统命令的函数  cls 代表清空屏幕 
//	//system的库函数是stdlib.h
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
//		printf("请输入密码：>");
//		scanf("%s",password);
//		if(strcmp(password,"123456789")==0)//==不能用来比较两个字符串是否相等   应该使用一个库函数叫strcmp
//		{
//			printf("正在登陆");
//			break;
//		}
//		else
//		{
//			printf("密码错误\n");
//		}
//	}
//	if(a==3)
//		printf("密码输入三次均错误，将退出程序\n");
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
//吧三个数从大到小排列
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
//打印三的倍数
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
//打印闰年
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
//打印100-200的素数
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
 //sqrt 意思叫开平方 是一个库函数
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
//写1-100分之一加减
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
//打印乘法口诀表
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
//猜数字游戏 
//void menu()
//{
//	printf("************************************\n");
//	printf("********    1.play 0.exit***********\n");
//	printf("************************************\n");
//	//生成随机数 就要用rand（）这个函数
//	//拿时间戳来设置随机数的生成起点
//	
//	 // ret = rand()%100//生成1-100之间的随机数
//}
//void game()
//{
//	int ret=0;
//	int guess =0;//接受猜的数字
//	ret = rand()%100+1;
//	printf("%d\n",ret);
//	while(1)
//	{
//		printf("请猜数字：");
//		scanf("%d",&guess);
//		if(guess>ret)
//		{
//			printf("猜大了\n");
//		}
//		else if (guess<ret)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了\n");
//			break;
//		}
//	}
//}
//int main()//rand()这个函数专门生成随机数
//{
//	int input=0;
//	srand((unsigned int )time(NULL));
//	do
//	{
//		menu();
//		printf("请选择>:");
//		scanf("%d",&input);
//		switch(input)
//		{
//		case 1:
//				game();
//				break;
//		case 0:
//				printf("退出游戏\n");
//				break;
//			default:
//				printf("输入错误\n");
//			break;
//		}
//	}while(input);
//	return 0;
//}
//电脑关机代码
//int main()
//	{char arr[20]={};
//	system("shutdown -s -t 60");
//again:
//	printf("请注意你的电脑将在1分钟后关机，如果输入我是猪则取消关机：请输入>:");
//	scanf("%s",arr);
//	if(strcmp(arr,"我是猪")==0)
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
//	strcpy(arr2,arr1);//string copy-strcpy --字符串拷贝  
//	printf("%s",arr2);
//	return 0;
//}
//memset---内存设置 就是将一个文件的几个字符拷贝到另一个文件中去
//int main()
//{
//	char arr1[]="hello word";
//	memset(arr1,'#',5);
//	printf("%s\n",arr1);
//	return 0;
//}
//计算三角形面积


//int main()
//{
//	float a,b,c,l,s;//abc为三角形边长 L为三个边长总和 S为面积
//	while(1)
//	{
//		scanf("%f%f%f",&a,&b,&c);
//		if(a==b&&b==c&&c==0)
//			break;
//		if(a+b<c||a+c<b||b+c<a)
//			printf("不能构成三角形\n");
//		else
//		{
//			l=(a+b+c)/2.0;
//			s=sqrt(l*(l-a)*(l-b)*(l-c));
//		    printf("该三角形的面积为%.3f\n",s);
//		}
//	}
//	return 0;
//}
//cppreference.com--可以查库函数---cplusplus.com

//自定义函数更重要
//函数的组成
///定义函数上面
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
//	int* pa=&a;//取地址a 指针变量
//	*pa=20;//解引用操作符
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
//		printf("找不到");
//	}
//	else
//	{
//		printf("找到了，下标是%d\n",ret);
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
//求斐波那契数用递推的方法会进行大量重复运算  使得效率极低
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

//迭代

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
//	//创建一个数组 存放整型 存放10个整xing
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
//三字棋的制作


//void menu()
//{
//	printf("********************************\n");
//	printf("**1.play******************0.exit\n");
//	printf("********************************\n");
//}
//void game()
//{
//	//二元数组存放棋盘信息
//	char board[ROW][COL]={0};
//	//初始化棋盘
//	Initboard(board,ROW,COL);
//	//显示棋盘
//	DisplayBoard(board,ROW,COL);
//}
//void test ()
//{
//	int input =0;
//	do
//	{
//		menu();
//		printf("请选择：》");
//		scanf("%d",&input);
//		switch(input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误，请重新选择：》\n");
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