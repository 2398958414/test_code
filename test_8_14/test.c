#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <assert.h>
#include <string.h>

void* my_memcpy(void* dest, const void* src, size_t num)
{
	void* ret = dest;
	assert(dest != NULL);
	assert(src != NULL);
	if (dest > src && (char*)dest < (char*)src+num)
	{
		while (num--)
		{
			*((char*)dest + num) = *((char*)src + num);
		}
	}
	else
	{
		while (num--)
		{
			*(char*)dest = *(char*)src;
			dest = (char*)dest + 1;
			src = (char*)src + 1;
		}
	}
	return ret;
}


//C���Թ涨:
//memcpy - ֻҪ���� ���ص����ڴ濽������
//memmove - �����ص��ڴ�Ŀ���
int main()
{
	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
	my_memcpy(arr1+4, arr1+2, 20);
	//memmove(arr1 + 2, arr1, 20);//�����ڴ��ص������
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr1[i]);
	}
	return 0;
}