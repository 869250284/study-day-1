#define _CRT_SECURE_NO_WARNINGS 1
#include"contact.h"
void menu()
{
	printf("***********************************************\n");
	printf("********1.add*******************2.del**********\n");
	printf("********3.search****************4.modify*******\n");
	printf("********5.show******************6.sort*********\n");
	printf("******************0.exit***********************\n");
	printf("***********************************************\n");
}
int main()
{
		int input=0;
		struct Contact con;//con����ͨѶ¼ ��߰���һǧ��Ԫ�ص������size
		InitContact(&con);
	do
	{
		
		//��ʼ��ͨѶ¼
		menu();
		printf("��ѡ��\n");
		scanf("%d",&input);
		switch(input)
		{
		case ADD:
			AddContact(&con);
			break;
		case DEL:
			Delcontact(&con);
			break;
		case SEARCH:
			SearchContact(&con);
			break;
		case MODIFY:
			ModIFYcontact(&con);
			break;
		case SHOW:
			ShowContact(&con);
			break;
		case SORT:
			break;
		case EXIT:
			printf("�˳�ͨѶ¼\n");
		default:
			printf("ѡ�����\n");
			break;
		}
		}
		while(input);
	return 0;
}