#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <stdlib.h>

//char* my_strncpy(char* dest,const char* src,int num)
//{
//	assert(dest && src);
//	char* ret = dest;
//	while (num&& (*dest++ = *src++))
//	{
//		num--;
//	}
//	if (num)
//	{
//		while (--num)
//		{
//			*dest = '\0';
//		}
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr1[20] = "abcdefghi";
//	char arr2[] = "hello";
//	my_strncpy(arr1, arr2, 3);
//	return 0;
//}

//char* my_strncat(char* dest, const char* src, int num)
//{
//	assert(dest && src);
//	char* ret = dest;
//	while (*dest++)
//	{
//
//	}
//	dest--;
//	while (num--)
//	{
//		if (!(*dest++ = *src++) )
//		{
//			return ret;
//		}
//	}
//	*dest = '\0';
//	return ret;
//}
//
//int main()
//{
//	char arr1[20] = "abcdef\0xxxxxxxxx";
//	char arr2[] = "ghi";
//	strncat(arr1, arr2, 2);
//	return 0;
//}

//1,2,3,4,5,1,2,3,4,6
//1,2,3,4,5,1,2,3,4,
// 
//1 1 3 3 5
//2 2 4 4 6
// 
//5^6
//101
//110
//011
// 
//5 - A 1 1 3 3
//6 - B 2 2 4 4
//分组
//1.全部数字异或
//2.找出异或结果中第几位为1,假设为n
//3.以第n位位0分一组,第n位为1的分一组
//void find_single_dog(int arr[], int sz, int* pd1, int* pd2)
//{
//	int i = 0;
//	int ret = 0;
//	//异或
//	for (i = 0; i < sz; i++)
//	{
//		ret ^= arr[i];
//	}
//	//找出异或结果中第几位为1
//	int pos = 0;
//	for (pos = 0; pos < 32; pos++)
//	{
//		if (((ret >> pos) & 1) == 1)
//		{
//			break;
//		}
//	}
//	for (i = 0; i < sz; i++)
//	{
//		if (((arr[i] >> pos) & 1) == 1)
//		{
//			*pd1 ^= arr[i];
//		}
//		else
//		{
//			*pd2 ^= arr[i];
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,1,2,3,4,6 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int dog1 = 0;
//	int dog2 = 0;
//	find_single_dog(arr, sz, &dog1, &dog2);
//	printf("%d %d", dog1, dog2);
//
//	return 0;
//}

#include <assert.h>
#include <ctype.h>
#include <limits.h>
//1.空指针
//2.空字符串
//3.空格
//4.+ -
//5.越界
//6.非数字字符

enum Status
{
	VALID,
	INVALID
}sta=INVALID;
int my_atoi(const char* str)
{
	assert(str);
	if (!*str)
	{
		return 0;//非法0
	}
	while (isspace(*str))
	{
		str++;
	}
	int flag = 1;
	if (*str == '+')
	{
		flag = 1;
		str++;
	}
	else if (*str == '-')
	{
		flag = -1;
		str++;
	}
	long long ret = 0;
	while (*str)
	{
		//越界
		if (isdigit(*str))
		{
			ret = ret * 10 + flag * (*str - '0');
			if (ret > INT_MAX || ret < INT_MIN)
			{
				return 0;
			}
		}
		else
		{
			return (int)ret;
		}
		str++;
	}
	if (!*str)
		sta = VALID;
	return (int)ret;
}

int main()
{
	char arr[] = "123465";
	//ret=ret*10+1
	//1
	int ret = my_atoi(arr);
	if (sta == INVALID)
	{
		printf("非法返回:%d\n", ret);
	}
	else
	{
		printf("合法返回:%d\n", ret);
	}
	return 0;
}

//int main()
//{
//	char a[] = "-100";
//	char b[] = "123";
//	int n = 0;
//	n = my_atoi(a)+my_atoi(b);
//	printf("n=%d", n);
//	return 0;
//}