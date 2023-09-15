#define _CRT_SECURE_NO_WARNINGS 1

#include <stddef.h>
#include <stdio.h>

//#include <>
//#include ""


//struct S
//{
//	char c1;
//	int a;
//	char c2;
//};
//
//#define OFFSETOF(struct_name,member_name) (int)&(((struct_name*)0)->member_name)
//
//int main()
//{
//	//struct S s;
//	printf("%d\n", OFFSETOF(struct S, c1));
//	printf("%d\n", OFFSETOF(struct S, a));
//	printf("%d", OFFSETOF(struct S, c2));
//	return 0;
//}

int main()
{
	union s
	{
		short k;
		char i[2];
	}*p,a;
	p = &a;
	p->i[0] = 0x38;
	p->i[1] = 0x39;
	printf("%x", a.k);
	return 0;
}