#define _CRT_SECURE_NO_WARNINGS 1

#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <stdio.h>

//int main()
//{
//	//���ڴ�����10�����͵Ŀռ�
//	int* p = (int*)malloc(10 * sizeof(int));
//	if (p == NULL)
//	{
//		//��ӡ����ԭ��
//		printf("%s", strerror(errno));
//	}
//	else
//	{
//		//����ʹ�ÿռ�
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	//����̬����Ŀռ䲻��ʹ��ʱ
//	//��Ӧ�û�������ϵͳ
//	free(p);
//	p = NULL;
//	return 0;
//}

//int main()
//{
//	//malloc(10*sizeof(int))
//	int* p = (int*)calloc(10, sizeof(int));
//	if (p == NULL)
//	{
//		printf("%s", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	//�ͷſռ�
//	//free�����������ͷŶ�̬���ٵĿռ�
//	free(p);
//	p = NULL;
//	return 0;
//}

//realloc
//����������̬���ٵ��ڴ�ռ�Ĵ�С
int main()
{
	int* p = malloc(20);
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		*(p + i) = i;
	}

	//reallocʹ�õ�ע������:
	//1.���pָ��Ŀռ�֮�����㹻���ڴ�ռ����׷��,��ֱ��׷��,�󷵻�p
	//2.���pָ��Ŀռ�֮��û���㹻���ڴ�ռ����׷��,��realloc������������һ���µ��ڴ�����
	//����һ����������Ŀռ�,����ԭ�������ݿ�������,�ͷžɵ��ڴ�ռ�,��󷵻��¿��ٵ��ڴ�ռ��ַ
	//3.����һ���µı���������realloc�����ķ���ֵ

	int* ptr = realloc(p, 40);
	if (ptr == NULL)
	{
		printf("%s", strerror(errno));
	}
	else
	{
		p = ptr;
		for (i = 5; i < 10; i++)
		{
			*(p + i) = i;
		}
		for (i = 0; i < 10; i++)
		{
			printf("%d ", *(p + i));
		}
	}
}