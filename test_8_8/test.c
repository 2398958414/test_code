#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <assert.h>

//1.������
//2.�ݹ�
//3.ָ��-ָ��

//size_t == unsigned int

//int my_strlen(const char* str)
//{
//	assert(str != NULL);
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
//	int len = my_strlen("abcdef");
//	printf("%d\n", len);
//	////����ʾ��
//	////char arr[] = { 'a','b','c','d','e','f' };
//	////printf("%d", strlen(arr));
//	//      3         -         6 = -3(�޷�������
//	//if (my_strlen("abc") - my_strlen("abcdef") > 0)
//	//{
//	//	printf("hehe");
//	//}
//	//else
//	//{
//	//	printf("haha");
//	//}
//	//return 0;
//}

//#include <assert.h>
//char* my_strcpy(char* dest,const char* src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	char* ret = dest;
//	//����src��ָ����ַ�����destָ��Ŀռ�,����'\0'
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	//����Ŀ�Ŀռ����ʼ��ַ
//	return ret;
//}
//
int main()
{
	char arr1[] = "abcdef";
	char arr2[] = "bit";
	//����ʾ��
	//char* arr1 = "abcdef";
	// 
	//char arr2[] = { 'b','i','t' };
	printf("%s", my_strcpy(arr1, arr2));
	return 0;
}

//char* my_strcat(char* dest,const char* src)
//{
//	char* ret = dest;
//	assert(dest && src);
//	//1.�ҵ�Ŀ���ַ�����'\0'
//	while (*dest != '\0')
//	{
//		dest++;
//	}
//	//2.׷��
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//
//int main() 
//{
//	char arr1[20] = "hello";
//	char arr2[] = "world";
//	my_strcat(arr1, arr2);
//	printf("%s", arr1);
//	return 0;
//}


//vs2022
//> 1
//== 0
//< -1

//linux-gcc
//> >0
//== 0
//< <0
//int main()
//{
//	char* p1 = "abcdef";
//	char* p2 = "abqwer";
//	//int ret = strcmp(p1, p2);
//	//printf("%d", ret);
//	if (strcmp(p1, p2) >0)
//	{
//		printf("p1>p2");
//	}
//	else if (strcmp(p1, p2) == 0)
//	{
//		printf("p1=p2");
//	}
//	else if(strcmp(p1, p2)<0)
//	{
//		printf("p1 < p2");
//	}
//	return 0;
//}

//int my_strcmp(const char* str1,const char* str2)
//{
//	assert(str1 && str2);
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//		{
//			return 0;
//		}
//		str1++;
//		str2++;
//	}
//	if (*str1 > *str2)
//		return 1;
//	else
//		return -1;
//}
//
//int main()
//{
//	char* p1 = "abcdef";
//	char* p2 = "abcdef";
//	int ret = my_strcmp(p1, p2);
//	printf("%d", ret);
//}