#define _CRT_SECURE_NO_WARNINGS 1

#include "contact.h"

void InitContact(struct Contact* ps)
{
	memset(ps->data, 0, sizeof(ps->data));
	ps->size = 0;
}

void AddContact(struct Contact* ps)
{
	if (ps->size == MAX)
	{
		printf("ͨѶ¼����,�޷����\n");
	}
	else
	{
		printf("��������ϵ�˵�����:>");
		scanf("%s", ps->data[ps->size].name);
		printf("��������ϵ�˵�����:>");
		scanf("%d", &(ps->data[ps->size].age));
		printf("��������ϵ�˵��Ա�:>");
		scanf("%s", ps->data[ps->size].sex);
		printf("��������ϵ�˵ĵ绰:>");
		scanf("%s", ps->data[ps->size].tele);
		printf("��������ϵ�˵ĵ�ַ:>");
		scanf("%s", ps->data[ps->size].addr);

		ps->size++;
		printf("������\n");
	}
}

void ShowContact(const struct Contact* ps)
{
	int i = 0;
	printf("%-10s\t%-4s\t%-5s\t%-12s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
	for (i = 0; i < ps->size; i++)
	{
		printf("%-10s\t%-4d\t%-5s\t%-12s\t%-20s\n",
			ps->data[i].name,
			ps->data[i].age,
			ps->data[i].sex,
			ps->data[i].tele,
			ps->data[i].addr
			);
	}
}

static int Findbyname(const struct Contact* ps,char name[MAX_NAME])
{
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		if (0 == strcmp(ps->data[i].name, name))
		{
			return i;
		}
	}
	return -1;
}


void DelContact(struct Contact* ps)
{
	char name[MAX_NAME];
	printf("������Ҫɾ����ϵ�˵�����:>");
	scanf("%s", name);
	int Pos = Findbyname(ps, name);
	if (-1 == Pos)
	{
		printf("Ҫɾ������ϵ�˲�����\n");
	}
	else
	{
		int j = 0;
		for (j = Pos; j < ps->size-1; j++)
		{
			ps->data[j] = ps->data[j + 1];
		}
		ps->size--;
		printf("ɾ���ɹ�\n");
	}
}

void SearchContact(const struct Contact* ps)
{
	char name[MAX_NAME];
	printf("������Ҫ������ϵ�˵�����:>");
	scanf("%s", name);
	int Pos = Findbyname(ps, name);
	if (Pos == -1)
	{
		printf("Ҫ���ҵ���ϵ�˲�����\n");
	}
	else
	{
		printf("%-10s\t%-4s\t%-5s\t%-12s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
		printf("%-10s\t%-4d\t%-5s\t%-12s\t%-20s\n",
			ps->data[Pos].name,
			ps->data[Pos].age,
			ps->data[Pos].sex,
			ps->data[Pos].tele,
			ps->data[Pos].addr
		);
	}
}

void ModifyContact(struct Contact* ps)
{
	char name[MAX_NAME];
	printf("������Ҫ�޸���ϵ�˵�����:>");
	scanf("%s", name);
	int pos = Findbyname(ps, name);
	if (pos == -1)
	{
		printf("Ҫ�޸ĵ���ϵ�˲�����\n");
	}
	else
	{
		printf("��������ϵ�˵�����:>");
		scanf("%s", ps->data[pos].name);
		printf("��������ϵ�˵�����:>");
		scanf("%d", &(ps->data[pos].age));
		printf("��������ϵ�˵��Ա�:>");
		scanf("%s", ps->data[pos].sex);
		printf("��������ϵ�˵ĵ绰:>");
		scanf("%s", ps->data[pos].tele);
		printf("��������ϵ�˵ĵ�ַ:>");
		scanf("%s", ps->data[pos].addr);

		printf("�޸����\n");
	}
}

void SortContact(struct Contact* ps)
{
	int i = 0;
	for (i = 0; i < ps->size - 1; i++)
	{
		int j = 0;
		for (j = 0; j < ps->size - 1 - i; j++)
		{
			if (strcmp(ps->data[j].name, ps->data[j + 1].name) > 0)
			{
				struct PeoInfo tmp;
				memmove(&tmp, &(ps->data[j]), sizeof(ps->data[j]));
				ps->data[j] = ps->data[j + 1];
				ps->data[j + 1] = tmp;
			}
		}
	}
}
