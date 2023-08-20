#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf("%d %d", &n, &m);
//	int arr[10][10] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	//ÁÐ
//	for (i = 0; i < m; i++)
//	{
//		//ÐÐ
//		for (j = 0; j < n; j++)
//		{
//			printf("%d ", arr[j][i]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[10][10] = { 0 };
//	int i = 0;
//	int j = 0;
//	int ret = 0;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < i ; j++)
//		{
//			if (arr[i][j] != 0)
//			{
//				ret = 1;
//				goto end;
//			}
//		}
//	}
//	end:
//	if (ret == 0)
//		printf("Yes\n");
//	else
//		printf("No\n");
//	return 0;
//}

int main()
{
	int n = 0;
	scanf("%d", &n);
	int arr[50] = { 0 };
	int flag1 = 0;
	int flag2 = 0;
	int i = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
		if (i > 0)
		{
			if (arr[i] > arr[i - 1])
			{
				flag1 = 1;
			}
			else if (arr[i] < arr[i - 1])
			{
				flag2 = 1;
			}
			else
			{
				;
			}
		}
	}
	if (flag1 + flag2 <= 1)
		printf("sorted");
	else
		printf("unsorted");
	return 0;
}