#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//void bubble_sort(int arr[],int sz)
//{
//	//ȷ��ð�����������
//	int i = 0;
//	for (i = 0; i < sz - 1;i++)
//	{
//		int flag = 1;//������һ��Ҫ����������Ѿ�����
//		//ÿһ��ð������
//		int j = 0;
//		for (j = 0; j < sz-1-i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;//������������ݲ���ȫ����
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int arr[] = { 10,9,8,7,6,5,4,3,2,1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//ð������
//	bubble_sort(arr,sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

int main()
{
	int arr[] = { 1,2,3,4,5,6,7 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	//1.sizeof(������) - ��������ʾ�������飻sizeof������������������������ݵĴ�С - �ֽ�
	//2.&������ - �����������������飻&������ȡ��������������ĵ�ַ
	printf("%p\n", arr);
	printf("%p\n", arr + 1);
	printf("%p\n", &arr[0]);
	printf("%p\n", &arr[0] + 1);
	printf("%p\n", &arr);
	printf("%p\n", &arr+1);
	//printf("%p\n", arr);
	//printf("%p\n", &arr[0]);
	//printf("%d", *arr);
	return 0;
}