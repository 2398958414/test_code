#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <assert.h>

//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//}
//
//int main()
//{
//	char* p = "abcdef";
//	int len = my_strlen(p);
//	printf("%d", len);
//	return 0;
//}

//char* my_strcpy(char* dest,const char* src)
//{
//	char* ret = dest;
//	assert(dest && src);
//	while (*dest++=*src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "bit";
//	printf("%s", my_strcpy(arr1, arr2));
//	return 0;
//}

//char* my_strcat(char* dest, const char* src)
//{
//	char* ret = dest;
//	assert(dest && src);
//	while (*dest)
//	{
//		dest++;
//	}
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr1[15] = "abcdef";
//	char arr2[] = "bit";
//	printf("%s", my_strcat(arr1, arr2));
//	return 0;
//}

//int my_strcmp(const char* str1,const char* str2)
//{
//	assert(str1 && str2);
//	while (*str1 == *str2)
//	{
//		if (!*str1)
//		{
//			return 0;
//		}
//		str1++;
//		str2++;
//	}
//	if (*str1 < *str2)
//		return -1;
//	else
//		return 1;
//}
//
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	int ret = my_strcmp(arr1, arr2);
//	printf("%d", ret);
//	return 0;
//}

//char* my_strncpy(char* dest,const char* src, size_t num)
//{
//	char* ret = dest;
//	assert(dest && src);
//	while (num&&(*dest++=*src++))
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
//int main()
//{
//	char arr1[] = "abcdefghi";
//	char arr2[] = "bit";
//	my_strncpy(arr1, arr2,2 );
//	return 0;
//}

//char* my_strncat(char* dest, const char* src, size_t num)
//{
//	char* ret = dest;
//	assert(dest && src);
//	while (*dest)
//	{
//		dest++;
//	}
//	while (num--)
//	{
//		if (!(*dest++ = *src++))
//			return ret;
//	}
//	*dest = '\0';
//	return ret;
//}
//
//int main()
//{
//	char arr1[20] = "abcdef\0xxxxxxxxx";
//	char arr2[] = "hello";
//	my_strncat(arr1, arr2, 4);
//	return 0;
//}

//char* my_strstr(const char* p1, const char* p2)
//{
//	char* s1 = NULL;
//	char* s2 = NULL;
//	char* cur = (char*)p1;
//	assert(p1 && p2);
//	if (!*p2)
//		return (char*)p1;
//	while (*cur)
//	{
//		s1 = cur;
//		s2 = (char*)p2;
//		while (*s1&&*s2 && (*s1 == *s2))
//		{
//			s1++;
//			s2++;
//		}
//		if (!*s2)
//		{
//			return cur;
//		}
//		cur++;
//	}
//	return NULL;
//}
//
//int main()
//{
//	char* p1 = "abbbcdef";
//	char* p2 = "bbc";
//	char* p = my_strstr(p1, p2);
//	if (p == NULL)
//		printf("ÕÒ²»µ½");
//	else
//		printf("%s", p);
//	return 0;
//}

//void my_memcpy(void* dest,const void* src, size_t num)
//{
//	assert(dest && src);
//	while (num--)
//	{
//		*(char*)dest = *(char*)src;
//		dest = (char*)dest + 1;
//		((char*)src)++;
//	}
//}
//int main()
//{
//	int arr1[20] = { 0 };
//	int arr2[] = { 1,2,3,4,5 };
//	my_memcpy(arr1, arr2,sizeof(arr2));
//	return 0;
//}

void my_memmove(void* dest,const void* src, size_t num)
{

	assert(dest && src);
	if (dest < src)
	{
		while (num--)
		{
			*(char*)dest = *(char*)src;
			dest = (char*)dest + 1;
			((char*)src)++;
		}
	}
	else
	{
		while (num--)
		{
			*((char*)dest + num) = *((char*)src + num);
		}
	}
}
int main()
{
	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
	my_memmove(arr1+8 , arr1+3, 20);
	return 0;
}