#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

//struct S
//{
//	int n;
//	int arr[];//未知大小
//};

//struct S
//{
//	int n;
//	int arr[0];//未知大小 - 柔性数组成员 - 数组的大小是可以调整的
//};

//int main()
//{
//	//struct S s;
//	//printf("%d", (int)sizeof(s));
//	struct S* ps = (struct S* )malloc(sizeof(struct S) + 5 * sizeof(int));
//	ps->n = 100;
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		ps->arr[i] = i;
//	}
//	//调整大小
//	struct S* ptr = realloc(ps, 44);
//	if (ptr != NULL)
//	{
//		ps = ptr;
//		int i = 0;
//		for (i = 5; i < 10; i++)
//		{
//			ps->arr[i] = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", ps->arr[i]);
//		}
//	}
//	//释放
//	free(ps);
//	ps = NULL;
//	return 0;
//}

struct S
{
	int n;
	int* arr;
};
int main()
{
	struct S* ps = (struct S*)malloc(sizeof(struct S));
	ps->arr = (int* )malloc(5 * sizeof(int));
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		ps->arr[i] = i;
	}
	//调整大小
	int* ptr = realloc(ps->arr, 10 * sizeof(int));
	if (ptr != NULL)
	{
		ps->arr = ptr;
		for (i = 5; i < 10; i++)
		{
			ps->arr[i] = i;
		}
		for (i = 0; i < 10; i++)
		{
			printf("%d ", ps->arr[i]);
		}
	}
	//释放
	free(ps->arr);
	ps->arr = NULL;
	free(ps);
	ps = NULL;
	return 0;
}