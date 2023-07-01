#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
//                 �������Ǹ�ָ��
int binary_search (int arr[],int k,int sz)
{
	int left = 0;
	int right = sz - 1;
	while (left<=right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else
		{
			return mid;
		}
	}
	return -1;
}

int main()
{
	//���ֲ���
	//��һ�����������в���ĳ��ָ������
	//����ҵ��ˣ�������������±꣬�Ҳ�������-1
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 16;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int ret = binary_search(arr, k, sz);
	//                      ���ݵ�������arr��Ԫ�صĵ�ַ
	if (ret == -1)
	{
		printf("�Ҳ��������\n");
	}
	else
		printf("�ҵ��ˣ��±���:%d\n", ret);
	return 0;
}

//int is_leap_year(int n)
//{
//	if ((n % 4 == 0) && (n % 100 != 0) || (n % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//
//int main()
//{
//	//����1000-2000�����
//	int i = 0;
//	int count = 0;
//	for (i = 1000; i <= 2000; i++)
//	{
//		//�ж�i�Ƿ�Ϊ����
//		if (is_leap_year(i) == 1)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount = %d", count);
//	return 0;
//}

//����������1��������������0
//int is_prime(int n)
//{
//	int j = 0;
//	for (j = 2; j <= sqrt(n); j++)
//	{
//		if (n % j == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//
//int main()
//{
//	//��ӡ100-200����
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//�ж�i�Ƿ�Ϊ����
//		if (is_prime(i) == 1)
//			printf("%d ", i);
//	}
//	return 0;
//}

//void sushu(int* x)
//{
//	int i = 0;
//	for (i = 2; i <= sqrt(*x); i++)
//	{
//		if (*x % i == 0)
//		{
//			break;
//		}
//	}
//	if (i > sqrt(*x))
//	{
//		printf("%d�Ǹ�����", *x);
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	sushu(&n);
//	return 0;
//}

//��ʵ�δ����β�ʱ
//�β���ʵ��ʵ�ε�һ����ʱ����
//���βε��޸��ǲ���ı�ʵ�ε�
//
//void Swap1(int x, int y)//err:�����������
//{
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//}

//void Swap2(int* pa,int* pb)
//{
//	int tmp = 0;
//	tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//
//int main()
//{
//	int a = 20;
//	int b = 30;
//	printf("a = %d b = %d\n", a, b);
//	//����Swap1���� - ��ֵ����
//	/*Swap1(a, b);*/
//	//����Swap2���� - ��ֵ����
//	Swap2(&a, &b);
//	//int tmp = 0;
//	//tmp = a;
//	//a = b;
//	//b = tmp;
//	printf("a = %d b = %d", a, b);
//	return 0;
//}