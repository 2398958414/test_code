#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//#define MAX 1000
#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TELE 12
#define MAX_ADDR 30
#define Default_sz 2
#define Default_cap 3

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

typedef struct PeoInfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
}PeoInfo;

//ͨѶ¼����
typedef struct Contact
{
	struct PeoInfo* data;
	int size;//��¼��ǰͨѶ¼���е�Ԫ�ظ���
	int capacity;//��ǰͨѶ¼���������
}Contact;

//��������
//��ʼ��ͨѶ¼�ĺ���
void InitContact(struct Contact* ps);

//���һ����Ϣ��ͨѶ¼
void AddContact(struct Contact* ps);

//��ӡͨѶ¼����Ϣ
void ShowContact(const struct Contact* ps);

//ɾ��ָ������ϵ��
void DelContact(struct Contact* ps);

//����ָ����ϵ�˵���Ϣ
void SearchContact(const struct Contact* ps);

//�޸�ָ����ϵ�˵���Ϣ
void ModifyContact(struct Contact* ps);

//ͨѶ¼����
void SortContact(struct Contact* ps);

void DestroyContact(Contact* ps);
