#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

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
//int judge_reverse(char* arr1, char* arr2,int k)
//{
//	int i = 0;
//	int sz = (int)strlen(arr1);
//	for (i = 0; i < k; i++)
//	{
//		reverse(arr1+1,arr1+sz-1);//逆序右边
//		reverse(arr1,arr1+sz-1);//逆序整体
//		if (strcmp(arr1, arr2) == 0)
//		{
//			return 1;
//		}
//	}
//	return 0;
//}
//
//int main()
//{
//	char arr1[] = "AABCD";
//	char arr2[] = "aABCD";
//	int k = sizeof(arr1) / sizeof(arr1[0]);
//	int ret=judge_reverse(arr1,arr2,k);
//	printf("%d", ret);
//	return 0;
//}

//void reverse(char* left, char* right)
//{
//	while (left<right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//
//void left_move(char* arr1, int k)
//{
//	int len = (int)strlen(arr1);
//	reverse(arr1,arr1+k-1);//逆序左边
//	reverse(arr1+k,arr1+len-1);//逆序右边
//	reverse(arr1,arr1+len-1);//逆序整体
//}
//int is_left_move(char* s1, char* s2)
//{
//	int len = (int)strlen(s1);
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		left_move(s1, 1);
//		int ret = strcmp(s1, s2);
//		if (ret == 0)
//			return 1;
//	}
//	return 0;
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "cdefab";
//	int ret = is_left_move(arr1, arr2);
//	if (ret == 1)
//		printf("YES\n");
//	else
//		printf("NO\n");
//	return 0;
//}

//abcdef
//bcdefa
//cdefab
//defabc
//efabcd
//fabcde

//abcdefabcdef
//int is_left_move(char* str1, char* str2)
//{
//	int len1 = (int)strlen(str1);
//	int len2 = (int)strlen(str2);
//	if (len1 != len2)
//		return 0;
//	//1.在str1字符串中追加1个str1字符串
//	//strcat(str1, str1);//err
//	strncat(str1, str1, len1);
//	//2.判断str2指向的字符串是否为str1指向的字符串的子串
//	//strstr - 找子串
//	char* ret = strstr(str1, str2);
//	if (ret == NULL)
//		return 0;
//	else
//		return 1;
//}
//int main()
//{
//	char arr1[30] = "abcdef";
//	char arr2[] = "cdefab";
//	int ret = is_left_move(arr1, arr2);
//	if (ret == 1)
//		printf("Yes");
//	else
//		printf("No");
//	return 0;
//}

int FindNum(int arr[3][3], int k, int* px , int* py )
{
	int x = 0;
	int y = *py-1;
	while (y>=0&&x<=*px-1)
	{
		if (arr[x][y] > k)
		{
			y--;
		}
		else if (arr[x][y] < k)
		{
			x++;
		}
		else
		{
			*px = x;
			*py = y;
			return 1;
		}
	}
	return 0;

}
int main()
{
	int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
	int key = 7;
	int x = 3;
	int y = 3;
	//返回型参数
	int ret = FindNum(arr, key,&x,&y);
	if (ret == 1)
	{
		printf("找到了\n");
		printf("下标是:%d %d", x, y);
	}
	else
		printf("找不到");
	return 0;
}