#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	int a = 10000;
//	FILE* pf = fopen("test.txt", "wb");
//	fwrite(&a, 4, 1, pf);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	//打开文件test.txt
//	
//	//相对路径
//	//.. 表示上一路径
//	//.  表示当前路径
//	fopen("..\..\test.txt", "r");
//
//	//绝对路径
//	fopen("D:\\Code\\test_9_3\\test_9_3", "r");
//	return 0;
//}

#include <errno.h>
#include <string.h>
//int main()
//{
//	//打开文件
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s", strerror(errno));
//		return 0;
//	}
//	//打开成功
//	//读数据
//	
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	FILE* pfWrite = fopen("test.txt", "w");
//	if (pfWrite == NULL)
//	{
//		printf("%s", strerror(errno));
//		return 0;
//	}
//	//写数据
//	fputc('b', pfWrite);
//	fputc('i', pfWrite);
//	fputc('t', pfWrite);
//
//	fclose(pfWrite);
//	pfWrite = NULL;
//  return 0;
//}

//int main()
//{
//	FILE* pfRead = fopen("test.txt", "r");
//	if (pfRead == NULL)
//	{
//		printf("%s", strerror(errno));
//		return 0;
//	}
//	//读数据
//	printf("%c", fgetc(pfRead));
//	printf("%c", fgetc(pfRead));
//	printf("%c",fgetc(pfRead));
//
//	fclose(pfRead);
//	pfRead = NULL;
//	return 0;
//}

//从键盘输入
//输出到屏幕
//键盘&屏幕都是外部设备

//键盘 - 标准输入设备 stdin
//屏幕 - 标准输出设备 stdout
//是一个程序默认打开的两个流设备
//stdin FILE*
//stdout FILE*
//stderr FILE*

int main()
{
	int ch = fgetc(stdin);
	fputc(ch, stdout);
	return 0;
}