#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//#define  INT_PTR int*
//typedef int* int_ptr;
//
//INT_PTR a, b;//a��������int*,b��������int
//int_ptr c, d;//c,d�����Ͷ���ָ������

//10101010101010101010101010101010
//10110011010110100011110010100011 
//01010101010101010101010101010101

#define SWAP_bit(n) (((n & 0x55555555)<<1)+((n&0xaaaaaaaa)>>1))
int main()
{
	int n = 0;
	scanf("%d", &n);
	printf("%d", SWAP_bit(n));
	return 0;
}