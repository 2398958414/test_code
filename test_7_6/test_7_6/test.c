#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

int main()
{
	int arr1[][3] = { {1,2,3},{4,5},{6,7,8} };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 3; j++)
		{
			printf("&arr[%d][%d] = %p\n", i,j,&arr1[i][j]);
		}
	}
	return 0;
}

//int main()
//{
//	
//	//int arr[2][3] = { {1,2},{3,4} };
//	//char ch[3][4]
//	//int arr[] = { 1,2,3,4 };
//	int arr1[][3] = { {1,2,3},{4,5},{6,7,8} };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 3; j++)
//		{
//			printf("%d ", arr1[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("&arr[%d] = %p\n", i,&arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//		printf("%d ", arr[i]);
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abcdef";
//	int len = (int)strlen(arr1);
//	int i = 0;
//	for (i = 0; i < len; i++)
//		printf("%c ", arr1[i]);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3 };//����ȫ��ʼ����ʣ�µ�Ԫ��Ĭ��Ϊ0
//	char arr2[5] = { 'a',98 };
//	char arr1[5] = "ab";
//	char arr3[] = "abcdef";
//	printf("%d\n", (int)sizeof(arr3));
//	//sizeof �������arr3��ռ�ռ�Ĵ�С
//	//7��Ԫ�� - char ->7*1=7
//	printf("%d\n", (int)strlen(arr3));
//	//strlen ��������ַ������� - '\0'֮ǰ���ַ�����
//	//[a b c d e f \0]
//	//6
//	int n = 5;
//	char arr4[n];//err:������ҪΪ�������ʽ
//	return 0;
//}