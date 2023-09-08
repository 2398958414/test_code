#define _CRT_SECURE_NO_WARNINGS 1

#include "contact.h"

void InitContact(struct Contact* ps)
{
	ps->data = (struct PeoInfo*)malloc(Default_cap * sizeof(struct PeoInfo));
	if (ps->data == NULL)
	{
		return;
	}
	ps->size = 0;
	ps->capacity = Default_cap;
	//将保存到文件中的通讯录信息加载到当前通讯录
	LoadContact(ps);
}

void CheckContact(struct Contact* ps);

void LoadContact(Contact* ps)
{
	PeoInfo tmp = { 0 };
	FILE* pfRead = fopen("contact.txt", "rb");
	if (pfRead == NULL)
	{
		printf("LoadContact::%s\n", strerror(errno));
		return;
	}
	while (fread(&tmp, sizeof(PeoInfo), 1, pfRead))
	{
		CheckContact(ps);
		ps->data[ps->size] = tmp;
		ps->size++;
	}
	fclose(pfRead);
	pfRead = NULL;
}

void CheckContact(struct Contact* ps)
{
	if (ps->size == ps->capacity)
	{
		struct PeoInfo* ptr = (struct PeoInfo* )realloc(ps->data, (ps->capacity + Default_sz) * sizeof(PeoInfo));
		if (ptr != NULL)
		{
			ps->data = ptr;
			ps->capacity += Default_sz;
			printf("增容成功\n");
		}
		else
		{
			printf("增容失败\n");
		}
	}
}

void AddContact(struct Contact* ps)
{
	//检查当前通讯录是否已满
	//1.如果满了,则增加空间
	//2.如果没满,啥事不干
	CheckContact(ps);

	printf("请输入名字:>");
	scanf("%s", ps->data[ps->size].name);
	printf("请输入年龄:>");
	scanf("%d", &(ps->data[ps->size].age));
	printf("请输入性别:>");
	scanf("%s", ps->data[ps->size].sex);
	printf("请输入电话:>");
	scanf("%s", ps->data[ps->size].tele);
	printf("请输入地址:>");
	scanf("%s", ps->data[ps->size].addr);

	ps->size++;
	printf("添加成功\n");
}

void ShowContact(const struct Contact* ps)
{
	if (ps->size==0)
	{
		printf("通讯录为空\n");
	}
	else
	{
		int i = 0;
		//标题
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n", "名字", "年龄", "性别", "电话", "地址");
		//数据
		for (i = 0; i < ps->size; i++)
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

int Find_by_name(const struct Contact* ps, char name[MAX_NAME])
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
	printf("请输入要删除人的名字:>");
	scanf("%s", name);
	//1.查找要删除的人在什么位置
	//找到返回下标,找不到返回-1
	int pos = Find_by_name(ps, name);
	//2.删除
	if (pos == -1)
	{
		printf("要删除的人不存在\n");
	}
	else
	{
		//删除联系人
		int j = 0;
		for (j = pos; j < ps->size-1; j++)
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
	printf("请输入要查找联系人的名字:>");
	scanf("%s", name);
	int pos = Find_by_name(ps, name);
	if (pos == -1)
	{
		printf("要查找的联系人不存在\n");
	}
	else
	{
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n", "名字", "年龄", "性别", "电话", "地址");
		printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20s\n",
				ps->data[pos].name,
				ps->data[pos].age,
				ps->data[pos].sex,
				ps->data[pos].tele,
				ps->data[pos].addr);

	}
}

void ModifyContact(struct Contact* ps)
{
	char name[MAX_NAME];
	printf("请输入要修改联系人的名字:>");
	scanf("%s", name);
	int pos = Find_by_name(ps, name);
	if (pos == -1)
	{
		printf("要修改的联系人不存在\n");
	}
	else
	{
		printf("请输入名字:>");
		scanf("%s", ps->data[pos].name);
		printf("请输入年龄:>");
		scanf("%d", &(ps->data[pos].age));
		printf("请输入性别:>");
		scanf("%s", ps->data[pos].sex);
		printf("请输入电话:>");
		scanf("%s", ps->data[pos].tele);
		printf("请输入地址:>");
		scanf("%s", ps->data[pos].addr);

		printf("修改成功\n");
	}
}

void SortContact(struct Contact* ps)
{
	if (ps->size == 0)
	{
		printf("通讯录为空,无法排序\n");
	}
	else
	{
		int i = 0;
		for (i = 0; i < ps->size - 1; i++)
		{
			int j = 0;
			for (j = 0; j < ps->size - 1 - i; j++)
			{
				if (strcmp(ps->data[j].name, ps->data[j + 1].name) > 0)
				{
					struct PeoInfo tmp ;
					memmove(&tmp, &(ps->data[j]), sizeof(ps->data[j]));
					ps->data[j] = ps->data[j + 1];
					ps->data[j + 1] = tmp;
				}
			}
		}
	}
}

void DestroyContact(Contact* ps)
{
	free(ps->data);
	ps->data = NULL;
}

void SaveContact(Contact* ps)
{
	FILE* pfWrite = fopen("contact.txt", "wb");
	if (pfWrite == NULL)
	{
		printf("SaveContact::%s\n", strerror(errno));
		return;
	}
	//写通讯录的数据到文件中
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		fwrite(&(ps->data[i]), sizeof(PeoInfo), 1, pfWrite);
	}
	fclose(pfWrite);
	pfWrite = NULL;
}