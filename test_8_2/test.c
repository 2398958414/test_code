#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <assert.h>

//void reverse_string(char* str)
//{
//	assert(str != NULL);
//	int len = (int)strlen(str);
//	char* left = str;
//	char* right = str + len - 1;
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//void reverse_string(char* str)
//{
//	assert(str != NULL);
//	int len = (int)strlen(str);
//	char* left = str;
//	char* right = str + len - 1;
//	char tmp = *left;
//	*left = *right;
//	*right = '\0';
//	if (strlen(str + 1) >= 2)
//		reverse_string(str + 1);
//	*right = tmp;
//}
// 
//int main()
//{
//	char arr[20] = { 0 };
//	//scanf("%s", arr);
//	gets(arr);//读取一行
//	reverse_string(arr);
//	printf("%s", arr);
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	int num = 0;
//	scanf("%d %d", &num, &n);//2 5
//	int i = 0;
//	int sum = 0;
//	int ret = 0;
//	//2 22 222 2222 22222
//	for (i = 0; i < n; i++)
//	{
//		ret = ret * 10 + num;
//		sum += ret;
//	}
//	printf("%d", sum);
//}

#include <math.h>
int main()
{
	int i = 0;
	for (i = 0; i <= 100000; i++)
	{
		//判断i是否为水仙花数(自幂数)
		//1.计算i的位数 - n位数
		int n = 1;
		int tmp = i;
		while (tmp /= 10)
		{
			n++;
		}
		//2.计算i的每一位的n次方之和 - sum
		int ret = i;
		int sum = 0;
		while (ret)
		{
			sum += pow(ret % 10, n);
			ret /= 10;
		}
		//3.比较
		if (i == sum)
		{
			printf("%d ", i);
		}
	}
	return 0;
}

//double pow(int x, int y)
//{
//	if (y == 0)
//	{
//		return 1;
//	}
//	else if(y>0)
//	{
//		return pow(x, y - 1)* x;
//	}
//	else
//	{
//		return 1.0 / pow(x, -y);
//	}
//}
//int main()
//{
//	int x = 0;
//	int y = 0;
//	scanf("%d %d", &x, &y);
//	double ret = pow(x, y);
//	printf("%lf", ret);
//	return 0;
//}