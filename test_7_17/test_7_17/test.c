#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	//int* p = arr;
//	int* p = &arr[9];
//	//for (i = 0; i < sz; i++)
//	//{
//	//	printf("%d ", *p);
//	//	p=p+1;
//	//}
//
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", *p);
//		p -=2;
//	}
//	return 0;
//}

//int main()
//{
//	int ch = { 0 };
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//ָ��-ָ�룺�õ���ָ���ָ��֮��Ԫ�صĸ���
//	printf("%d", &arr[9] - &arr[0]);
//	printf("%d", &arr[9] - &ch[0]);//err - ��Ҫָ��ͬһ��ռ� 
//
//	return 0;
//}

//int my_strlen(char* str)
//{
//	char* start = str;
//	char* end = str;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - start;
//}
//int main()
//{
//	char arr[] = "hello";
//	int len = my_strlen(arr);
//	printf("%d", len);
//	return 0;
//}

//#define N_values 5
//int main()
//{
//	float arr[N_values];
//	float* vp;
//	for (vp = &arr[N_values]; vp > &arr[0];) 
//	{
//		*--vp = 0;
//	}
//	//��׼�涨 - ָ������Ԫ�ص�ָ�������ָ�����һ��Ԫ�غ�����ڴ�λ�õ�ָ��Ƚ�
//	//           ��������ָ���һ��Ԫ��֮ǰ���ڴ�λ�õ�ָ��Ƚ�
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p+i));
//	}
//
//	//for (i = 0; i < 10; i++)
//	//{
//	//	printf("%p  ======  %p\n", p + i, &arr[i]);
//	//}
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int * p = &a;
//	int* * pa = &p;//����ָ��
//	int** * ppa = &pa;
//	***ppa = 20;
//	printf("%d\n", ***ppa);
//	printf("%d\n", a);
//	return 0;
//}

int main()
{
	int a = 10;
	int b = 20;
	int c = 30;
	//int* pa = &a;
	//int* pb = &b;
	//int* pc = &c;
	//int arr[10];
	int* arr1[3] = { &a,&b,&c };//ָ������
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("%d ", *(arr1[i]));
	}
	return 0;
}