#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	int arr[5];//arr����5��Ԫ�ص���������
//	int* parr1[10];//parr1��һ������,������10��Ԫ�أ�ÿ��Ԫ�ص�������int*,parr1��ָ������
//	int(*parr2)[10];//parr2��һ��ָ��,ָ�����һ������,��������10��Ԫ�أ�ÿ��Ԫ�ص�������int,parr2������ָ��
//	int(*parr3[10])[5];//parr3��һ������,��������10��Ԫ��,ÿ��Ԫ�ص�����������ָ��
//	                   //������ָ��ָ�����������5��Ԫ��,ÿ��Ԫ�ص�������int
//	return 0;
//}

////void test1(int arr[3][5])
////{}
////void test2(int arr[][5])
////{}
////void test3(int arr[3][])//err
////{}
//
////void test4(int* arr)//err
////{}
////void test5(int** arr)//err
////{}
//void test6(int(*arr)[5])
//{}
//
//int main()
//{
//	int arr[3][5] = { 0 };
//	//test1(arr);
//	//test2(arr);
//	//test3(arr);
//
//	//test4(arr);
//	//test5(arr);
//	test6(arr);
//	return 0;
//}

//void test(int* p)
//{}
//int main()
//{
//	int a = 10;
//	int* pc = &a;
//	test(&a);
//	test(pc);
//	return 0;
//}

//void test(int** p)
//{}
//int main()
//{
//	int* p;
//	int** pc = &p;
//	test(&p);
//	test(pc);
//	int* arr[10];
//	test(arr);
//	return 0;
//}

//����ָ�� - ָ�������ָ��
//����ָ�� - ָ������ָ�� - ��ź����ĵ�ַ
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 15;
//
//	int arr[10] = { 0 };
//	int(*pa)[10] = &arr;
//	arr;
//
//	//&������ �� ������ ���Ǻ����ĵ�ַ
//
//	//printf("%p\n", Add);
//	//printf("%p\n", &Add);
//	int(*p)(int, int) = Add;
//	printf("%d", (*p)(2, 4));
//	return 0;
//}

//void Print(char* str)
//{
//	printf("%s", str);
//}
//int main()
//{
//	void (*pp)(char*) = Print;
//	(*pp)("abcdefg");
//	return 0;
//}

//(*(void(*)())0)()
//��0ǿ������ת��Ϊ:void(*)() - ����ָ������,0����һ�������ĵ�ַ
//����0��ַ���ĸú���

//signal��һ����������
//signal�Ĳ�����2��,��1����int.�ڶ����Ǻ���ָ������,�ú���ָ��ָ��ĺ���������int,����������void
//signal�ķ��������Ǻ���ָ������,�ú���ָ��ָ��ĺ���������int,����������void	
//void(*signal(int, void(*)(int)))(int);
//
////��
//typedef void(*Pfun_t)(int);
//Pfun_t signal(int, Pfun_t);
//
//typedef unsigned int uint;

//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 15;
//	int(*p)(int, int) = Add;
//	printf("%d\n", p(2, 4));
//	printf("%d\n", Add(2, 4));	
//
//	printf("%d", (*p)(2, 4));
//	return 0;
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	//ָ������
//	//int* arr[10];
//	//��Ҫһ������,���������Դ��4�������ĵ�ַ - ����ָ������
//	int(*pa)(int, int) = Add;//Sub/Mul/Div
//	int(*parr[4])(int, int) = {Add,Sub,Mul,Div};
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d ",parr[i](2, 3));
//	}
//	return 0;
//}

char* my_strcpy(char* dest,const char* src)
{}
int main()
{
	char* (*pf)(char*, const char*) = my_strcpy;
	char* (*pfArr[4])(char*, const char*) = { my_strcpy ,my_strcpy, my_strcpy ,my_strcpy };
}