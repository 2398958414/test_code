#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//int main()
//{
//	int arr[10];
//	int(*p)[10] = &arr;//取出数组的地址
//
//	int(*pf)(int, int);//函数指针
//	int(*pfArr[4])(int, int);//pfArr是个数组 - 函数指针数组
//	//ppfArr是个指向[函数指针数组]的指针
//	int(*(*ppfArr)[4])(int, int) = &pfArr;
//
//	//ppfArr是个指针,指向的数组有4个元素,每个元素的类型是函数指针:int(*)(int)(int)
//	return 0;
//}

//void print(char* str)//print为回调函数
//{
//	printf("hello:%s", str);
//}
//
//void test(void(*p)(char*))
//{
//	printf("hehe\n");
//	p("sztu");
//}
//int main()
//{
//	test(print);
//	return 0;
//}

//void Bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int ref = 1;
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				ref = 0;
//			}
//		}
//		if (ref == 1)
//		{
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int arr[] = { 10,9,8,7,6,5,4,3,2,1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Bubble_sort(arr, sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

int cmp_int(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}
void test()
{
	int arr[] = { 10,9,8,7,6,5,4,3,2,1 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), cmp_int);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}

int cmp_float(const void* e1, const void* e2)
{
	if (*(float*)e1 == *(float*)e2)
		return 0;
	else if (*(float*)e1 > *(float*)e2)
		return 1;
	else
		return 0;
}
void test1()
{
	float f[] = { 9.0,8.0,7.0,6.0,5.0 };
	int sz = sizeof(f) / sizeof(f[0]);
	qsort(f, sz, sizeof(f[0]), cmp_float);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%f ", f[i]);
	}
}

struct Stu
{
	char name[20];
	int age;
};

int cmp_Stu_by_age(const void* e1, const void* e2)
{
	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
}
void test2()
{
	struct Stu s[] = { {"zhangsan",20},{"wangwu",10},{"lisi",30} };
	int sz = sizeof(s) / sizeof(s[0]);
	qsort(s, sz, sizeof(s[0]), cmp_Stu_by_age);
}

int cmp_Stu_by_name(const void* e1, const void* e2)
{
	//比较名字就是比较字符串
	//字符串不能直接用><=来比较,应该用strcmp函数
	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
}
void test3()
{
	struct Stu s[] = { {"zhangsan",20},{"wangwu",10},{"lisi",30} };
	int sz = sizeof(s) / sizeof(s[0]);
	qsort(s, sz, sizeof(s[0]), cmp_Stu_by_name);
}
int main()
{
	//test();
	//test1();
	//test2();
	test3();
	return 0;
}

//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	//char* pc = &a;
//
//	void* p = &a;  //void* 类型的指针,能接受任意类型的地址
//	//*p = 0;      //void* 类型的指针,不能进行解引用操作
//	//p++;        //void* 类型的指针,不能进行+ -整数的操作
//	char ch = 'w';
//	p = &ch;
//
//	return 0;
//}