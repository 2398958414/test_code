#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

//定义函数
int get_max(int x,int y)
{
	return(x > y ? x : y);
}
int main()
{
	int a = 20;
	int b = 50;
	//函数的使用
	int max = get_max(a, b);
	printf("max = %d\n", max); 
	max = get_max(100, 20);
	printf("max = %d", max);
	return 0;
}

////memset
////mem - memory - 内存   set - 设置
//int main()
//{
//	char arr[] = "hello SZTU";
//	memset(arr, '*', 5);
//	printf("%s", arr);
//	return 0;
//}

//int main()
//{
//	char arr1[] = "SZTU";
//	char arr2[] = "#######";
//	//             SZTU/0#####
//	strcpy(arr2, arr1);
//	printf("%s", arr2);
//	return 0;
//}