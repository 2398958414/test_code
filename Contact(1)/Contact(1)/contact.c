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
		printf("通讯录已满,无法添加\n");
	}
	else
	{
		printf("请输入联系人的名字:>");
		scanf("%s", ps->data[ps->size].name);
		printf("请输入联系人的年龄:>");
		scanf("%d", &(ps->data[ps->size].age));
		printf("请输入联系人的性别:>");
		scanf("%s", ps->data[ps->size].sex);
		printf("请输入联系人的电话:>");
		scanf("%s", ps->data[ps->size].tele);
		printf("请输入联系人的地址:>");
		scanf("%s", ps->data[ps->size].addr);

		ps->size++;
		printf("添加完成\n");
	}
}

void ShowContact(const struct Contact* ps)
{
	int i = 0;
	printf("%-10s\t%-4s\t%-5s\t%-12s\t%-20s\n", "姓名", "年龄", "性别", "电话", "地址");
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
	printf("请输入要删除联系人的姓名:>");
	scanf("%s", name);
	int Pos = Findbyname(ps, name);
	if (-1 == Pos)
	{
		printf("要删除的联系人不存在\n");
	}
	else
	{
		int j = 0;
		for (j = Pos; j < ps->size-1; j++)
		{
			ps->data[j] = ps->data[j + 1];
		}
		ps->size--;
		printf("删除成功\n");
	}
}

void SearchContact(const struct Contact* ps)
{
	char name[MAX_NAME];
	printf("请输入要查找联系人的姓名:>");
	scanf("%s", name);
	int Pos = Findbyname(ps, name);
	if (Pos == -1)
	{
		printf("要查找的联系人不存在\n");
	}
	else
	{
		printf("%-10s\t%-4s\t%-5s\t%-12s\t%-20s\n", "姓名", "年龄", "性别", "电话", "地址");
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
	printf("请输入要修改联系人的姓名:>");
	scanf("%s", name);
	int pos = Findbyname(ps, name);
	if (pos == -1)
	{
		printf("要修改的联系人不存在\n");
	}
	else
	{
		printf("请输入联系人的名字:>");
		scanf("%s", ps->data[pos].name);
		printf("请输入联系人的年龄:>");
		scanf("%d", &(ps->data[pos].age));
		printf("请输入联系人的性别:>");
		scanf("%s", ps->data[pos].sex);
		printf("请输入联系人的电话:>");
		scanf("%s", ps->data[pos].tele);
		printf("请输入联系人的地址:>");
		scanf("%s", ps->data[pos].addr);

		printf("修改完成\n");
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
