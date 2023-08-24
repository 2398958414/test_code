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
enum sex
{
	//枚举的可能取值 - 常量
	Male,//0
	Female,//1
	Secret//2
};
enum color
{
	Red,
	Green=9,
	Blue
};

int main()
{
	enum sex s = Male;
	enum color c = Green;
	printf("%d %d %d\n", Male, Female, Secret);
	printf("%d %d %d", Red, Green, Blue);
	return 0;
}