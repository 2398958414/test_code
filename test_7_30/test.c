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
//	//��һ������:�������������Ԫ�ص�ַ
//	//�ڶ�������:�����������Ԫ�ظ���
//	//����������:�����������ÿ��Ԫ�صĴ�С - ��λ���ֽ�
//	//���ĸ�����:�Ǻ���ָ��,�Ƚ�����Ԫ�����ú����ĵ�ַ - ����ʹ�����Լ�ʵ��
//	//           ����ָ�����������:���Ƚ�����Ԫ�صĵ�ַ
//	return 0;
//}

//void qsort(void* base, 
//	         size_t num, 
//	         size_t width, 
//		     int( compare)(const void* e1, const void* e2));

void bubble_sort(void* base, int sz, int width,int(*cmp)())
{
	int i = 0;
	//����
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		//ÿ��Ҫ�ȽϵĶ���
		for (j = 0; j < sz - 1 - i; j++)
		{
			//����Ԫ�صıȽ�
			if (cmp() > 0)
			{
				//����
			}
		}
	}
}

void test()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	//ʹ��bubble_sort�ĳ���Ա֪���Լ�Ҫ�������ʲô����
	//��Ӧ��֪����αȽϴ����������е�Ԫ��
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