#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

//int main()
//{
//	//����������Ԫ�ص�ַ
//	//1.sizeof(������) - ��������ʾ��������
//	//2.&������ - ��������ʾ��������
//	//int a[] = { 1,2,3,4 };
//	//printf("%d\n", sizeof(a));//16
//	//printf("%d\n", sizeof(a + 0));//4/8
//	//printf("%d\n", sizeof(*a));//4
//	//printf("%d\n", sizeof(a + 1));//4/8
//	//printf("%d\n", sizeof(a[1]));//4
//	//printf("%d\n", sizeof(&a));//4/8
//	//printf("%d\n", sizeof(*&a));//16
//	//printf("%d\n", sizeof(&a + 1));//4/8
//	//printf("%d\n", sizeof(&a[0]));//4/8
//	//printf("%d\n", sizeof(&a[0] + 1));//4/8
//
//	//char arr[] = { 'a','b','c','d','e','f' };
//	////printf("%d\n", sizeof(arr));//6
//	////printf("%d\n", sizeof(arr + 0));//4/8
//	////printf("%d\n", sizeof(*arr));//1
//	////printf("%d\n", sizeof(arr[1]));//1
//	////printf("%d\n", sizeof(&arr));//4/8
//	////printf("%d\n", sizeof(&arr + 1));//4/8
//	////printf("%d\n", sizeof(&arr[0] + 1));//4/8
//
//	////strlen(��ַ)
//	//printf("%d\n", strlen(arr));//���ֵ
//	//printf("%d\n", strlen(arr + 0));//���ֵ
//	////printf("%d\n", strlen(*arr));//err:'a' - 97
//	////printf("%d\n", strlen(arr[1]));//err
//	//printf("%d\n", strlen(&arr));//���ֵ
//	//printf("%d\n", strlen(&arr + 1));//���ֵ-6
//	//printf("%d\n", strlen(&arr[0] + 1));//���ֵ-1
//
//	//char arr[] = "abcdef";
//	////printf("%d\n", sizeof(arr));//7
//	////printf("%d\n", sizeof(arr + 0));//4/8
//	////printf("%d\n", sizeof(*arr));//1
//	////printf("%d\n", sizeof(arr[1]));//1
//	////printf("%d\n", sizeof(&arr));//4/8
//	////printf("%d\n", sizeof(&arr + 1));//4/8
//	////printf("%d\n", sizeof(&arr[0] + 1));//4/8
//
//	//printf("%d\n", strlen(arr));//6
//	//printf("%d\n", strlen(arr + 0));//6
//	//printf("%d\n", strlen(*arr));//err
//	//printf("%d\n", strlen(arr[1]));//err
//	//printf("%d\n", strlen(&arr));//6 ����ĵ�ַ - ����ָ�� - char(*p)[7]=&arr ; my_strlen(const char* str)
//	//printf("%d\n", strlen(&arr + 1));//���ֵ
//	//printf("%d\n", strlen(&arr[0] + 1));//5
//
//	//char* p = "abcdef";
//	////printf("%d\n", sizeof(p));//4/8
//	////printf("%d\n", sizeof(p + 1));//4/8
//	////printf("%d\n", sizeof(*p));//1
//	////printf("%d\n", sizeof(p[0]));//1 int arr[10];arr[0] == *(arr+0)  p[0] == *(p+0) == 'a'
//	////printf("%d\n", sizeof(&p));//4/8
//	////printf("%d\n", sizeof(&p + 1));//4/8
//	////printf("%d\n", sizeof(&p[0] + 1));//4/8
//	// 
//	//printf("%d\n", strlen(p));//6
//	//printf("%d\n", strlen(p + 1));//5
//	////printf("%d\n", strlen(*p));//err
//	////printf("%d\n", strlen(p[0]));//err
//	//printf("%d\n", strlen(&p));//���ֵ
//	//printf("%d\n", strlen(&p + 1));//���ֵ
//	//printf("%d\n", strlen(&p[0] + 1));//5
//
//	int a[3][4] = { 0 };
//	//printf("%p\n", &a[0][0]);
//	//printf("%p\n", a[0] + 1);
//	//printf("%p\n", a + 1);
//	//printf("%p\n", &a[0] + 1);
//
//	printf("%d\n", sizeof(a));//48 - ��������Ĵ�С
//	printf("%d\n", sizeof(a[0][0]));//4 - ��1�е�1��Ԫ�صĴ�С
//	printf("%d\n", sizeof(a[0]));//16 - ��1������Ĵ�С
//	printf("%d\n", sizeof(a[0] + 1));//4/8 - ��1�е�2��Ԫ�صĵ�ַ
//	printf("%d\n", sizeof(*(a[0] + 1)));//4 
//	printf("%d\n", sizeof(a + 1));//4/8 - ��2�еĵ�ַ
//	printf("%d\n", sizeof(*(a + 1)));//16 
//	printf("%d\n", sizeof(&a[0] + 1));//4/8 - ��2�еĵ�ַ
//	printf("%d\n", sizeof(*(&a[0] + 1)));//16 - ��2������Ĵ�С
//	printf("%d\n", sizeof(*a));//16 - ��1�еĴ�С
//	printf("%d\n", sizeof(a[3]));//16 sizeof(),�����ڵı���ʽ��������ʵ����
//	//��������һ��������,����������4�����͵�һά����,ʵ�ʲ���ȥ����!!!
//	return 0;
//}

//int main()
//{
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int* ptr = (int*)(&a + 1);
//	printf("%d,%d", *(a + 1), *(ptr - 1));
//	return 0;
//}

//struct Test
//{
//	int Num;
//	char* pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}*p;
////����p ��ֵΪ0x100000�� ���±�����ʽ��ֵ�ֱ�Ϊ���٣�
////��֪���ṹ��Test���͵ı�����С��20���ֽ�
//int main()
//{
//	printf("%p\n", p + 0x1);
//	printf("%p\n", (unsigned long)p + 0x1);
//	printf("%p\n", (unsigned int*)p + 0x1);
//	return 0;
//}

//int main()
//{
//	int a[4] = { 1, 2, 3, 4 };
//	int* ptr1 = (int*)(&a + 1);
//	int* ptr2 = (int*)((int)a + 1);
//	printf("%x,%x", ptr1[-1], *ptr2);
//	return 0;
//}

//int main()
//{
//	int a[3][2] = { (0, 1), (2, 3), (4, 5) };//���ű���ʽ
//	int* p;
//	p = a[0];
//	printf("%d", p[0]);
//	return 0;
//}

//int main()
//{
//	int a[5][5];
//	int(*p)[4];
//	p = a;
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//	return 0;
//}

//int main()
//{
//	int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int* ptr1 = (int*)(&aa + 1);
//	int* ptr2 = (int*)(*(aa + 1));
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));
//	return 0;
//}

//int main()
//{
//	char* a[] = { "work","at","alibaba" };
//	char** pa = a;
//	pa++;
//	printf("%s\n", *pa);
//	return 0;
//}

int main()
{
	char* c[] = { "ENTER","NEW","POINT","FIRST" };
	char** cp[] = { c + 3,c + 2,c + 1,c };
	char*** cpp = cp;
	printf("%s\n", **++cpp);
	printf("%s\n", *-- * ++cpp + 3);
	printf("%s\n", *cpp[-2] + 3);
	printf("%s\n", cpp[-1][-1] + 1);
	return 0;
}