#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//��ȫ�ֱ����;ֲ��������ֳ�ͻʱ,�ֲ���������
//int a = 1;
//void test()
//{
//	int a = 2;
//	a += 1;
//}
//int main()
//{
//	test();
//	printf("%d", a);
//	return 0;
//}

//C���Ա���û������������
//���������� - ��׼�⺯��(�ǳ��̸��ݱ�׼����,�ṩ����)


//int main()
//{
//	int x = 0;
//	int y = 0;
//	scanf("%d %d", &x, &y);
//	//��x,y����С������
//	int max = (x > y ? x : y);
//	while (1)
//	{
//		if (max % x == 0 && max % y == 0)
//		{
//			break;
//		}
//		max++;
//	}
//	//��ӡ
//	printf("%d", max);
//	return 0;
//}

//int main()
//{
//	int x = 0;
//	int y = 0;
//	scanf("%d %d", &x, &y);
//	//��x,y����С������
//	int i = 1;
//	while (x * i % y)
//	{
//		i++;
//	}
//	//��ӡ
//	printf("%d", x*i);
//	return 0;
//}

#include <string.h>
void reverse(char* left, char* right)
{
	while (left<right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}
int main()
{
	char arr[101] = { 0 };
	//����
	gets(arr);
	int len = (int)strlen(arr);
	//����
	//1.��������
	reverse(arr, arr + len - 1);
	//2.����ÿ������
	char* start = arr;
	char* end = start;
	while (*start)
	{
		while (*end != ' '&&*end)
		{
			end++;
		}
		reverse(start, end - 1);
		if(*end)
			end++;
		start = end;
	}
	//���
	printf("%s", arr);
	return 0;
}