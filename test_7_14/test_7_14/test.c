#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	char a = 1;
	printf("%u\n", sizeof(a));
	printf("%u\n", sizeof(+a));
	printf("%u\n", sizeof(!a));
	return 0;
}

//int main()
//{
//	char a = 3;
//	//00000000000000000000000000000011
//	//00000011 - a
//	char b = 127;
//	//00000000000000000000000001111111
//	//01111111 - b
//
//	//a和b如何相加
//	//整型提升:根据变量的数据类型的符号位决定
//	//00000000000000000000000000000011
//	//00000000000000000000000001111111
//
//	char c = a + b;
//	//00000000000000000000000010000010
//	//10000010 - c
//	//11111111111111111111111110000010 - 补码
//	//11111111111111111111111110000001 - 反码
//	//10000000000000000000000001111110 - 原码
//	//-126
//	printf("%d", c);
//	return 0;
//}

////创建一个结构体类型 - struct stu
//struct stu
//{
//	//成员变量
//	char name[20];
//	int age;
//	char id[20];
//};
//int main()
//{
//	int a = 0;
//	//使用struct stu类型创建了一个学生对象s1,并进行初始化
//	struct stu s1 = { "李四",18,"20230714" };
//	struct stu* ps = &s1;
//	printf("%s\n", ps->name);
//	printf("%d\n", ps->age);
//	//结构体指针->成员名
//
//	//printf("%s\n", (*ps).name);
//	//printf("%d\n", (*ps).age);
//
//	//printf("%s\n", s1.name);
//	//printf("%d\n", s1.age);
//	//printf("%s\n", s1.id);
//	//结构体变量.成员名
//	return 0;
//}

//int get_max(int x, int y)
//{
//	return x > y ? x : y;
//}
//
//int main()
//{
//	int a = 30;
//	int b = 20;
//	//调用函数时的()是函数调用操作符
//	int max = get_max(a, b);
//	printf("max = %d", max);
//	return 0;
//}

//int main()
//{
//	int a[10] = { 0 };
//	a[4] = 10;//[] - 下标引用操作符;2个操作数 - 数组名+索引号
//	return 0;
//}

//int main()
//{
//	int a = 20;
//	int b = 30;
//	int max = 0;
//	if (a > b)
//		max = a;
//	else
//		max = b;
//	max = (a > b ? a : b);
//
//	//if (a > 5)
//	//	b = 3;
//	//else
//	//	b = -3;
//
//	//b=(a > 5 ? 3 : -3);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	//printf("%d\n", ++a);
//	printf("%d\n", a++);
//	printf("%d", a);
//	return 0;
//}