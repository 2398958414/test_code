#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//struct - 结构体关键字; stu - 结构体标签; struct stu - 结构体类型
//struct stu
//{
//	//成员变量
//	char name[10];
//	short age;
//	char tele[12];
//	char sex[5];
//}s1,s2,s3;//s1,s2,s3是三个全局的结构体变量

//typedef struct stu
//{
//	//成员变量
//	char name[10];
//	short age;
//	char tele[12];
//	char sex[5];
//}stu;
//
//
//int main()
//{
//	struct stu s1;//局部的结构体变量
//	stu s2;
//	return 0;
//}

//struct S
//{
//	short a;
//	char b;
//	char arr[15];
//	double c;
//};
//
//struct T
//{
//	int ch;
//	struct S s;
//	char* pc;
//};
//
//int main()
//{
//	char arr[] = "hello sztu";
//	struct T t = { 10,{1,'w',"hello world",1.747},arr };
//	printf("%d\n", t.ch);
//	printf("%s\n", t.s.arr);
//	printf("%s\n", t.pc);
//	printf("%lf\n", t.s.c);
//	return 0;
//}

//typedef struct stu
//{
//	//成员变量
//	char name[10];
//	short age;
//	char tele[12];
//	char sex[5];
//}stu;
//
//void print1(stu tmp)
//{
//	printf("name:%s\n", tmp.name);
//	printf("age: %d\n", tmp.age);
//	printf("tele:%s\n", tmp.tele);
//	printf("sex: %s\n", tmp.sex);
//}
//
//void print2(stu* ch)
//{
//	printf("name:%s\n", ch->name);
//	printf("age: %d\n", ch->age);
//	printf("tele:%s\n", ch->tele);
//	printf("sex: %s\n", ch->sex);
//}
//
//int main()
//{
//	stu s = { "张三",20,"12345678954","男" };
//	print1(s);
//	print2(&s);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d ", i);
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", 10-i);
//	}
//	return 0;
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = Add(a, b);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//	}
//	return 0;
//}

//void test2()
//{
//	printf("hehe!\n");
//}
//void test1()
//{
//	test2();
//}
//void test()
//{
//	test1();
//}
//int main()
//{
//	test();
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int sum = 0;
//	int ret = 1;
//	int n = 0;
//	scanf("%d", &n);
//	for ( i = 1; i <= n; i++)
//	{
//		int j = 0;
//		ret=1;
//		for (j = 1; j <= i; j++)
//		{
//			ret *= j;
//		}
//		sum += ret;
//	}
//	printf("%d ", sum);
//	return 0;
//}

int main()
{
	int i = 0;
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	for (i = 0; i <= 12; i++)
	{
		printf("hehe\n");
		arr[i] = 0;
	}
	return 0;
}