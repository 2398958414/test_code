#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

////指针类型决定了:指针进行解引用操作时，能够访问空间的大小
////int* p - 能够访问4个字节
////char* p - 能够访问1个字节
////double* p - 能够访问8个字节
//int main()
//{
//	int a = 0x11223344;
//	//int* pa = &a;
//	//*pa = 0;
//	//printf("%p\n", pc);
//	char* pc = &a;
//	*pc = 0;
//	printf("%p\n", pc);
//	return 0;
//}

////指针类型决定了:指针走一步走多远（指针的步长）
////int* p ; p+1 -> 4
////char* p ; p+1 -> 1
////double* p ; p+1 -> 8
//int main()
//{
//	int a = 0x00112233;
//	int* pa = &a;
//	char* pb = &a;
//	printf("%p\n", pa);
//	printf("%p\n", pa+1);
//	printf("%p\n", pb);
//	printf("%p\n", pb+1);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;
//	}
//	return 0;
//}


////野指针
// 
//int main()
//{
//	int a;//局部变量不初始化,默认是随机值
//	int* p;//局部的指针变量,就被初始化随机值
//	*p = 20;
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 12; i++)
//	{
//		//当指针指向的范围超过数组arr的范围,p就是野指针
//		*(p + i) = 1;
//	}
//	return 0;
//}

////指针指向的空间释放
//int* test()
//{
//	int a = 10;
//	return &a;
//}
//int main()
//{
//	int* p = test();
//	*p = 20;
//	return 0;
//}

int main()
{
	int a = 10;
	int* p = &a;//初始化
	int* pa = NULL;//NULL - 用来初始化指针，给指针赋值

	*p = 20;
	//当不用这个指针时
	p = NULL;

	if(p!=NULL)
	{

	}
	return 0;
}