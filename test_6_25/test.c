#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <Windows.h>
#include <stdlib.h>

//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码:>");
//		scanf("%s", &password);
//		if (strcmp(password, "123456") == 0)// == 不能用于比较两个字符串是否相等,应该使用库函数-strcmp
//		{
//			printf("登录成功\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误\n");
//		}
//	}
//	if (3 == i)
//		printf("登录失败\n");
//	return 0;
//}

//int main()
//{
//	char arr1[] =  "welcome to bit!!!!!!" ;
//	char arr2[] =  "####################" ;
//	int left = 0;
//	//int right = sizeof(arr1) / sizeof(arr1[0])-2;//数组还包含'\0',-2才正确
//	int right = strlen(arr1)-1;
//	while (left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);//休息1秒
//		system("cls");//执行系统命令的一个函数 - cls - 清空屏幕
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int key = 9;
//	int left = 0;//左下标
//	int right = sz-1;//右下标
//	int mid = 0;
//	while (left<=right)
//	{
//		mid = (left + right) / 2;
//		if (arr[mid] < key)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > key)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("找到了,下标是：%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//		printf("找不到\n");
//	return 0;
//}

//int main()
//{
//	//写一个代码，在arr（有序的）数组中找到6
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int key = 10;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (key == arr[i])
//		{
//			printf("找到了,下标是：%d\n", i);
//			break;
//		}
//	}
//	if (i == sz)
//		printf("找不到\n");
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	int i = 0;
//	int sum = 0;
//	int ch = 1;
//	for (n = 1; n <= 10; n++)
//	{
//		ch = ch * n;
//		sum = sum + ch;
//	}
//	printf("sum = %d\n", sum);
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	int i = 0;
//	int sum = 0;
//	int ch = 1;
//	for (n = 1; n <= 10; n++)
//	{
//		ch = 1;
//		for (i = 1; i <= n; i++)
//		{
//			ch = ch * i;
//			//n的阶乘
//		}
//		sum = sum + ch;
//	}
//	//ch = 1*1
//	//ch = 1*1*2
//	//ch = 2*1*2*3
//	printf("sum = %d\n", sum);
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	int i = 0;
//	int ch = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ch *= i;
//	}
//	printf("ch = %d\n", ch);
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	do
//	{
//		if (i == 5)
//			break;
//		printf("%d ", i);
//		i++;
//	} 
//	while (i <= 10);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (; i < 10; i++)
//	{
//		for (; j < 10; j++)
//			printf("haha\n");//省略j的初始化，只会打印10次
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//10次循环
//	//10个元素
//	//10次打印
//	for (i = 0; i < 10; i++)//建议for语句的循环控制变量的取值采用“前闭后开区间”的写法
//		printf("%d ", arr[i]);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 10; i++)//error:不可在for循环体内修改循环变量
//	{
//		if (i = 5)
//			printf("hehe\n");
//		printf("haha\n");
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 7)
//			continue;
//		printf("%d ", i);
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;//初始化
//	while (i <= 10)//判断
//	{
//		//......
//		i++;//调整
//	}
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch>'9')
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	int ref = 0;
//	char password[20] = { 0 };
//	printf("请输入密码:>");
//	scanf("%s", password);//输入密码，并存放到password数组中；123456/n
//	//缓冲区还剩一个'\n'
//	//读取'\n'
//	while (ref = getchar() != '\n') //123456 ABCD\n
//	{
//		;
//	}
//	printf("是否确认密码(Y/N):>");
//	ch = getchar();
//	if (ch == 'Y')
//		printf("确认成功\n");
//	else
//		printf("确认取消\n");
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//	return 0;
//}

