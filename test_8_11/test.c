#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <assert.h>

//strstr - 查找字符串

//char* my_strstr(const char* p1, const char* p2)
//{
//	const char* s1 = p1;
//	const char* s2 = p2;
//	const char* cur = p1;
//	assert(p1 && p2);
//	if (*p2 == '\0')
//	{
//		return p1;
//	}
//	while (*cur)
//	{
//		s1 = cur;
//		s2 = p2;
//		while ((*s1!='\0')&&(*s2 != '\0') && (*s1 == *s2))
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
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
//	char* p1 = "abcdef";
//	char* p2 = "def";
//	char* ret = my_strstr(p1, p2);//返回第一次出现的地址
//	if (ret == NULL)
//	{
//		printf("子串不存在");
//	}
//	else
//	{
//		printf("%s", ret);
//	}
//}

char* my_strstr(const char* p1, const char* p2)
{
	char* s1 = NULL;
	char* s2 = NULL;
	char* cur = (char*)p1;
	assert(p1 && p2);
	if (*p2=='\0')
	{
		return (char*)p1;
	}
	while (*cur)
	{
		s1 = cur;
		s2 = (char*)p2;
		while (*s1&&*s2  && (*s1 == *s2))
		{
			s1++;
			s2++;
		}
		if (*s2=='\0')
		{
			return cur;
		}
		cur++;
	}
	return NULL;
}

int main()
{
	char* p1 = "abbbcdef";
	char* p2 = "bbc";
	char* ret = my_strstr(p1, p2);
	if (ret == NULL)
	{
		printf("子串不存在");
	}
	else
	{
		printf("%s", ret);
	}
	return 0;
}