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
//	assert(dest != NULL);//����
//	assert(src != NULL);
//	//��srcָ����ַ���������destָ��Ŀռ䣬����'\0'�ַ�
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
//	//const����ָ�����*�ŵ����,���ε���*p,����ͨ��p�޸�*p��num����ֵ
//	//const����ָ�����*�ŵ��ұ�ʱ,���ε���ָ�����p����,p���ܱ��ı�
//	*p = 20;
//	int m = 100;
//	p = &m;
//	printf("%d", n);
//	return 0;
//}

#include <assert.h>
int my_strlen(const char* str)
{
	assert(str != NULL);//��ָ֤�����Ч��
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