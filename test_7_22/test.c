#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	1 - 1;
//	1 + (-1);
//	//00000000000000000000000000000001 - 补码
//	//11111111111111111111111111111111
//    //00000000000000000000000000000000
//
//	//00000000000000000000000000000001 - 原码
//	//10000000000000000000000000000001
//	//10000000000000000000000000000010
//	return 0;
//}

//check_sys()
//{
//	int a = 1;
//	char* p = (char*) & a;
//	return *p;
//}

//check_sys()
//{
//	int a = 1;
//	return *(char*)&a;
//}
//
//int main()
//{
//	//写一个代码告诉我们当前的机器的字节序是多少
//	//返回1,小端
//	//返回0,大端
//	int ret = check_sys();
//	if (ret == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	return 0;
//}

//int main()
//{
//	char a = -1;
//	//10000000000000000000000000000001
//	//11111111111111111111111111111110
//	//11111111111111111111111111111111
//	//11111111111111111111111111111111
//	signed char b = -1;
//	//11111111
//	unsigned char c = -1;
//	//11111111
//	//00000000000000000000000011111111
//	printf("a=%d b=%d c=%d", a, b, c);
//	return 0;
//}

//int main()
//{
//	char a = -128;
//	//1000000000000000000000010000000
//	//1111111111111111111111101111111
//	//1111111111111111111111110000000 - 补码
//	//10000000
//	//
//	//1111111111111111111111110000000 - 补码
//	printf("%u", a);
//	//%d - 打印十进制的有符号数字
//	//%u - 打印十进制的无符号数字
//	return 0;
//}

//10000000 00000000 00000000 00010100
//11111111 11111111 11111111 11101011 
//11111111 11111111 11111111 11101100 - 补码
//00000000 00000000 00000000 00001010 - 补码
// 
//11111111 11111111 11111111 11110110 - 结果
//11111111 11111111 11111111 11110101
//10000000 00000000 00000000 00001010 -10
//int main()
//{
//	int i = -20;
//	unsigned int j = 10;
//	printf("%d", i + j);
//	return 0;
//}

#include <Windows.h>

//int main()
//{
//	unsigned int i;
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u\n", i);
//		Sleep(100);
//	}
//	return 0;
//}

//int main()
//{
//	char a[1000];
//	int i;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	printf("%d", strlen(a));//strlen - 求字符串长度;计算的是'\0'之前元素的个数
//}

unsigned char i=0;//0~255
int main()
{
	for (i = 0; i <= 255; i++)
	{
		printf("hello world\n");
	}
	return 0;
}