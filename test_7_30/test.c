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

int cmp_int(void* e1, void* e2)
{
	return *(int*)e1 - *(int*)e2;
}

void Swap(char* elem1, char* elem2,int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = *elem1;
		*elem1 = *elem2;
		*elem2 = tmp;
		elem1++;
		elem2++;
	}
}

//ʵ��bubble_sort�ĳ���Ա,�Ƿ�֪��δ��Ҫ������������� - ��֪��
//�ǳ���ԱҲ��֪��,���Ƚϵ�����Ԫ�ص�����
void bubble_sort(void* base, int sz, int width,int(*cmp)(void* e1,void* e2))
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
			if (cmp((char*)base+j*width,(char*)base+(j+1)*width) > 0)
			{
				//����
				Swap((char*)base + j * width, (char*)base + (j + 1) * width,width);
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
	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
}

struct Stu
{
	char name[20];
	int age;
};

//int cmp_stu_by_age(void* e1, void* e2)
//{
//	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
//}
#include <string.h>
int cmp_stu_by_name(void* e1, void* e2)
{
	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
}
void test1()
{
	struct Stu s[] = { {"zhangsan",20},{"lisi",18},{"wangwu",22} };
	int sz = sizeof(s) / sizeof(s[0]);
	//bubble_sort(s, sz, sizeof(s[0]), cmp_stu_by_age);
	bubble_sort(s, sz, sizeof(s[0]), cmp_stu_by_name);
}

int main()
{
	//test();
	test1();
	return 0;
}