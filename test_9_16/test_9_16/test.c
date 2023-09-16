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

int main()
{
	int arr[10] = { 1,2,3,4,5,1,2,3,4,6 };
	return 0;
}