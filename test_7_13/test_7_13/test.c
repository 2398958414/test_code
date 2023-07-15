#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

int main()
{
	int a = 11;
	a = a | (1 << 2);//15
	printf("%d\n", a);
	a = a & (~(1 << 2)); 11;
	printf("%d", a);
	//00000000000000000000000000001011
	//00000000000000000000000000000100
	//1<<2
	//00000000000000000000000000000001
	// 
	//00000000000000000000000000001111
	//11111111111111111111111111111011
	//00000000000000000000000000000100
	//00000000000000000000000000001011
	// 
	//int a = 0;
	//printf("%d", ~a);
	////00000000000000000000000000000000
	////11111111111111111111111111111111 - 补码
	////11111111111111111111111111111110 - 反码
	////10000000000000000000000000000001 - 原码
	return 0;
}

//int main()
//{
//	short a = 0;
//	int b = 10;
//	printf("%d\n", sizeof(a = b + 10));
//	printf("%d", a);
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c' };
//	printf("%d\n", sizeof(arr1));//4
//	printf("%d\n", sizeof(arr2));//3
//	printf("%d\n", strlen(arr1));//3
//	printf("%d\n", strlen(arr2));//随机数
//}

//int main()
//{
//	int a = 3;
//	char c = 'f';
//	char* p = &c;
//	int arr[10] = { 0 };
//	printf("%d\n", sizeof a);
//	printf("%d\n", sizeof (int));
//	printf("%d\n", sizeof(c));
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(p));
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(int [10]));
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	if (a)//如果a为真
//	{
//		printf("哈哈!\n");
//	}
//	if (!a)//如果a为假
//	{
//		printf("呵呵!\n");
//	}
//	return 0;
//}

//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int count = 0;
//
//	//统计num的补码中有几个1
//	while (num)
//	{
//		count++;
//		num = num & (num - 1);
//	}
//	printf("%d", count);
//
///*	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (1==(( num >> i) & 1))
//		{
//			count++;
//		}
//	}
//	printf("%d", count);	*/ 
//	
//	//while (num)
//	//{
//	//	if (num % 2 == 1)
//	//	{
//	//		count++;
//	//	}
//	//	num = num / 2;
//	//}
//	//printf("%d", count);
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = 5;
//	printf("before: a=%d b=%d\n", a, b);
//	a = a ^ b;//a^b得到密码a
//	b = a ^ b;//密码a^原来的b = 原来的a - 放b里头
//	a = a ^ b;//密码a^原来的a = 原来的b - 放a里头
//	printf("after: a=%d b=%d", a, b);
//	return 0;
//}

//int main()
//{
//	////& - 按2进制位与
//	////有0为0,,全1则1
//	//int a = 3;
//	//int b = 5;
//	//int c = a & b;
//	//printf("%d", c);
//
//	////| - 按2进制位或
//	////有1为1，全0为0
//	//int a = 3;
//	//int b = 5;
//	//int c = a | b;
//	//printf("%d", c);
//	//return 0;
//
//	//^ - 按2进制位异或
//	//相同为0,相异为1
//	int a = 3;
//	int b = 5;
//	int c = a ^ b;
//	printf("%d", c);
//	return 0;
//}

////整数的二进制表示有：原码，反码，补码
////内存中存储的是补码
////10000000000000000000000000000001 - 原码
////11111111111111111111111111111110 - 反码
////11111111111111111111111111111111 - 补码
//int main()
//{
//	int a = -1;
//	int b = a >> 1;
//	printf("%d", b);
//	return 0;
//}

//int main()
//{
//	int a = 16;
//	int b = a >> 1;
//	printf("%d", b);
//	return 0;
//}

//int main()
//{
//	double a = 5 / 2.0;//%两侧必须为整数
//	printf("a = %lf", a);//商2余1
//	return 0;
//}