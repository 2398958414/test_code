#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <stdlib.h>

//free只负责释放空间,不会将指针变量的值置为NULL

//void reverse(char* left, char* right)
//{
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//
//void left_move(char* arr, int k)
//{
//	assert(arr);
//	int len = (int)strlen(arr);
//	k %= len;
//	if (k)
//	{
//		reverse(arr, arr + k - 1);
//		reverse(arr + k, arr + len - 1);
//		reverse(arr, arr + len - 1);
//	}
//}
//int main()
//{
//	char arr[] = "ABCD";
//	int k = 0;
//	scanf("%d", &k);
//	left_move(arr, k);
//	printf("%s", arr);
//	return 0;
//}

//struct point
//{
//	int x;
//	int y;
//};
//struct point find_num(int arr[3][3], int r, int c, int k)
//{
//	int x = 0;
//	int y = c - 1;
//	struct point p = { -1,-1 };
//	while (x <= r - 1 && y >= 0)
//	{
//		if (k > arr[x][y])
//		{
//			x++;
//		}
//		else if (k < arr[x][y])
//		{
//			y--;
//		}
//		else
//		{
//			p.x = x;
//			p.y = y;
//			return p;
//		}
//	}
//	return p;
//}
//int main()
//{
//	int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
//	int k = 0;
//	scanf("%d", &k);
//	int row = 3;
//	int col = 3;
//	struct point ret = find_num(arr, 3, 3, k);
//	printf("%d %d", ret.x, ret.y);
//	return 0;
//}

//int is_left_move(char arr1[], char arr2[])
//{
//	int len1 = (int)strlen(arr1);
//	int len2 = (int)strlen(arr2);
//	if (len1 != len2)
//		return 0;
//	strncat(arr1, arr1, len1);
//	char* ret = strstr(arr1, arr2);
//	if (ret == NULL)
//		return 0;
//	else
//		return 1;
//}
//
//int main()
//{
//	char arr1[20] = "abcdef";
//	char arr2[] = "cdef";
//	int ret = is_left_move(arr1, arr2);
//	if (ret == 1)
//		printf("Yes");
//	else
//		printf("No");
//	return 0;
//}


//int cmp_int(void* e1,void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//void test1()
//{
//	int arr[] = { 10,9,8,7,6,5,4,3,2,1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//}
//
//struct stu
//{
//	char name[20];
//	int age;
//};
//
//int cmp_stu_by_name(void* e1, void* e2)
//{
//	return strcmp(((struct stu*)e1)->name, ((struct stu*)e2)->name);
//}
//void test2()
//{
//	struct stu s[] = { {"zhangsan",20},{"lisi",18},{"wangwu",21} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);
//}
//int main()
//{
//	//test1();
//	test2();
//	return 0;
//}

//int cmp_int(void* e1,void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//
//void exchange(char* s1, char* s2,int width)
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
//void binary_search(void* base, int sz, int width,int(*cmp)(void* e1,void* e2))
//{
//	assert(base);
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
//			{
//				exchange((char*)base + j * width, (char*)base + (j + 1) * width,width);
//			}
//		}
//	}
//}
//
//struct stu
//{
//	char name[20];
//	int age;
//};
//
//int cmp_stu_by_name(void* e1, void* e2)
//{
//	return strcmp(((struct stu*)e1)->name, ((struct stu*)e2)->name);
//}
//
//void test1()
//{
//	struct stu s[] = { {"zhangsan",20},{"lisi",18},{"wangwu",21} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	binary_search(s, sz, sizeof(s[0]),cmp_stu_by_name);
//}
//
//void test2()
//{
//	int arr[] = { 10,9,8,7,6,5,4,3,2,1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	binary_search(arr, sz, sizeof(arr[0]),cmp_int);
//}
//int main()
//{
//	
//	test1();
//	//test2();
//	return 0;
//}
