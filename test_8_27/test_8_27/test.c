#define _CRT_SECURE_NO_WARNINGS 1

#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <stdio.h>

//int main()
//{
//	//向内存申请10个整型的空间
//	int* p = (int*)malloc(10 * sizeof(int));
//	if (p == NULL)
//	{
//		//打印错误原因
//		printf("%s", strerror(errno));
//	}
//	else
//	{
//		//正常使用空间
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	//当动态申请的空间不再使用时
//	//就应该还给操作系统
//	free(p);
//	p = NULL;
//	return 0;
//}

//int main()
//{
//	//malloc(10*sizeof(int))
//	int* p = (int*)calloc(10, sizeof(int));
//	if (p == NULL)
//	{
//		printf("%s", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	//释放空间
//	//free函数是用来释放动态开辟的空间
//	free(p);
//	p = NULL;
//	return 0;
//}

//realloc
//用来调整动态开辟的内存空间的大小
//int main()
//{
//	int* p = malloc(20);
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		*(p + i) = i;
//	}
//
//	//realloc使用的注意事项:
//	//1.如果p指向的空间之后有足够的内存空间可以追加,则直接追加,后返回p
//	//2.如果p指向的空间之后没有足够的内存空间可以追加,则realloc函数会重新找一块新的内存区域
//	//开辟一块满足需求的空间,并把原来的数据拷贝回来,释放旧的内存空间,最后返回新开辟的内存空间地址
//	//3.得用一个新的变量来接收realloc函数的返回值
//
//	int* ptr = realloc(p, 40);
//	if (ptr == NULL)
//	{
//		printf("%s", strerror(errno));
//	}
//	else
//	{
//		p = ptr;
//		for (i = 5; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//}

int main()
{
	//1.对NULL进行解引用操作
	//解决方法:需对p进行相关的判断
	//int* p = (int*)malloc(40);
	////万一malloc创建失败,p被赋值为NULL
	//*p = 0;//err
	// 
	//free(p);
	//p = NULL; 

	//2.对动态开辟空间的越界访问
	//int* p = (int*)malloc(5 * sizeof(int));
	//if (p == NULL)
	//{
	//	return 0;
	//}
	//else
	//{
	//	int i = 0;
	//	for (i = 0; i < 10; i++)
	//	{
	//		*(p + i) = i;
	//	}
	//}
	// 
	//free(p);
	//p = NULL;

	//3.对非动态开辟内存使用free释放
	//int a = 10;
	//int* p = &a;
	//*p = 20;

	//free(p);
	//p = NULL;
	//return 0;

	//4.使用free释放动态开辟内存的一部分
	//int* p = malloc(40);
	//if (p == NULL)
	//{
	//	return 0;
	//}
	//int i = 0;
	//for (i = 0; i < 10; i++)
	//{
	//	*p++ = i;
	//}

	//free(p);
	//p = NULL;

	//5.对同一块动态内存进行多次释放
	//int* p = malloc(40);
	//if (p == NULL)
	//{
	//	return 0;
	//}
	////使用
	////释放
	//free(p);
	////....
	////解决办法:将p置为NULL
	//p = NULL;
	//free(p);

	//6.动态开辟内存忘记释放(内存泄漏)
	//while (1)
	//{
	//	malloc(1);
	//}
	return 0;
}