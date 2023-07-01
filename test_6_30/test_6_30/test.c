#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
//                 本质上是个指针
int binary_search (int arr[],int k,int sz)
{
	int left = 0;
	int right = sz - 1;
	while (left<=right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else
		{
			return mid;
		}
	}
	return -1;
}

int main()
{
	//二分查找
	//在一个有序数组中查找某个指定的数
	//如果找到了，返回这个数的下标，找不到返回-1
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 16;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int ret = binary_search(arr, k, sz);
	//                      传递的是数组arr首元素的地址
	if (ret == -1)
	{
		printf("找不到这个数\n");
	}
	else
		printf("找到了，下标是:%d\n", ret);
	return 0;
}

//int is_leap_year(int n)
//{
//	if ((n % 4 == 0) && (n % 100 != 0) || (n % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//
//int main()
//{
//	//生成1000-2000的年份
//	int i = 0;
//	int count = 0;
//	for (i = 1000; i <= 2000; i++)
//	{
//		//判断i是否为闰年
//		if (is_leap_year(i) == 1)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount = %d", count);
//	return 0;
//}

//是素数返回1，不是素数返回0
//int is_prime(int n)
//{
//	int j = 0;
//	for (j = 2; j <= sqrt(n); j++)
//	{
//		if (n % j == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//
//int main()
//{
//	//打印100-200的数
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//判断i是否为素数
//		if (is_prime(i) == 1)
//			printf("%d ", i);
//	}
//	return 0;
//}

//void sushu(int* x)
//{
//	int i = 0;
//	for (i = 2; i <= sqrt(*x); i++)
//	{
//		if (*x % i == 0)
//		{
//			break;
//		}
//	}
//	if (i > sqrt(*x))
//	{
//		printf("%d是个素数", *x);
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	sushu(&n);
//	return 0;
//}

//当实参传给形参时
//形参其实是实参的一份临时拷贝
//对形参的修改是不会改变实参的
//
//void Swap1(int x, int y)//err:不能完成任务
//{
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//}

//void Swap2(int* pa,int* pb)
//{
//	int tmp = 0;
//	tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//
//int main()
//{
//	int a = 20;
//	int b = 30;
//	printf("a = %d b = %d\n", a, b);
//	//调用Swap1函数 - 传值调用
//	/*Swap1(a, b);*/
//	//调用Swap2函数 - 传值调用
//	Swap2(&a, &b);
//	//int tmp = 0;
//	//tmp = a;
//	//a = b;
//	//b = tmp;
//	printf("a = %d b = %d", a, b);
//	return 0;
//}