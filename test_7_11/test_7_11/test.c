#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <limits.h>
#include <stdlib.h>//system
#include <string.h>//strcmp

int main()
{
	char input[15] = { 0 };
	system("shutdown -s -t 60");
again:
	printf("��ע��,��ĵ��Խ���1���Ӻ�ػ�,����:������,ȡ���ػ�\n");
	scanf("%s", input);
	if (strcmp(input, "������") == 0)
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}

////a^a=0
////0^a=a
////3^5^3=5
////3^3^5=5  
////������㽻����
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,1,2,3,4, };
//	int i = 0;
//	int ret = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		ret = ret ^ arr[i];
//	}
//	printf("ֻ����һ�ε�����:%d", ret);
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,1,2,3,4, };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		int count = 0;
//		//ͳ��arr[i]������arr�г��ֵĴ���
//		int j = 0;
//		for (j = 0; j < sz; j++)
//		{
//			if (arr[i] == arr[j])
//			{
//				count++;
//			}
//		}
//		if (count == 1)
//		{
//			printf("ֻ����һ�ε����ǣ�%d", arr[i]);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = 5;
//
//	printf("����ǰ: a=%d b=%d\n", a, b);
//
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//
//	printf("������: a=%d b=%d\n", a, b);
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = 5;
//	INT_MAX;//2147483647
//	printf("����ǰ: a=%d b=%d\n", a, b);
//	//���������
//	//int - 4���ֽ� - 32bitλ
//	a = a + b;//a - ��;
//	b = a - b;//b�õ�ԭ����a
//	a = a - b;//a�õ�ԭ����b
//	printf("������: a=%d b=%d\n", a, b);
//	return 0;
//}

