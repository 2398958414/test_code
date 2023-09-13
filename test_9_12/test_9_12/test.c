#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//带有副作用的宏参数
//int main()
//{
//	int a = 10;
//	int b = a + 1;//1
//	int b = ++a;//2
//	return 0;
//}
//#define MAX(X, Y) (X)>(Y)?(X):(Y)
//int main()
//{
//	int a = 10;
//	int b = 11;
//	int max = MAX(a++, b++);
//	//int max = (a++)>(b++)?(a++):(b++)
//	printf("%d\n", max);//12
//	printf("%d\n", a);//11
//	printf("%d", b);//13
//	return 0;
//}

//函数
//int MAX(int x, int y)
//{
//	return (x > y ? x : y);
//}
//
//float MAX(float x, float y)
//{
//	return (x > y ? x : y);
//}
//
////宏
//#define Max(X,Y) (X)>(Y)?(X):(Y)
//
//int main()
//{
//	int a = 5;
//	int b = 10;
//	float c = 3.0f;
//	float d = 4.0f;
//	//函数调用的时候,会有函数调用和返回的开销
//	float max = MAX(c, d);
//	printf("%d\n", max);
//
//	//在预处理阶段就完成了替换
//	max = Max(c, d);
//	printf("%d\n", max);
//	return 0;
//}

//#define SIZEOF(type) sizeof(type)
//int main()
//{
//	int ret = SIZEOF(int);
//	//int ret = sizeof(int)
//	printf("%d", ret);
//	return 0;
//}

//#define MALLOC(num,type) (type*)malloc(num*sizeof(type))
//int main()
//{
//	int* p = (int*)malloc(10 * sizeof(int));
//	int* p = MALLOC(10, int);
//	return 0;
//}

//#define MAX 100
//int main()
//{
//	printf("MAX = %d", MAX);
//#undef MAX
//	printf("MAX = %d", MAX);
//	return 0;
//}

//#define DEBUG
//int main()
//{
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = 0;
//#ifdef DEBUG
//		printf("%d ", arr[i]);
//#endif
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = 0;
//#if 1-1
//		printf("%d ", arr[i]);
//#endif
//	}
//	return 0;
//}

//int main()
//{
//#if 1==2
//	printf("hehe");
//#elif 2==2
//	printf("haha");
//#else
//	printf("heihei");
//#endif
//	return 0;
//}

//#define DEBUG
int main()
{
//#if defined DEBUG
//	printf("hehe");
//#endif

//#ifdef DEBUG
//	printf("hehe");
//#endif

//#if !defined DEBUG
//	printf("hehe");
//#endif

#ifndef DEBUG
	printf("hehe");
#endif
}