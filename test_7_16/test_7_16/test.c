#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

////ָ�����;�����:ָ����н����ò���ʱ���ܹ����ʿռ�Ĵ�С
////int* p - �ܹ�����4���ֽ�
////char* p - �ܹ�����1���ֽ�
////double* p - �ܹ�����8���ֽ�
//int main()
//{
//	int a = 0x11223344;
//	//int* pa = &a;
//	//*pa = 0;
//	//printf("%p\n", pc);
//	char* pc = &a;
//	*pc = 0;
//	printf("%p\n", pc);
//	return 0;
//}

////ָ�����;�����:ָ����һ���߶�Զ��ָ��Ĳ�����
////int* p ; p+1 -> 4
////char* p ; p+1 -> 1
////double* p ; p+1 -> 8
//int main()
//{
//	int a = 0x00112233;
//	int* pa = &a;
//	char* pb = &a;
//	printf("%p\n", pa);
//	printf("%p\n", pa+1);
//	printf("%p\n", pb);
//	printf("%p\n", pb+1);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;
//	}
//	return 0;
//}


////Ұָ��
// 
//int main()
//{
//	int a;//�ֲ���������ʼ��,Ĭ�������ֵ
//	int* p;//�ֲ���ָ�����,�ͱ���ʼ�����ֵ
//	*p = 20;
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 12; i++)
//	{
//		//��ָ��ָ��ķ�Χ��������arr�ķ�Χ,p����Ұָ��
//		*(p + i) = 1;
//	}
//	return 0;
//}

////ָ��ָ��Ŀռ��ͷ�
//int* test()
//{
//	int a = 10;
//	return &a;
//}
//int main()
//{
//	int* p = test();
//	*p = 20;
//	return 0;
//}

int main()
{
	int a = 10;
	int* p = &a;//��ʼ��
	int* pa = NULL;//NULL - ������ʼ��ָ�룬��ָ�븳ֵ

	*p = 20;
	//���������ָ��ʱ
	p = NULL;

	if(p!=NULL)
	{

	}
	return 0;
}