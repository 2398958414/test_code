#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//当全局变量和局部变量名字冲突时,局部变量优先
//int a = 1;
//void test()
//{
//	int a = 2;
//	a += 1;
//}
//int main()
//{
//	test();
//	printf("%d", a);
//	return 0;
//}

//C语言本身没有输入输出语句
//输入输出语句 - 标准库函数(是厂商根据标准创建,提供便利)


//int main()
//{
//	int x = 0;
//	int y = 0;
//	scanf("%d %d", &x, &y);
//	//求x,y的最小公倍数
//	int max = (x > y ? x : y);
//	while (1)
//	{
//		if (max % x == 0 && max % y == 0)
//		{
//			break;
//		}
//		max++;
//	}
//	//打印
//	printf("%d", max);
//	return 0;
//}

//int main()
//{
//	int x = 0;
//	int y = 0;
//	scanf("%d %d", &x, &y);
//	//求x,y的最小公倍数
//	int i = 1;
//	while (x * i % y)
//	{
//		i++;
//	}
//	//打印
//	printf("%d", x*i);
//	return 0;
//}

#include <string.h>
void reverse(char* left, char* right)
{
	while (left<right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}
int main()
{
	char arr[101] = { 0 };
	//输入
	gets(arr);
	int len = (int)strlen(arr);
	//逆序
	//1.逆序整体
	reverse(arr, arr + len - 1);
	//2.逆序每个单词
	char* start = arr;
	char* end = start;
	while (*start)
	{
		while (*end != ' '&&*end)
		{
			end++;
		}
		reverse(start, end - 1);
		if(*end)
			end++;
		start = end;
	}
	//输出
	printf("%s", arr);
	return 0;
}