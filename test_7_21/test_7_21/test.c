#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//void my_strcpy(char* dest, char* src)
//{
//	while (*src != '\0')
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = *src;
//}

//void my_strcpy(char* dest, char* src)
//{
//		while (*dest++ = *src++)
//		{
//			;
//		}
//}

//void my_strcpy(char* dest, char* src)
//{
//	if (dest != NULL && src != NULL)
//	{
//		while (*dest++ = *src++)
//		{
//			;
//		}
//	}
//}

//#include <assert.h>
//char* my_strcpy(char* dest, const char* src)
//{
//	char* ret = dest;
//	assert(dest != NULL);//断言
//	assert(src != NULL);
//	//将src指向的字符串拷贝到dest指向的空间，包括'\0'字符
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr1[] = "####################";
//	char arr2[] = "hello bit";
//	printf("%s\n", my_strcpy(arr1, arr2));
//	return 0;
//}

//int main()
//{
//	const int n = 10;
//	int* const p = &n;
//	//const放在指针变量*号的左边,修饰的是*p,不能通过p修改*p（num）的值
//	//const放在指针变量*号的右边时,修饰的是指针变量p本身,p不能被改变
//	*p = 20;
//	int m = 100;
//	p = &m;
//	printf("%d", n);
//	return 0;
//}

#include <assert.h>
int my_strlen(const char* str)
{
	assert(str != NULL);//保证指针的有效性
	while (*str != '\0')
	{
		return 1 + my_strlen(str + 1);
	}
	return 0;
}

int main()
{
	char arr[] = "abcdef";
	int len = my_strlen(arr);
	printf("%d", len);
	return 0;
}