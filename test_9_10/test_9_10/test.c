#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

extern int Add(int x, int y);

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = Add(a, b);
//	printf("%d", c);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	int c = Add(a, b);
//	printf("\nc=%d ", c);
//	return 0;
//}

//预定义符号

//int main()
//{
//	//printf("%s\n", __FILE__);
//	//printf("%d\n", __LINE__);
//	//printf("%s\n", __DATE__);
//	//printf("%s\n", __TIME__);
//
//	//写日志文件
//	int i = 0;
//	int arr[10] = { 0 };
//	FILE* pf = fopen("log.txt", "w");
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//		fprintf(pf, "file:%s line:%d date:%s time:%s %d\n", __FILE__, __LINE__, __DATE__, __TIME__, i);
//	}
//	fclose(pf);
//	pf = NULL;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

#define MAX 100
#define STR "Hello World"
#define reg register
#define do_forever for(;;)

//int main()
//{
//	do_forever;
//	//reg int a;
//	//int max = MAX;
//	//printf("%d\n", max);
//	//printf("%s", STR);
//	return 0;
//}

//定义宏
//#define SQUARE(X) (X)*(X)
//int main()
//{
//	//int ret = SQUARE(5);
//	//printf("%d", ret);
//
//	//int ret = SQUARE(5 + 1);
//	//printf("%d", ret);
//	return 0;
//}

//#define DOUBLE(X) ((X)+(X))
//int main()
//{
//	int a = 5;
//	int ret = 10 * DOUBLE(a);
//	printf("%d", ret);
//	return 0;
//}

//#define PRINT(X) printf("the value of "#X" is %d\n",X)
//int main()
//{
	//printf("hello world\n");
	//printf("hello " "world\n");
	//printf("hel" "lo " "world\n");
	// 
//	int a = 10;
//	int b = 20;
//	PRINT(a);
//	//printf("the value of" "a" "is %d\n", a)
//	PRINT(b);
//	return 0;
//}

#define CAT(X, Y) X##Y
int main()
{
	int Class20 = 2023;
	printf("%d", CAT(Class, 20));
	//printf("%d", Class20);
	return 0;
}