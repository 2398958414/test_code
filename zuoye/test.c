#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <math.h>

//int main()
//{
//	int num = 0;
//	int ret = 0;
//	scanf("%d", &num);
//	int input = num;
//	int output = num;
//	int count = 0;
//	while (input % 10)
//	{
//		count++;
//		input /= 10;
//	}
//	int i = 0;
//	for (i = 0; i < count; i++)
//	{
//		ret = num % 10;
//		if (ret % 2 == 1)
//		{
//			output -= (int)((ret - 1)*pow(10,i));
//		}
//		else
//		{
//			output -= (int)(ret * pow(10, i));
//		}
//		num /= 10;
//	}
//	printf("%d", output);
//	return 0;
//}

//int main()
//{
//	int input = 0;
//	scanf("%d", &input);
//	int sum = 0;
//	int i = 0;
//	while (input)
//	{
//		int bit = input % 10;
//		if (bit % 2 == 1)
//		{
//			bit = 1;
//		}
//		else
//		{
//			bit = 0;
//		}
//		sum += bit * pow(10, i++);
//		input /= 10;
//	}
//	return 0;
//}

//int main()
//{
//	int input = 0;
//	while (scanf("%d", &input) == 1)
//	{
//		int i = 0;
//		for (i = 0; i < input; i++)
//		{
//			//打印空格
//			int j = 0;
//			for (j = 0; j < 2 * (input - (i + 1)); j++)
//			{
//				printf(" ");
//			}
//			//打印*和空格
//			for (j = 0; j < i + 1; j++)
//			{
//				printf("*");
//				printf(" ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int input = 0;
//	while (scanf("%d", &input) == 1)
//	{
//		int i = 0;
//		int j = 0;
//		for (i = 0; i < input; i++)
//		{
//			for (j = 0; j < input; j++)
//			{
//				if (i + j < input - 1)
//				{
//					printf("  ");
//				}
//				else
//				{
//					printf("* ");
//				}
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}

//int main()
//{
//	//输入
//	double price = 0.0;
//	int m = 0;
//	int d = 0;
//	int z = 0;
//	scanf("%lf %d %d %d", &price, &m, &d, &z);
//	//计算
//	if (m == 11 && d == 11)
//	{
//		price = price * 0.7 - z * 50;
//	}
//	else if (m == 12 && d == 12)
//	{
//		price = price * 0.8 - z * 50;
//	}
//	//结果
//	if (price < 0)
//	{
//		printf("%.2lf", 0.0);
//	}
//	else
//	{
//		printf("%.2lf", price);
//	}
//	return 0;
//}

//int main()
//{
//	//char -128~127
//	//unsigned char 0~255
//	unsigned char a = 200;
//	//00000000000000000000000011001000
//	//11001000 - a 截断
//	unsigned char b = 100;
//	//00000000000000000000000001100100
//	//01100100 - b 截断
//	unsigned char c = 0;
//	c = a + b;
//	//整型提升
//	//00000000000000000000000011001000
//	//00000000000000000000000001100100
//	//00000000000000000000000100101100
//	//00101100 - c 截断
//	//00000000000000000000000000101100
//	printf("%d %d", a + b, c);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	for (a = 1; a <= 5; a++)
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <= 5; e++)
//					{
//						if (((b == 2) + (a == 3) == 1)
//							&& ((b == 2) + (e == 4) == 1)
//							&& ((c == 1) + (d == 2) == 1)
//							&& ((c == 5) + (d == 3) == 1)
//							&& ((e == 4) + (a == 1) == 1))
//						{
//							if(a*b*c*d*e==120)
//								printf("a=%d b=%d c=%d d=%d e=%d\n", a, b, c, d, e);
//						}
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int killer = 0;
//	for (killer = 'a'; killer <= 'd'; killer++)
//	{
//		//判断
//		if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd') == 3)
//		{
//			printf("%c", killer);
//		}
//	}
//	return 0;
//}

int main()
{
	int arr[10][10] = { 0 };
	int i = 0;
	int j = 0;
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= i; j++)
		{
			if (j == 0)
			{
				arr[i][j] = 1;
			}
			if (i == j)
			{
				arr[i][j] = 1;
			}
			if (i >= 2 && j >= 1)
			{
				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
			}
		}
	}
	for (i = 0; i < 10; i++)
	{
		int j = 0;
		for (j = 0; j < 9-i; j++)
		{
			printf(" ");
		}
		for (j = 0; j <= i; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}