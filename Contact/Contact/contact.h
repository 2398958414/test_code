#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

#define MAX 1000
#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TELE 12
#define MAX_ADDR 30

enum Option
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	SORT
};

struct PeoInfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
};

//通讯录类型
struct Contact
{
	struct PeoInfo data[MAX];
	int size;//记录当前通讯录已有的元素个数
};

//函数声明
//初始化通讯录的函数
void InitContact(struct Contact* ps);

//添加一个信息到通讯录
void AddContact(struct Contact* ps);

//打印通讯录的信息
void ShowContact(const struct Contact* ps);

//删除指定的联系人
void DelContact(struct Contact* ps);

//查找指定联系人的信息
void SearchContact(const struct Contact* ps);

//修改指定联系人的信息
void ModifyContact(struct Contact* ps);

//通讯录排序
void SortContact(struct Contact* ps);

