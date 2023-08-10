#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <assert.h>

//char* my_strncpy(char* dest, const char* src, size_t num)
//{
//	char* ret = dest;
//	assert(dest && src);
//	while (num)
//	{
//		if (*src == '\0')
//		{
//			while (num)
//			{
//				*dest++ = '\0';
//				num--;
//			}
//			if (num == 0)
//				break;
//		}
//		
//		*dest++ = *src++;
//		num--;
//	}
//	return ret;
//}

//char* my_strncpy(char* dest,const char* src, size_t num)
//{
//	char* ret = dest;
//	assert(dest && src);
//	while (num &&(*dest++ = *src++))
//	{
//		num--;
//	}
//	if (num)
//	{
//		while (--num)
//		{
//			*dest++ = '\0';
//		}
//	}
//	return ret;
//}
//
//int main() 
//{
//	char arr1[10] = "abcdefgh";
//	char arr2[] = "bit";
//	my_strncpy(arr1, arr2, 6);
//	printf("%s", arr1);
//	return 0;
//}

char* my_strncat(char* dest, const char* src, size_t num)
{
	char* ret = dest;
	assert(dest && src);
	while (*dest)
	{
		dest++;
	}
	while (num&&(* dest++ = *src++))
	{
		num--;
	}
	if (num == 0)
	{
		*dest = '\0';
	}
	return ret;
}

int main()
{
	char arr1[20] = "hello";
	char arr2[] = "world";
	my_strncat(arr1, arr2, 3);
	return 0;
}