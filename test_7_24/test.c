#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	char arr[] = "abcdef";
//	char* pc = arr;
//	printf("%s\n", arr);
//	printf("%s\n", pc);
//	return 0;
//}

//int main()
//{
//	const char* p = "abcdef";//"abcdef"��һ�������ַ���
//	//*p = 'w';
//	//printf("%c\n", *p);
//	printf("%s\n",p );
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	const char* p1 = "abcdef";
//	const char* p2= "abcdef";
//	if (p1 == p2)
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//
//	//if (arr1 == arr2)
//	//{
//	//	printf("hehe\n");
//	//}
//	//else
//	//{
//	//	printf("haha\n");
//	//}
//	return 0;
//}


//ָ������:������,�������ָ���
//int main()
//{
//	int arr[10] = { 0 };//��������
//	char ch[5] = { 0 };//�ַ�����
//	int* parr[10];//�������ָ������� - ָ������
//	char* pch[5];//����ַ�ָ������� - ָ������
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int* p[3] = { &a,&b,&c };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d ", *p[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//	int* parr[] = { arr1,arr2,arr3 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", *(parr[i] + j));
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int* p = NULL;//����ָ�� - ָ�����͵�ָ�� - ����������͵ĵ�ַ
//	char* pc = NULL;//�ַ�ָ��- ָ���ַ���ָ�� - ��������ַ��ĵ�ַ
//	//����ָ�� - ָ�������ָ�� - �����������ĵ�ַ
//	int arr[10] = { 0 };
//	//arr - ��Ԫ�ص�ַ
//	//&arr[0] - ��Ԫ�ص�ַ
//	//&arr - ����ĵ�ַ
//
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*parr)[10] = &arr1;//parr������ָ��
//	return 0;
//}

//int main()
//{
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr1;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//
//	//int(*parr)[10] = &arr1;
//	//int i = 0;
//	//for (i = 0; i < 10; i++)
//	//{
//	//	printf("%d ", *(*parr+i));//*parr == arr1
//	//}
//
//	//for (i = 0; i < 10; i++)
//	//{
//	//	printf("%d ", (*parr)[i]);
//	//}
//	return 0;
//	
//}

//�������������ʽ
//void print1(int arr[3][5], int x, int y)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
////������ָ�����ʽ
//void print2(int(*p)[5], int x, int y)
//{
//	int i = 0;
//	for (i = 0; i < x; i++)
//	{
//		int j = 0;
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", p[i][j]);
//			//printf("%d ", *(p[i] + j));
//			//printf("%d ", *(*(p + i) + j));
//			//printf("%d ", (*(p + i))[j]);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	//print1(arr, 3, 5);
//	print2(arr, 3, 5);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", p[i]);
//		printf("%d ", *(p + i));
//		printf("%d ", *(arr + i));
//		printf("%d ", arr[i]);//arr[i] == *(arr+i) == *(p+i) == p[i]
//	}
//	return 0;
//}