#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

//int main()
//{
//	//数组名是首元素地址
//	//1.sizeof(数组名) - 数组名表示整个数组
//	//2.&数组名 - 数组名表示整个数组
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
//	////strlen(地址)
//	//printf("%d\n", strlen(arr));//随机值
//	//printf("%d\n", strlen(arr + 0));//随机值
//	////printf("%d\n", strlen(*arr));//err:'a' - 97
//	////printf("%d\n", strlen(arr[1]));//err
//	//printf("%d\n", strlen(&arr));//随机值
//	//printf("%d\n", strlen(&arr + 1));//随机值-6
//	//printf("%d\n", strlen(&arr[0] + 1));//随机值-1
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
//	//printf("%d\n", strlen(&arr));//6 数组的地址 - 数组指针 - char(*p)[7]=&arr ; my_strlen(const char* str)
//	//printf("%d\n", strlen(&arr + 1));//随机值
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
//	//printf("%d\n", strlen(&p));//随机值
//	//printf("%d\n", strlen(&p + 1));//随机值
//	//printf("%d\n", strlen(&p[0] + 1));//5
//
//	int a[3][4] = { 0 };
//	//printf("%p\n", &a[0][0]);
//	//printf("%p\n", a[0] + 1);
//	//printf("%p\n", a + 1);
//	//printf("%p\n", &a[0] + 1);
//
//	printf("%d\n", sizeof(a));//48 - 整个数组的大小
//	printf("%d\n", sizeof(a[0][0]));//4 - 第1行第1个元素的大小
//	printf("%d\n", sizeof(a[0]));//16 - 第1行数组的大小
//	printf("%d\n", sizeof(a[0] + 1));//4/8 - 第1行第2个元素的地址
//	printf("%d\n", sizeof(*(a[0] + 1)));//4 
//	printf("%d\n", sizeof(a + 1));//4/8 - 第2行的地址
//	printf("%d\n", sizeof(*(a + 1)));//16 
//	printf("%d\n", sizeof(&a[0] + 1));//4/8 - 第2行的地址
//	printf("%d\n", sizeof(*(&a[0] + 1)));//16 - 第2行数组的大小
//	printf("%d\n", sizeof(*a));//16 - 第1行的大小
//	printf("%d\n", sizeof(a[3]));//16 sizeof(),括号内的表达式不参数真实运算
//	//告诉这是一个数组名,它的类型是4个整型的一维数组,实际不会去访问!!!
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
////假设p 的值为0x100000。 如下表表达式的值分别为多少？
////已知，结构体Test类型的变量大小是20个字节
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
//	int a[3][2] = { (0, 1), (2, 3), (4, 5) };//逗号表达式
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