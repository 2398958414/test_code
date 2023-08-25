#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//struct S
//{
//	char a;
//	int s;
//	double d;
//};
//
//void Init(struct S* ps)
//{
//	ps->a = 'w';
//	ps->s = 50;
//	ps->d = 3.1415;
//}
//
//void print1(struct S tmp)
//{
//	printf("%c %d %lf\n", tmp.a, tmp.s, tmp.d);
//}
//void print2(const struct S* ps)
//{
//	printf("%c %d %lf\n", ps->a, ps->s, ps->d);
//}
//
//int main()
//{
//	struct S s = { 0 };
//	Init(&s);
//	print1(s);
//	print2(&s);
//	return 0;
//}

//位段 - 二进制位
//struct S
//{
//	int a : 2;
//	int b : 5;
//	int c : 10;
//	int d : 30;
//};
////47bit - 6个字节*8 = 48bit
//
//int main()
//{
//	printf("%d", (int)sizeof(struct S));
//}

//struct S
//{
//	char a : 3;
//	char b : 4;
//	char c : 5;
//	char d : 4;
//};
//
//int main()
//{
//	struct S s = { 0 };
//
//	s.a = 10;
//	s.b = 20;
//	s.c = 3;
//	s.d = 4;
//
//	return 0;
//}

//枚举类型
//enum sex
//{
//	//枚举的可能取值 - 常量
//	Male,//0
//	Female,//1
//	Secret//2
//};
//enum color
//{
//	Red,
//	Green=9,
//	Blue
//};
//
//int main()
//{
//	enum sex s = Male;
//	enum color c = Green;
//	printf("%d %d %d\n", Male, Female, Secret);
//	printf("%d %d %d", Red, Green, Blue);
//	return 0;
//}

//联合 - 联合体 - 共用体
//union Un
//{
//	char c;
//	int i;
//};
//
//int main()
//{
//	union Un u;
//	printf("%d\n", (int)sizeof(u));
//	
//	printf("%p\n", &u);
//	printf("%p\n", &(u.c));
//	printf("%p\n", &(u.i));
//	return 0;
//}

//int check_sys()
//{
//	int a = 1;
//	//返回1,小端存储
//	//返回0,大端存储
//	return *(char*)&a;
//}

//int check_sys()
//{
//	union Un
//	{
//		char c;
//		int i;
//	}u;
//	u.i = 1;
//	//返回1,小端存储
//	//返回0,大端存储
//	return u.c;
//}
//
//int main()
//{
//	int ret = check_sys();
//	if (ret == 1)
//	{
//		printf("小端");
//	}
//	else
//	{
//		printf("大端");
//	}
//	return 0;
//}

union Un
{
	int a;//4
	char arr[5];//5  1 8 1
};
int main()
{
	union Un u;
	printf("%d", (int)sizeof(u));
	return 0;
}