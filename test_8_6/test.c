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
//		reverse(arr1+1,arr1+sz-1);//ÄæÐòÓÒ±ß
//		reverse(arr1,arr1+sz-1);//ÄæÐòÕûÌå
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
//	reverse(arr1,arr1+k-1);//ÄæÐò×ó±ß
//	reverse(arr1+k,arr1+len-1);//ÄæÐòÓÒ±ß
//	reverse(arr1,arr1+len-1);//ÄæÐòÕûÌå
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
int is_left_move(char* str1, char* str2)
{
	int len1 = (int)strlen(str1);
	int len2 = (int)strlen(str2);
	if (len1 != len2)
		return 0;
	//1.ÔÚstr1×Ö·û´®ÖÐ×·¼Ó1¸östr1×Ö·û´®
	//strcat(str1, str1);//err
	strncat(str1, str1, len1);
	//2.ÅÐ¶Ïstr2Ö¸ÏòµÄ×Ö·û´®ÊÇ·ñÎªstr1Ö¸ÏòµÄ×Ö·û´®µÄ×Ó´®
	//strstr - ÕÒ×Ó´®
	char* ret = strstr(str1, str2);
	if (ret == NULL)
		return 0;
	else
		return 1;
}
int main()
{
	char arr1[30] = "abcdef";
	char arr2[] = "cdefab";
	int ret = is_left_move(arr1, arr2);
	if (ret == 1)
		printf("Yes");
	else
		printf("No");
	return 0;
}