#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//int main()
//{
//	//int* p = (int*)malloc(40);
//	//if (p == NULL)
//	//{
//	//	return 0;
//	//}
//	//int* p2 = realloc(p, 80);
//	//if (p2 != NULL)
//	//{
//	//	p = p2;
//	//}
//
//	//free(p);
//	//p = NULL;
//
//	int* p = realloc(NULL, 40);//malloc(40)
//	return 0;
//}

//���������:
// 1.�������
//2.�����ڴ�й©������;
//str��ֵ���ݵķ�ʽ��p,p��GetMemory�������β�,ֻ�ں����ڲ���Ч
//��GetMemory���������Ժ�,��̬�����ڴ���δ�ͷ�,�����޷��ҵ�,���Ի�����ڴ�й©
//void GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

//����1
//void GetMemory(char** p)
//{
//	*p = (char*)malloc(100);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str);
//	strcpy(str, "hello world");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

//����2
//char* GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//	return p;
//}
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

//����ջ�ռ�ĵ�ַ����
//char* GetMemory(void)
//{
//	char p[] = "hello world";
//	return p;
//}
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory();
//	printf(str);
//}
//int main()
//{
//	Test();
//	return 0;
//}

//int* test()
//{
//	//static int a=10;//��̬��
//	int a = 10;//ջ��
//	return &a;
//}
//int main()
//{
//	int* p=test();
//	*p = 20;
//	return 0;
//}

//int* test()
//{
//	int* ptr = malloc(40);//����
//	return ptr;
//}
//int main()
//{
//	int* p = test();
//	return 0;
//}

//�����ͷŶ�̬���ٵ��ڴ�,�����ڴ�й©
//void GetMemory(char** p, int num)
//{
//	*p = (char*)malloc(num);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);
//	//�Ľ�
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	Test();
//	return 0;
//}

void Test(void)
{
	char* str = (char*)malloc(100);
	strcpy(str, "hello");
	free(str);//free�ͷ�strָ��Ŀռ��,�������str��ΪNULL
	//�Ľ�
	str = NULL;
	if (str != NULL)
	{
		strcpy(str, "world");
		printf(str);
	}
}
int main()
{
	Test();
	return 0;
}