#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

//struct Stu
//{
//	char name[20];
//	int age;
//};

//int cmp_stu_by_age(const void* e1, const void* e2)
//{
//	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
//}
//
//int main()
//{
//	struct Stu s[] = { {"zhangsan",20},{"lisi",18},{"wangwu",22} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	qsort(s, sz, sizeof(s[0]), cmp_stu_by_age);
//	//第一个参数:待排序数组的首元素地址
//	//第二个参数:待排序数组的元素个数
//	//第三个参数:待排序数组的每个元素的大小 - 单位是字节
//	//第四个参数:是函数指针,比较两个元素所用函数的地址 - 函数使用者自己实现
//	//           函数指针的两个参数:待比较两个元素的地址
//	return 0;
//}

//void qsort(void* base, 
//	         size_t num, 
//	         size_t width, 
//		     int( compare)(const void* e1, const void* e2));

void bubble_sort(void* base, int sz, int width,int(*cmp)())
{
	int i = 0;
	//趟数
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		//每趟要比较的对数
		for (j = 0; j < sz - 1 - i; j++)
		{
			//两个元素的比较
			if (cmp() > 0)
			{
				//交换
			}
		}
	}
}

void test()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	//使用bubble_sort的程序员知道自己要排序的是什么数据
	//就应该知道如何比较待排序数组中的元素
	bubble_sort(arr,sz)
}

struct Stu
{
	char name[20];
	int age;
};
void test1()
{
	struct Stu s[] = { {"zhangsan",20},{"lisi",18},{"wangwu",22} };
	int sz = sizeof(s) / sizeof(s[0]);
	bubble_sort(s,sz)
}

int main()
{
	test();
	return 0;
}