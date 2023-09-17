#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <assert.h>

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

//int main()
//{
//	int arr[] = { 1,2,3,4,5,1,2,3,4,7 };
//	int arr_s[10] = { 0 };
//	int arr_d[10] = { 0 };
//	int pos_s = 0;
//	int pos_d = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = 0;
//	int ret_s = 0;
//	int ret_d= 0;
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		ret ^= arr[i];
//	}
//	for (i = 0; i < 32; i++)
//	{
//		if (((ret >> i) & 1) == 1)
//		{
//			break;
//		}
//		count++;
//	}
//	for (i = 0; i < sz; i++)
//	{
//		if ((arr[i] & (1 << count)) == 1 << count)
//		{
//			arr_s[pos_s] = arr[i];
//			pos_s++;
//		}
//		else
//		{
//			arr_d[pos_d] = arr[i];
//			pos_d++;
//		}
//	}
//	for (i = 0; i < sz; i++)
//	{
//		ret_s ^= arr_s[i];
//	}
//	printf("%d ", ret_s);
//	for (i = 0; i < sz; i++)
//	{
//		ret_d ^= arr_d[i];
//	}
//	printf("%d ", ret_d);
//	return 0;
//}

int main()
{
	int arr[] = { 1,2,3,4,5,1,2,3,4,6,7 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	return 0;
}