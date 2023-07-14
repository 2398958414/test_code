#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <limits.h>
#include <stdlib.h>//system
#include <string.h>//strcmp

int main()
{
	char input[15] = { 0 };
	system("shutdown -s -t 60");
again:
	printf("请注意,你的电脑将于1分钟后关机,输入:我是猪,取消关机\n");
	scanf("%s", input);
	if (strcmp(input, "我是猪") == 0)
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}

////a^a=0
////0^a=a
////3^5^3=5
////3^3^5=5  
////异或满足交换律
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,1,2,3,4, };
//	int i = 0;
//	int ret = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		ret = ret ^ arr[i];
//	}
//	printf("只出现一次的数是:%d", ret);
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,1,2,3,4, };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		int count = 0;
//		//统计arr[i]在数组arr中出现的次数
//		int j = 0;
//		for (j = 0; j < sz; j++)
//		{
//			if (arr[i] == arr[j])
//			{
//				count++;
//			}
//		}
//		if (count == 1)
//		{
//			printf("只出现一次的数是：%d", arr[i]);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = 5;
//
//	printf("交换前: a=%d b=%d\n", a, b);
//
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//
//	printf("交换后: a=%d b=%d\n", a, b);
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = 5;
//	INT_MAX;//2147483647
//	printf("交换前: a=%d b=%d\n", a, b);
//	//溢出的问题
//	//int - 4个字节 - 32bit位
//	a = a + b;//a - 和;
//	b = a - b;//b得到原来的a
//	a = a - b;//a得到原来的b
//	printf("交换后: a=%d b=%d\n", a, b);
//	return 0;
//}

