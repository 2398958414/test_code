#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	char a = 1;
	printf("%u\n", sizeof(a));
	printf("%u\n", sizeof(+a));
	printf("%u\n", sizeof(!a));
	return 0;
}

//int main()
//{
//	char a = 3;
//	//00000000000000000000000000000011
//	//00000011 - a
//	char b = 127;
//	//00000000000000000000000001111111
//	//01111111 - b
//
//	//a��b������
//	//��������:���ݱ������������͵ķ���λ����
//	//00000000000000000000000000000011
//	//00000000000000000000000001111111
//
//	char c = a + b;
//	//00000000000000000000000010000010
//	//10000010 - c
//	//11111111111111111111111110000010 - ����
//	//11111111111111111111111110000001 - ����
//	//10000000000000000000000001111110 - ԭ��
//	//-126
//	printf("%d", c);
//	return 0;
//}

////����һ���ṹ������ - struct stu
//struct stu
//{
//	//��Ա����
//	char name[20];
//	int age;
//	char id[20];
//};
//int main()
//{
//	int a = 0;
//	//ʹ��struct stu���ʹ�����һ��ѧ������s1,�����г�ʼ��
//	struct stu s1 = { "����",18,"20230714" };
//	struct stu* ps = &s1;
//	printf("%s\n", ps->name);
//	printf("%d\n", ps->age);
//	//�ṹ��ָ��->��Ա��
//
//	//printf("%s\n", (*ps).name);
//	//printf("%d\n", (*ps).age);
//
//	//printf("%s\n", s1.name);
//	//printf("%d\n", s1.age);
//	//printf("%s\n", s1.id);
//	//�ṹ�����.��Ա��
//	return 0;
//}

//int get_max(int x, int y)
//{
//	return x > y ? x : y;
//}
//
//int main()
//{
//	int a = 30;
//	int b = 20;
//	//���ú���ʱ��()�Ǻ������ò�����
//	int max = get_max(a, b);
//	printf("max = %d", max);
//	return 0;
//}

//int main()
//{
//	int a[10] = { 0 };
//	a[4] = 10;//[] - �±����ò�����;2�������� - ������+������
//	return 0;
//}

//int main()
//{
//	int a = 20;
//	int b = 30;
//	int max = 0;
//	if (a > b)
//		max = a;
//	else
//		max = b;
//	max = (a > b ? a : b);
//
//	//if (a > 5)
//	//	b = 3;
//	//else
//	//	b = -3;
//
//	//b=(a > 5 ? 3 : -3);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	//printf("%d\n", ++a);
//	printf("%d\n", a++);
//	printf("%d", a);
//	return 0;
//}