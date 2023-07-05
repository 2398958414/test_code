#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include "add.h"
#include <string.h>

//描述第n个斐波那契数
//int Fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}

int Fib(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	while (n > 2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}
int main()
{
	int n = 0;
	int ret = 0;
	scanf("%d", &n);
	ret = Fib(n);
	printf("%d", ret);
	return 0;
}

//int fac1(int n)
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}

//int fac2(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * fac2(n - 1);
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	//循环的方式
//	//int ret = fac1(n);
//	//递归的方式
//	int ret = fac2(n);
//	printf("%d", ret);
//	return 0;
//}

//int my_strlen(char* st)
//{
//	int count = 0;
//	while (*st != '\0')
//	{
//		count++;
//		st++;
//	}
//	return count;
//}

////递归的方式
////把大事化小
////my_strlen("bit")
////1+my_strlen("it")
////1+1+my_strlen("t")
////1+1+1+my_strlen("")
////1+1+1+0
////3
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//}
//int main()
//{
//	char arr[] = "bit";
//	//int len = strlen(arr);
//	//printf("%d", len);
//	
//	//模拟实现了一个strlen函数
//	int len = my_strlen(arr);
//	printf("len = %d\n", len);
//	return 0;
//}

//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);//1234
//	//递归
//	print(num);
//	//（123）4
//	//（12）3 4
//	//（1）2 3 4
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 30;
//	int sum = Add(a, b);
//	printf("%d", sum);
//	return 0;
//}