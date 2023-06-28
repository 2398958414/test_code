#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//在一个整型有序数组中查找具体的某个数；找到打印下标，找不到输出：找不到
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 11;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	int mid = 0;
//	while (left <= right)
//	{
//		mid = (left + right) / 2;
//		if (arr[mid] < k)
//			left = mid + 1;
//		else if (arr[mid] > k)
//			right = mid - 1;
//		else
//		{
//			printf("找到了,下标为：%d", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到");
//	}
//	return 0;
//}

//打印9*9乘法口诀表
//int main()
//{
//	int i = 0;
//	int j = 0;
//	//确定打印9行
//	for (i = 1; i <= 9; i++)
//	{
//		//打印一行
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//求10个整数中的最大值
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int max = arr[0];
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 1; i < sz; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("max = %d", max);
//	return 0;
//}

//计算1/1-1/2+1/3...1/99-1/100的值，打印出来
//int main()
//{
//	int i = 0;
//	int flag = 1;
//	double sum = 0.0;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag*1.0 / i;
//		flag = -flag;
//	}
//	printf("%lf", sum);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	double sum = 0;
//	double sum1 = 0;
//	double sum2 = 0;
//	for (i = 1; i <= 100; i += 2)
//	{
//		sum1 += 1.0 / i;
//	}
//	for (j = 2; j <= 100; j += 2)
//	{
//		sum2 += 1.0 / j;
//	}
//	sum = sum1 - sum2;
//	printf("%lf", sum);
//	return 0;
//}

//数一下1-100的所有整数中出现了多少个数字9
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//			count++;
//		if (i / 10 == 9)
//			count++;
//	}
//	printf("count = %d", count);
//	return 0;
//}

//打印100-200之间的素数
//#include <math.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//判断i是否为素数
//		//1.试除法
//		//产生2->i-1
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j >sqrt(i))
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount = %d", count);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i+=2)
//	{
//		//判断i是否为素数
//		//1.试除法
//		//产生2->i-1
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j > sqrt(i))
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount = %d", count);
//	return 0;
//}

//打印1000-2000之间的闰年
//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		//判断闰年的规则
//		//1.能被4整除并且不能被100整除
//		//2.能被400整除
//		//if (year % 4 == 0 && year % 100 != 0)
//		//{
//		//	printf("%d ", year);
//		//	count++;
//		//}
//		//else if (year % 400 == 0)
//		//{
//		//	printf("%d ", year);
//		//	count++;
//		//}
//		if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
//		{
//			printf("%d ", year);
//			count++;
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}

//给定两个数，求两数的最大公约数
//int main()
//{
//	int m = 18;
//	int n = 24;
//	int r = 0;
//	scanf("%d %d", &m, &n);
//	while (r = m % n)
//	{
//		//r = m % n;
//		m = n;
//		n = r;
//	}
//	printf("%d", n);
//	return 0;
//}

//打印1-100之间所有3的倍数的数字
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//			printf("%d ", i);
//	}
//	return 0;
//}

//将三个数从大到小输出
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	//算法实现
//	//a中放最大值
//	//b中次之
//	//c中放最小值
//	scanf("%d %d %d",&a,&b,&c);//1,2,3
//	if (a < b)
//	{
//		int tem = a;
//		a = b;
//		b = tem;
//	}
//	if (a < c)
//	{
//		int tem = a;
//		a = c;
//		c = tem;
//	}
//	if (b < c)
//	{
//		int tem = b;
//		b = c;
//		c = tem;
//	}
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}

int main()
{
	char password[20] = { 0 };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("请输入密码:>");
		scanf("%s", password);
		if (strcmp(password, "123456") == 0)
		{
			printf("登录成功\n");
			break;
		}
		else
		{
			printf("输入有误\n");
		}
	}
	if (i == 3)
		printf("退出程序");
	return 0;
}