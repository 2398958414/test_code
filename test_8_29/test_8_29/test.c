#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//int main()
//{
//	//int* p = (int*)malloc(40);
//	//if (p == NULL)
//	//{
//	//	return 0;
//	//}
//	//int* p2 = realloc(p, 80);
//	//if (p2 != NULL)
//	//{
//	//	p = p2;
//	//}
//
//	//free(p);
//	//p = NULL;
//
//	int* p = realloc(NULL, 40);//malloc(40)
//	return 0;
//}

//代码的问题:
// 1.程序崩溃
//2.存在内存泄漏的问题;
//str以值传递的方式给p,p是GetMemory函数的形参,只在函数内部有效
//等GetMemory函数返回以后,动态开辟内存尚未释放,并且无法找到,所以会造成内存泄漏
//void GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

//改正1
//void GetMemory(char** p)
//{
//	*p = (char*)malloc(100);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str);
//	strcpy(str, "hello world");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

//改正2
//char* GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//	return p;
//}
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

//返回栈空间的地址问题
//char* GetMemory(void)
//{
//	char p[] = "hello world";
//	return p;
//}
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory();
//	printf(str);
//}
//int main()
//{
//	Test();
//	return 0;
//}

//int* test()
//{
//	//static int a=10;//静态区
//	int a = 10;//栈区
//	return &a;
//}
//int main()
//{
//	int* p=test();
//	*p = 20;
//	return 0;
//}

//int* test()
//{
//	int* ptr = malloc(40);//堆区
//	return ptr;
//}
//int main()
//{
//	int* p = test();
//	return 0;
//}

//忘记释放动态开辟的内存,导致内存泄漏
//void GetMemory(char** p, int num)
//{
//	*p = (char*)malloc(num);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);
//	//改进
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	Test();
//	return 0;
//}

void Test(void)
{
	char* str = (char*)malloc(100);
	strcpy(str, "hello");
	free(str);//free释放str指向的空间后,并不会把str置为NULL
	//改进
	str = NULL;
	if (str != NULL)
	{
		strcpy(str, "world");
		printf(str);
	}
}
int main()
{
	Test();
	return 0;
}