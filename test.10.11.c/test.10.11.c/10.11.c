#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//λ�� ������λ
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
#include<conio.h> //_getch()��������
#include<graphics.h> //ͼ�ο���
//1.����ͼƬ����
//2.������Դ
//3.��ʾͼƬ
IMAGE img[7]; //���������洢ͼƬ
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
//1:ǽ 0:�յ� 4:����  5:�� 3:Ŀ�ĵ� 8:����Ŀ�ĵ�
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
			case 0://�յ�
				putimage(x, y, img + 0);
				//printf("  ");
				break;
			case 1://ǽ��
				putimage(x, y, img + 1);
				//printf("��");
				break;
			case 3://���ӵ�Ŀ�ĵ�
				putimage(x, y, img + 2);
				//printf("��");
				break;
			case 4://����
				putimage(x, y, img + 3);
				//printf("��");
				break;
			case 5://�� 
				putimage(x, y, img + 4);
				//printf("��");
				break;
			case 7://7+3(����+Ŀ�ĵ�)
				putimage(x, y, img + 5);
				//printf("��");
				break;
			case 8://5+3����+Ŀ�ĵأ� 
				putimage(x, y, img + 6);
				//printf("��");
				break;
			}
			/*if(map[i][j]==0)
			printf("  ");
			else if(map[i][j]==1)
			printf("��");
			else if(map[i][j]==3)
			printf("��");
			else if(map[i][j]==4)
			printf("��");
			else if(map[i][j]==5)
			printf("��");
			/*else if(map[i][j]==)
			printf("��");*/
		}
		printf("\n");
	}
}

void playGame()
{
	//��ȡ��ǰ�˵��±�  ʱ�̶��ܹ�ȷ���˵��±� 
	int row, col;//�˵��к��� 
	for (int i = 0; i<7; i++)//i�ǿ��Ʊ��� 0-6 
	{
		for (int j = 0; j<10; j++)//j�ǿ��Ʊ��� 0-9 
		{
			if (map[i][j] == 5 || map[i][j] == 8)
			{
				row = i;//i 0-6 //����������ǰ�row��ֵд��3�Ļ���ô�´���λ�øı�Ļ�rowֵ����Ϊ3 
				col = j;//j 0-9 //����������ǰ�col��ֵд��7�Ļ���ô�´���λ�øı�Ļ�colֵ����Ϊ7
			}

		}
	}
	printf("(%d,%d)\n", row, col);
	map[row][col];
	//ͨ�����̿���ͼ�ζ�Ӧ������
	//��wasd �ַ�  char 
	char input;//����һ���ַ����� 
	input = getch(); //�������ܼ��̵�����
	//getchar ()��ʾ���� ����enter�� �������  getch()����ʾ���ģ��������Ͻ��� 
	switch (input)
	{
		/********************************
		�����ߵ����
		1.�˵�ǰ���ǿյ�
		2.�˵�ǰ����Ŀ�ĵ�
		3.�˵�ǰ�������ӣ����ӵ�ǰ���ǿյ�
		4.�˵�ǰ�������ӣ����ӵ�ǰ����Ŀ�ĵ�
		*********************************/
	case 'w'://�� 
		if (map[row - 1][col] == 0 || map[row - 1][col] == 3)//����˵�ǰ���ǿյػ���Ŀ�ĵ� 
		{
			/*if(map[row][col]==5)
			{
			map[row][col]=0;//�˵�λ����5--0����8--3
			}
			else
			{
			map[row][col]=3;//�˵�λ����5--0����8--3
			}*/
			map[row][col] -= 5; //�˵�id�п�����5��Ҳ������8 
			map[row - 1][col] += 5;
		}

		//��ǰ�������� 
		else if (map[row - 1][col] == 4 || map[row - 1][col] == 7)
		{
			if (map[row - 2][col] == 0 || map[row - 2][col] == 3)//���ӵ�ǰ���ǿյ� 
			{
				map[row - 2][col] += 4;
				map[row - 1][col] += 1;
				map[row][col] -= 5;
			}
		}

		break;

	case 'a'://�� 
		if (map[row][col - 1] == 0 || map[row][col - 1] == 3)//����˵�ǰ���ǿյػ���Ŀ�ĵ� 
		{
			/*if(map[row][col]==5)
			{
			map[row][col]=0;//�˵�λ����5--0����8--3
			}
			else
			{
			map[row][col]=3;//�˵�λ����5--0����8--3
			}*/
			map[row][col] -= 5; //�˵�id�п�����5��Ҳ������8 
			map[row][col - 1] += 5;
		}

		//��ǰ�������� 
		else if (map[row][col - 1] == 4 || map[row][col - 1] == 7)
		{
			if (map[row][col - 2] == 0 || map[row][col - 2] == 3)//���ӵ�ǰ���ǿյ� 
			{
				map[row][col - 2] += 4;
				map[row][col - 1] += 1;
				map[row][col] -= 5;
			}
		}



		break;//����m,x,z,n��һЩ�ַ�ʱ����ִ�У���Ϊֻ������w,a,s,d 

	case 's'://�� 
		if (map[row + 1][col] == 0 || map[row + 1][col] == 3)//����˵�ǰ���ǿյػ���Ŀ�ĵ� 
		{
			/*if(map[row][col]==5)
			{
			map[row][col]=0;//�˵�λ����5--0����8--3
			}
			else
			{
			map[row][col]=3;//�˵�λ����5--0����8--3
			}*/
			map[row][col] -= 5; //�˵�id�п�����5��Ҳ������8 
			map[row + 1][col] += 5;
		}

		//��ǰ�������� 
		else if (map[row + 1][col] == 4 || map[row + 1][col] == 7)
		{
			if (map[row + 2][col] == 0 || map[row + 2][col] == 3)//���ӵ�ǰ���ǿյ� 
			{
				map[row + 2][col] += 4;
				map[row + 1][col] += 1;
				map[row][col] -= 5;
			}
		}
		break;

	case 'd'://�� 
		if (map[row][col + 1] == 0 || map[row][col + 1] == 3)//����˵�ǰ���ǿյػ���Ŀ�ĵ� 
		{
			/*if(map[row][col]==5)
			{
			map[row][col]=0;//�˵�λ����5--0����8--3
			}
			else
			{
			map[row][col]=3;//�˵�λ����5--0����8--3
			}*/
			map[row][col] -= 5; //�˵�id�п�����5��Ҳ������8 
			map[row][col + 1] += 5;
		}

		//��ǰ�������� 
		else if (map[row][col + 1] == 4 || map[row][col + 1] == 7)
		{
			if (map[row][col + 2] == 0 || map[row][col + 2] == 3)//���ӵ�ǰ���ǿյ� 
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
	loadResource();// ���ͼƬ
	//���ñ���

	SetConsoleTitle("������");

	//���ô��ڴ�С
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