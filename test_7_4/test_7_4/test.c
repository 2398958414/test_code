#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include "add.h"

void print(int n)
{
	if (n > 9)
	{
		print(n / 10);
	}
	printf("%d ", n % 10);
}

int main()
{
	int num = 0;
	scanf("%d", &num);//1234
	//µÝ¹é
	print(num);
	//£¨123£©4
	//£¨12£©3 4
	//£¨1£©2 3 4
	return 0;
}

//int main()
//{
//	int a = 10;
//	int b = 30;
//	int sum = Add(a, b);
//	printf("%d", sum);
//	return 0;
//}