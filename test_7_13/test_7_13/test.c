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
	////11111111111111111111111111111111 - ����
	////11111111111111111111111111111110 - ����
	////10000000000000000000000000000001 - ԭ��
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
//	printf("%d\n", strlen(arr2));//�����
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
//	if (a)//���aΪ��
//	{
//		printf("����!\n");
//	}
//	if (!a)//���aΪ��
//	{
//		printf("�Ǻ�!\n");
//	}
//	return 0;
//}

//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int count = 0;
//
//	//ͳ��num�Ĳ������м���1
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
//	a = a ^ b;//a^b�õ�����a
//	b = a ^ b;//����a^ԭ����b = ԭ����a - ��b��ͷ
//	a = a ^ b;//����a^ԭ����a = ԭ����b - ��a��ͷ
//	printf("after: a=%d b=%d", a, b);
//	return 0;
//}

//int main()
//{
//	////& - ��2����λ��
//	////��0Ϊ0,,ȫ1��1
//	//int a = 3;
//	//int b = 5;
//	//int c = a & b;
//	//printf("%d", c);
//
//	////| - ��2����λ��
//	////��1Ϊ1��ȫ0Ϊ0
//	//int a = 3;
//	//int b = 5;
//	//int c = a | b;
//	//printf("%d", c);
//	//return 0;
//
//	//^ - ��2����λ���
//	//��ͬΪ0,����Ϊ1
//	int a = 3;
//	int b = 5;
//	int c = a ^ b;
//	printf("%d", c);
//	return 0;
//}

////�����Ķ����Ʊ�ʾ�У�ԭ�룬���룬����
////�ڴ��д洢���ǲ���
////10000000000000000000000000000001 - ԭ��
////11111111111111111111111111111110 - ����
////11111111111111111111111111111111 - ����
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
//	double a = 5 / 2.0;//%�������Ϊ����
//	printf("a = %lf", a);//��2��1
//	return 0;
//}