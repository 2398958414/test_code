#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	int arr[5];//arr是有5个元素的整型数组
//	int* parr1[10];//parr1是一个数组,数组有10个元素，每个元素的类型是int*,parr1是指针数组
//	int(*parr2)[10];//parr2是一个指针,指向的是一个数组,该数组有10个元素，每个元素的类型是int,parr2是数组指针
//	int(*parr3[10])[5];//parr3是一个数组,数组内有10个元素,每个元素的类型是数组指针
//	                   //该数组指针指向的数组内有5个元素,每个元素的类型是int
//	return 0;
//}

////void test1(int arr[3][5])
////{}
////void test2(int arr[][5])
////{}
////void test3(int arr[3][])//err
////{}
//
////void test4(int* arr)//err
////{}
////void test5(int** arr)//err
////{}
//void test6(int(*arr)[5])
//{}
//
//int main()
//{
//	int arr[3][5] = { 0 };
//	//test1(arr);
//	//test2(arr);
//	//test3(arr);
//
//	//test4(arr);
//	//test5(arr);
//	test6(arr);
//	return 0;
//}

//void test(int* p)
//{}
//int main()
//{
//	int a = 10;
//	int* pc = &a;
//	test(&a);
//	test(pc);
//	return 0;
//}

//void test(int** p)
//{}
//int main()
//{
//	int* p;
//	int** pc = &p;
//	test(&p);
//	test(pc);
//	int* arr[10];
//	test(arr);
//	return 0;
//}

//数组指针 - 指向数组的指针
//函数指针 - 指向函数的指针 - 存放函数的地址
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 15;
//
//	int arr[10] = { 0 };
//	int(*pa)[10] = &arr;
//	arr;
//
//	//&函数名 和 函数名 都是函数的地址
//
//	//printf("%p\n", Add);
//	//printf("%p\n", &Add);
//	int(*p)(int, int) = Add;
//	printf("%d", (*p)(2, 4));
//	return 0;
//}

//void Print(char* str)
//{
//	printf("%s", str);
//}
//int main()
//{
//	void (*pp)(char*) = Print;
//	(*pp)("abcdefg");
//	return 0;
//}

//(*(void(*)())0)()
//把0强制类型转换为:void(*)() - 函数指针类型,0就是一个函数的地址
//调用0地址处的该函数

//signal是一个函数声明
//signal的参数有2个,第1个是int.第二个是函数指针类型,该函数指针指向的函数参数是int,返回类型是void
//signal的返回类型是函数指针类型,该函数指针指向的函数参数是int,返回类型是void	
//void(*signal(int, void(*)(int)))(int);
//
////简化
//typedef void(*Pfun_t)(int);
//Pfun_t signal(int, Pfun_t);
//
//typedef unsigned int uint;

//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 15;
//	int(*p)(int, int) = Add;
//	printf("%d\n", p(2, 4));
//	printf("%d\n", Add(2, 4));	
//
//	printf("%d", (*p)(2, 4));
//	return 0;
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	//指针数组
//	//int* arr[10];
//	//需要一个数组,这个数组可以存放4个函数的地址 - 函数指针数组
//	int(*pa)(int, int) = Add;//Sub/Mul/Div
//	int(*parr[4])(int, int) = {Add,Sub,Mul,Div};
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d ",parr[i](2, 3));
//	}
//	return 0;
//}

char* my_strcpy(char* dest,const char* src)
{}
int main()
{
	char* (*pf)(char*, const char*) = my_strcpy;
	char* (*pfArr[4])(char*, const char*) = { my_strcpy ,my_strcpy, my_strcpy ,my_strcpy };
}