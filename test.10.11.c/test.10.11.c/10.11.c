#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//位段 二进制位
//struct S
//{
//	int a:2;
//	int b:5;
//	int c:10;
//	int d:30;
//};
//int main()
//{
//	struct S s;
//	printf("%d\n",sizeof(s));
//	return 0;
//}
//struct S
//{
//	char a:3;
//	char b:4;
//	char c:5;
//	char d:4;
//};
//int main()
//{
//	struct S s;
//	s.a=10;
//	s.b=20;
//	s.c=3;
//	s.d=4;
//	printf("%d\n",sizeof(s));
//	return 0;
//}
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<conio.h> //_getch()按键交互
#include<graphics.h> //图形库插件
//1.定义图片变量
//2.加载资源
//3.显示图片
IMAGE img[7]; //用数组来存储图片
int imgIndex[7] = { 0, 1, 3, 4, 5,7,8 };
int map[8][8] = {
		{ 1, 1, 1, 1, 1, 1, 1, 1 },
		{ 1, 3, 0, 0, 0, 0, 0, 1 },
		{ 1, 4, 1, 0, 1, 0, 3, 1 },
		{ 1, 0, 0, 0, 0, 0, 4, 1 },
		{ 1, 0, 1, 5, 1, 0, 0, 1 },
		{ 1, 4, 1, 0, 1, 0, 4, 1 },
		{ 1, 3, 0, 0, 0, 0, 3, 1 },
		{ 1, 1, 1, 1, 1, 1, 1, 1 } };
//1:墙 0:空地 4:箱子  5:人 3:目的地 8:人在目的地
void loadResource()
{
	for (int i = 0; i < 7; i++)
	{
		char fileName[20] = "";
		sprintf(fileName, "%d.bmp", imgIndex[i]);
		loadimage(img + i, fileName);
	}
}
void DrawMap()
{
	int x, y;
	for (int i = 0; i<8; i++)
	{
		for (int j = 0; j<8; j++)
		{
			x = j * 64;
			y = i * 64;
			switch (map[i][j])
			{
			case 0://空地
				putimage(x, y, img + 0);
				//printf("  ");
				break;
			case 1://墙壁
				putimage(x, y, img + 1);
				//printf("■");
				break;
			case 3://箱子的目的地
				putimage(x, y, img + 2);
				//printf("☆");
				break;
			case 4://箱子
				putimage(x, y, img + 3);
				//printf("□");
				break;
			case 5://人 
				putimage(x, y, img + 4);
				//printf("▲");
				break;
			case 7://7+3(箱子+目的地)
				putimage(x, y, img + 5);
				//printf("★");
				break;
			case 8://5+3（人+目的地） 
				putimage(x, y, img + 6);
				//printf("▲");
				break;
			}
			/*if(map[i][j]==0)
			printf("  ");
			else if(map[i][j]==1)
			printf("■");
			else if(map[i][j]==3)
			printf("☆");
			else if(map[i][j]==4)
			printf("□");
			else if(map[i][j]==5)
			printf("▲");
			/*else if(map[i][j]==)
			printf("★");*/
		}
		printf("\n");
	}
}

void playGame()
{
	//获取当前人的下标  时刻都能够确定人的下标 
	int row, col;//人的行和列 
	for (int i = 0; i<7; i++)//i是控制变量 0-6 
	{
		for (int j = 0; j<10; j++)//j是控制变量 0-9 
		{
			if (map[i][j] == 5 || map[i][j] == 8)
			{
				row = i;//i 0-6 //如果在这我们吧row的值写成3的话那么下次人位置改变的话row值还是为3 
				col = j;//j 0-9 //如果在这我们吧col的值写成7的话那么下次人位置改变的话col值还是为7
			}

		}
	}
	printf("(%d,%d)\n", row, col);
	map[row][col];
	//通过键盘控制图形对应的数据
	//用wasd 字符  char 
	char input;//定义一个字符变量 
	input = getch(); //变量接受键盘的输入
	//getchar ()显示回文 按下enter键 接受完成  getch()不显示回文，按下马上接受 
	switch (input)
	{
		/********************************
		人能走的情况
		1.人的前面是空地
		2.人的前面是目的地
		3.人的前面是箱子，箱子的前面是空地
		4.人的前面是箱子，箱子的前面是目的地
		*********************************/
	case 'w'://上 
		if (map[row - 1][col] == 0 || map[row - 1][col] == 3)//如果人的前面是空地或者目的地 
		{
			/*if(map[row][col]==5)
			{
			map[row][col]=0;//人的位置是5--0或者8--3
			}
			else
			{
			map[row][col]=3;//人的位置是5--0或者8--3
			}*/
			map[row][col] -= 5; //人的id有可能是5，也可能是8 
			map[row - 1][col] += 5;
		}

		//人前面是箱子 
		else if (map[row - 1][col] == 4 || map[row - 1][col] == 7)
		{
			if (map[row - 2][col] == 0 || map[row - 2][col] == 3)//箱子的前面是空地 
			{
				map[row - 2][col] += 4;
				map[row - 1][col] += 1;
				map[row][col] -= 5;
			}
		}

		break;

	case 'a'://左 
		if (map[row][col - 1] == 0 || map[row][col - 1] == 3)//如果人的前面是空地或者目的地 
		{
			/*if(map[row][col]==5)
			{
			map[row][col]=0;//人的位置是5--0或者8--3
			}
			else
			{
			map[row][col]=3;//人的位置是5--0或者8--3
			}*/
			map[row][col] -= 5; //人的id有可能是5，也可能是8 
			map[row][col - 1] += 5;
		}

		//人前面是箱子 
		else if (map[row][col - 1] == 4 || map[row][col - 1] == 7)
		{
			if (map[row][col - 2] == 0 || map[row][col - 2] == 3)//箱子的前面是空地 
			{
				map[row][col - 2] += 4;
				map[row][col - 1] += 1;
				map[row][col] -= 5;
			}
		}



		break;//输入m,x,z,n等一些字符时不会执行，因为只能输入w,a,s,d 

	case 's'://下 
		if (map[row + 1][col] == 0 || map[row + 1][col] == 3)//如果人的前面是空地或者目的地 
		{
			/*if(map[row][col]==5)
			{
			map[row][col]=0;//人的位置是5--0或者8--3
			}
			else
			{
			map[row][col]=3;//人的位置是5--0或者8--3
			}*/
			map[row][col] -= 5; //人的id有可能是5，也可能是8 
			map[row + 1][col] += 5;
		}

		//人前面是箱子 
		else if (map[row + 1][col] == 4 || map[row + 1][col] == 7)
		{
			if (map[row + 2][col] == 0 || map[row + 2][col] == 3)//箱子的前面是空地 
			{
				map[row + 2][col] += 4;
				map[row + 1][col] += 1;
				map[row][col] -= 5;
			}
		}
		break;

	case 'd'://右 
		if (map[row][col + 1] == 0 || map[row][col + 1] == 3)//如果人的前面是空地或者目的地 
		{
			/*if(map[row][col]==5)
			{
			map[row][col]=0;//人的位置是5--0或者8--3
			}
			else
			{
			map[row][col]=3;//人的位置是5--0或者8--3
			}*/
			map[row][col] -= 5; //人的id有可能是5，也可能是8 
			map[row][col + 1] += 5;
		}

		//人前面是箱子 
		else if (map[row][col + 1] == 4 || map[row][col + 1] == 7)
		{
			if (map[row][col + 2] == 0 || map[row][col + 2] == 3)//箱子的前面是空地 
			{
				map[row][col + 2] += 4;
				map[row][col + 1] += 1;
				map[row][col] -= 5;
			}
		}
		break;

	}
}
int main()
{
	loadResource();// 输出图片
	//设置标题

	SetConsoleTitle("推箱子");

	//设置窗口大小
	system("mode con cols=29 lines=16");

	
	while (1)
	{
		system("cls");
		DrawMap();
		playGame();
	}
	_getch();
	closegraph;
	return 0;
}