#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//int main()
//{
//	int arr[10];
//	int(*p)[10] = &arr;//ȡ������ĵ�ַ
//
//	int(*pf)(int, int);//����ָ��
//	int(*pfArr[4])(int, int);//pfArr�Ǹ����� - ����ָ������
//	//ppfArr�Ǹ�ָ��[����ָ������]��ָ��
//	int(*(*ppfArr)[4])(int, int) = &pfArr;
//
//	//ppfArr�Ǹ�ָ��,ָ���������4��Ԫ��,ÿ��Ԫ�ص������Ǻ���ָ��:int(*)(int)(int)
//	return 0;
//}

//void print(char* str)//printΪ�ص�����
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
	//�Ƚ����־��ǱȽ��ַ���
	//�ַ�������ֱ����><=���Ƚ�,Ӧ����strcmp����
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
//	void* p = &a;  //void* ���͵�ָ��,�ܽ����������͵ĵ�ַ
//	//*p = 0;      //void* ���͵�ָ��,���ܽ��н����ò���
//	//p++;        //void* ���͵�ָ��,���ܽ���+ -�����Ĳ���
//	char ch = 'w';
//	p = &ch;
//
//	return 0;
//}