#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

//int cmp_int(void* e1, void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//
//struct Book
//{
//	char name[20];
//	int price;
//};
//int cmp_Book_by_name(void* e1, void* e2)
//{
//	return strcmp(((struct Book*)e1)->name, ((struct Book*)e2)->name);
//}
//
//void move(char* s1,char* s2,int width)
//{
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		char tmp = *s1;
//		*s1 = *s2;
//		*s2 = tmp;
//		s1++;
//		s2++;
//	}
//}
//
//void bubble_sort(void* base, int sz, int width,int(*cmp)(void* e1,void* e2))
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			int ret = 0;
//			if (ret=cmp((char*)base + j * width, (char*)base + (j + 1) * width)<0)
//			{
//				move((char*)base + j * width, (char*)base + (j + 1) * width,width);
//			}
//		}
//	}
//}
//
//void test()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
//}
//
//void test1()
//{
//	struct Book b[] = { {"jixie",20},{"ruanjian",15},{"lilun",25} };
//	int sz = sizeof(b) / sizeof(b[0]);
//	bubble_sort(b, sz, sizeof(b[0]), cmp_Book_by_name);
//}
//int main()
//{
//	//test();
//	test1();
//	return 0;
//}

//#include <stdlib.h>
//int cmp_int(const void* e1,const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//
//int main()
//{
//	int arr[] = { 10,9,8,7,6,1,2,3,4,5 };
//
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	return 0;
//}

//int judge(char* e1, char* e2, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while(left<=right)
//	{
//		if (strcmp(e1, e2) == 0)
//		{
//			return 1;
//		}
//		char tmp = e1[0];
//		e1[0] = e1[1];
//		e1[1] = e1[2];
//		e1[2] = e1[3];
//		e1[3] = e1[4];
//		e1[4] = tmp;
//	}
//	return 0;
//
//}
//int main()
//{
//	char arr1[] = "AABCD";
//	char arr2[] = "BCDAA";
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	int ret = judge(arr1, arr2, sz);
//	printf("%d", ret);
//	return 0;
//}

void left_reverse(char* e1, int len)
{
	int left = 0;
	int right = len - 1;

}
int main()
{
	char arr[20] = { 0 };
	scanf("%s", arr);//ABCD

	left_reverse(arr, len);
	return 0;
}