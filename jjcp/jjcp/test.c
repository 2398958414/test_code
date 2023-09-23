#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <math.h>

//#define  INT_PTR int*
//typedef int* int_ptr;
//
//INT_PTR a, b;//a的类型是int*,b的类型是int
//int_ptr c, d;//c,d的类型都是指针类型

//10101010101010101010101010101010
//10110011010110100011110010100011 
//01010101010101010101010101010101

//#define SWAP_bit(n) (((n & 0x55555555)<<1)+((n&0xaaaaaaaa)>>1))
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d", SWAP_bit(n));
//	return 0;
//}

//10000000000000000000000000000011
//11111111111111111111111111111100
//11111111111111111111111111111101

//00000000000000000000000000000010

//11111111111111111111111111111111
//11111111111111111111111111111110
//10000000000000000000000000000001


//00000000000000000000000000010101

//00000000000000000000000000100000
//00000000000000000000000000011111

//00000000000000000000000000001010


//int Find_Fib(int x)
//{
//	int a = 0;
//	int b = 1;
//	int c = 0;
//	while (1)
//	{
//		if (c == x)
//		{
//			return 0;
//		}
//		else if (c > x)
//		{
//			return (x - b) < (c - x) ? (x - b) : (c - x);
//		}
//		a = b;
//		b = c;
//		c = a + b;
//	}
//	
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Find_Fib(n);
//	printf("%d", ret);
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int a = 0;
//	int b = 1;
//	int c = 0;
//	while (1)
//	{
//		if (b == n)
//		{
//			printf("0");
//			break;
//		}
//		else if (n < b)
//		{
//			if (abs(a - n) < abs(b - n))
//			{
//				printf("%d", abs(a - n));
//			}
//			else
//			{
//				printf("%d", abs(b - n));
//			}
//			break;
//		}
//		c = a + b;
//		a = b;
//		b = c;
//	}
//	return 0;
//}

#include <assert.h>

void replace_space(char* str)
{
	assert(str);
	int space_count = 0;
	char* cur = str;
	while (*cur)
	{
		if (*cur = ' ')
		{
			space_count++;
		}
		cur++;
	}
	char* end=cur--;
	char* t_end = end + 2 * space_count;
	while (end!=t_end)
	{
		if (*end != ' ')
		{
			*t_end-- = *end--;
		}
		else
		{
			end--;
			*t_end-- = '0';
			*t_end-- = '2';
			*t_end-- = '%';
		}
	}
}

int main()
{
	char arr[1024] = { 0 };
	gets(arr);
	replace_space(arr);
	printf("%s", arr);
	return 0;
}