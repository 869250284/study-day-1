#define _CRT_SECURE_NO_WARNINGS 1
#include"contact.h"
void InitContact(struct Contact * ps)
{
	memset(ps->data,0,sizeof(ps->data));
	ps->size=0;//����ͨѶ¼���ֻ��0��Ԫ��
}
void AddContact(struct Contact *ps)
{
	if(ps->size==MAX)
	{
		printf("ͨѶ¼����,�޷�����\n");
	}
	else
	{
		printf("���������֣�>");
		scanf("%s",ps->data[ps->size].name);
		printf("���������䣺>");
		scanf("%d",&(ps->data[ps->size].age));
		printf("�������Ա�>");
		scanf("%s",ps->data[ps->size].sex);
		printf("������绰��>");
		scanf("%s",ps->data[ps->size].tele);
		printf("�������ַ��>");
		scanf("%s",ps->data[ps->size].addr);
		printf("���ӳɹ�\n");
			ps->size++;
		
	}
}
void ShowContact(const struct Contact *ps)
{
	if(ps->size==0)
	{
		printf("ͨѶ¼Ϊ��\n");
	}
	else
	{
		int i =0;
		printf("%-20s\t %-4s\t %-5s\t %-12s\t %-20s\n","����","����","�Ա�","�绰","��ַ");
		for(i=0;i<ps->size;i++)
		{
			printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20s\n",
				ps->data[i].name,
				ps->data[i].age,
				ps->data[i].sex,
				ps->data[i].tele,
				ps->data[i].addr);
		}
	}
}
 static int FinaByName(const struct Contact *ps,char name[MAX_NAME])
{
	int i =0;
	for(i=0;i<ps->size;i++)
	{
		if(0==strcmp(ps->data[i].name,name))
		{
			return i;
		}
	}
	return -1;
}
void Delcontact(struct Contact *ps)
{
	int pos;
	char name[MAX_NAME];
	printf("������Ҫɾ���˵�����:>\n");
	scanf("%s",&name);
	//1.������ɾ���˵�λ��
	 pos=FinaByName(ps,name);
	//�ҵ��˷����������ڵ�Ԫ���±� �Ҳ�������-1
	if(pos==-1)
	{
		printf("Ҫɾ�����˲�����:>\n");
	}
	else
	{
		//ɾ������
		int j=0;
		for(j=pos;j<ps->size-1;j++)
		{
			ps->data[j]=ps->data[j+1];
		}
		ps->size--;
		printf("ɾ���ɹ�:>\n");
	}
}
void SearchContact(const struct Contact *ps)
{
	int pos;
	char name[MAX_NAME];
	printf("������Ҫ�����˵�����:>\n");
	scanf("%s",&name);
	 pos=FinaByName(ps,name);
	if(pos==-1)
	{
		printf("Ҫ���ҵ��˲�����:>\n");
	}
	else
	{
		printf("%-20s\t %-4s\t %-5s\t %-12s\t %-20s\n","����","����","�Ա�","�绰","��ַ");
		printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20s\n",
		ps->data[pos].name,
		ps->data[pos].age,
		ps->data[pos].sex,
	    ps->data[pos].tele,
		ps->data[pos].addr);}
}
void ModIFYcontact(struct Contact *ps)
{
	int pos;
	char name[MAX_NAME];
	printf("������Ҫ�޸���ϵ�˵�����:>\n");
	scanf("%s",&name);
	 pos=FinaByName(ps,name);
	if(pos==-1)
	{
	printf("Ҫ�޸��˵���Ϣ������:>\n");
	}
	else
	{
		printf("���������֣�>");
		scanf("%s",ps->data[pos].name);
		printf("���������䣺>");
		scanf("%d",&(ps->data[pos].age));
		printf("�������Ա�>");
		scanf("%s",ps->data[pos].sex);
		printf("������绰��>");
		scanf("%s",ps->data[pos].tele);
		printf("�������ַ��>");
		scanf("%s",ps->data[pos].addr);
		printf("�޸����:>\n");
	}
}