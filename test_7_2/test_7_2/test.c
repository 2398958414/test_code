#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

int main()
{
	//1
	int len = 0;
	len = (int)strlen("abc");
	printf("%d", len);
	//2
	//printf("%d", (int)strlen("abc"));
	return 0;
}