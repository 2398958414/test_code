#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//0.5
//20/0.5 = 40¿ÕÆ¿ -1 = 39
//int main()
//{
//	int money = 0;
//	scanf("%d", &money);
//	int total = 0;
//	int empty = 0;
//	if (money == 0)
//		total = 0;
//	else
//		total = 2 * money - 1;
//
//	////Âò»ØÀ´µÄºÈµô
//	//total = money;
//	//empty = money;
//	////¶Ò»»µÄÆûË®
//	//while (empty >= 2)
//	//{
//	//	total += empty / 2;
//	//	empty = empty / 2 + empty % 2;
//	//}
//	printf("%d", total);
//	return 0;
//}
#include <string.h>
#include <assert.h>
//void my_strcpy(char* dest, const char* src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	while (*dest++ = *src++ )
//	{
//		;
//	}
//}
//
//int main()
//{
//	char arr1[] = "**************";
//	char arr2[] = "byte";
//	my_strcpy(arr1, arr2);
//	printf("%s", arr1);
//	//printf("%s", strcpy(arr1, arr2));
//	return 0;
//}

//int my_strlen(const char* e1)
//{
//	assert(e1 != NULL);
//	int count = 0;
//	while (*e1 != '\0')
//	{
//		count++;
//		e1++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	printf("%d", len);
//	return 0;
//}

void move(int* e1,int sz)
{
	int left = 0;
	int right = sz - 1;
	while (left<right)
	{
		//ÕÒ×ó±ßµÄÅ¼Êý
		while ((left < right) && (e1[left] % 2 == 1))
		{
			left++;
		}
		//ÕÒÓÒ±ßµÄÆæÊý
		while ((left < right) && (e1[right] % 2 == 0))
		{
			right--;
		}
		//½»»»
		if (left < right)
		{
			int tmp = e1[left];
			e1[left] = e1[right];
			e1[right] = tmp;
		}
	}
}
void print(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}
int main()
{
	int arr[] = { 1,3,5,7,9,8,10};
	int sz = sizeof(arr) / sizeof(arr[0]);
	move(arr,sz);
	print(arr, sz);
	return 0;
}