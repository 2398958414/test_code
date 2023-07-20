#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//void print(int m)
//{
//	int i = 0;
//	printf("奇数位:\n");
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (m >> i) & 1);
//	}
//	printf("\n");
//	printf("偶数位:\n");
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ", (m >> i) & 1);
//	}
//	printf("\n");
//}
//
//int main()
//{
//	int m = 0;
//	scanf("%d", &m);
//	print(m);
//	return 0;
//}

//void print(int* arr,int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(arr + i));
//	}
//}
//
//int main()
//{
//	int arr[] = { 2,1,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr,sz);
//	return 0;
//}

//void print(int n)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%-2d*%d=%-3d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print(n);
//	return 0;
//}

//int my_strlen(char* str)
//{
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str + 1);
//	}
//	return 0;
//}
//
////void reverse_string(char* arr)
////{
////	int left = 0;
////	int right = my_strlen(arr) - 1;
////	while (left < right)
////	{
////		int tmp = arr[left];
////		arr[left] = arr[right];
////		arr[right] = tmp;
////		left++;
////		right--;
////	}
////}
//
//void reverse_string(char* arr)
//{
//	int left = 0;
//	int right = my_strlen(arr) - 1;
//	char tmp = arr[left];
//	arr[left] = arr[right];
//	arr[right] = '\0';
//	if (my_strlen(arr + 1)>=2)
//	{
//		reverse_string(arr + 1);
//	}
//	arr[right] = tmp;
//}
//
//int main()
//{
//	char arr[] = "abcdefg";
//	reverse_string(arr);
//	printf("%s", arr);
//	return 0;
//}

////DigitSum(1729)
////DigitSum(172)+1729%10
////DigitSum(17)+172%10+1729%10
////DigitSum(1)+17%10+172%10+1729%10
//int DigitSum(unsigned int n)
//{
//	if (n > 9)
//	{
//		return DigitSum(n / 10) + n % 10;
//	}
//	else
//	{
//		return n;
//	}
//}
//
//int main()
//{
//	unsigned int n = 0;
//	scanf("%d", &n);
//	int sum = DigitSum(n);
//	printf("%d", sum);
//	return 0;
//}

//double Pow(int n, int k)
//{
//	if (k > 0)
//	{
//		return n * Pow(n, k - 1);
//	}
//	else if(k==0)
//	{
//		return 1;
//	}
//	else
//	{
//		return (1.0 / Pow(n, -k));
//	}
//}
//
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n, &k);
//	double ret = Pow(n,k);
//	printf("%lf", ret);
//	return 0;
//}

//int Fib(int n)
//{
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return Fib(n - 1) + Fib(n - 2);
//	}
//}

int Fib(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	while (n > 2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	int num = Fib(n);
	printf("%d", num);
	return 0;
}