#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <assert.h>
#include <string.h>

//void* my_memmove(void* dest, const void* src, size_t num)
//{
//	void* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	if (dest < src || (char*)dest > (char*)src+num)
//	{
//		//ǰ->��
//		while (num--)
//		{
//			*(char*)dest = *(char*)src;
//			dest = (char*)dest + 1;
//			src = (char*)src + 1;
//		}
//	}
//	else
//	{
//		//��->ǰ
//		while (num--)
//		{
//			*((char*)dest + num) = *((char*)src + num);
//		}
//	}
//	return ret;
//}

//void* my_memmove(void* dest, const void* src, size_t num)
//{
//	void* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	if (dest < src )
//	{
//		//ǰ->��
//		while (num--)
//		{
//			*(char*)dest = *(char*)src;
//			dest = (char*)dest + 1;
//			src = (char*)src + 1;
//		}
//	}
//	else
//	{
//		//��->ǰ
//		while (num--)
//		{
//			*((char*)dest + num) = *((char*)src + num);
//		}
//	}
//	return ret;
//}

//C���Թ涨:
//memcpy - ֻҪ���� ���ص����ڴ濽������
//memmove - �����ص��ڴ�Ŀ���
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	my_memmove(arr1, arr1+2, 20);
//	//memmove(arr1 + 2, arr1, 20);//�����ڴ��ص������
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	return 0;
//}

//int main()
//{
//	//01 00 00 00 02 00 00 00 03 00 00 00...
//	//01 00 00 00 02 00 00 00 05 00 00 00...
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 1,2,5,4,3 };
//	int ret = memcmp(arr1, arr2, 9);
//	printf("%d", ret);
//	return 0;
//}

//memset - �ڴ�����
int main()
{
	//char arr1[10] = { 0 };
	//memset(arr1, '*', 10);

	int arr[10] = { 0 };
	//40���ֽ�
	//01 01 01 01 01 01 01 01 01 01 00 00 00...
	memset(arr, 1, 10);
	return 0;
}