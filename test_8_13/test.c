#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <assert.h>
#include <string.h>

//int main()
//{
//	//198.172.121.38  .
//	//198 172 121 38 - strtok
//	//gc@qq.com  @.
//	//gc qq com
//	
//	char arr[] = "198.172.121.38";
//	char* p = ".";
//	//���ʮ���Ƶı�ʾ��ʽ
//	//char arr[] = "zpw@bite.tech";
//	//char* p = "@.";
//
//	char buf[1024] = { 0 };
//	strcpy(buf, arr);
//	char* ret = NULL;
//
//	for (ret = strtok(arr, p); ret != NULL; ret = strtok(NULL, p))
//	{
//		printf("%s\n", ret);
//	}
//
//	//char* ret = strtok(arr, p);
//	//printf("%s\n", ret);
//
//	//ret = strtok(NULL, p);
//	//printf("%s\n", ret);
//
//	//ret = strtok(NULL, p);
//	//printf("%s", ret);
//
//	return 0;
//}

//#include <errno.h>
//int main()
//{
//	//������    ������Ϣ
//	//0    -    No error
//	//1    -    Operation not permitted
//	//2    -    No such file or directory
//
//	//errno��һ��ȫ�ֵĴ��������
//	//��C���ԵĿ⺯����ִ�й�����,�����˴���,�Ὣ��Ӧ������,��ֵ��errno��
//	//char* ret = strerror(errno);
//	//printf("%s", ret);
//
//	//���ļ�
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s", strerror(errno));
//	}
//	else
//	{
//		printf("open file success");
//	}
//	return 0;
//}

//#include <ctype.h>
//int main()
//{
//	//char ch = '2';
//	////int ret = islower(ch);
//	//int ret = isdigit(ch);
//	//printf("%d", ret);
//
//	//char ch = toupper('w');
//	//char ch = tolower('W');
//	//putchar(ch);	
//	char arr[] = "I Am A Student";
//	int i = 0;
//	while(arr[i])
//	{
//		if(isupper(arr[i]))
//		{
//			arr[i]=tolower(arr[i]);
//		}
//		i++;
//	}
//	printf("%s", arr);
//	return 0;
//}

void* my_memcpy(void* dest,const void* src, size_t num)
{
	void* ret = dest;
	assert(dest != NULL);
	assert(src != NULL);
	while (num--)
	{
		*(char*)dest = *(char*)src;
		dest = (char*)dest + 1;
		src = (char*)src + 1;
	}
	return ret;
}

struct s
{
	char name[20];
	int age;
};
int main()
{
	int arr1[] = { 1,2,3,4,5 };
	int arr2[5] = { 0 };
	struct s arr3[] = { {"����",18},{"����",20} };
	struct s arr4[3] = { 0 };
	my_memcpy(arr4, arr3, sizeof(arr3));
	memcpy(arr2, arr1, sizeof(arr1));
	return 0;
}