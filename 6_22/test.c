#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//�ṹ�� - struct
// ��/�� - ���Ӷ���
// �ˣ����֡���ߡ����䡢���֤
// �飺���������ߡ������硢���ۡ����
//���Ӷ��� - �ṹ�� - �Լ�������һ������

//����һ���ṹ������
//struct BOOK
//{
//	char name[20];//C���Գ������
//	short price;//40Ԫ
//};
//
//#include <string.h>
//int main()
//{
//	//���ýṹ������ - ���������͵Ľṹ�����
//	struct BOOK b1 = { "C���Գ������",40 };
//	//b1.name = "C++";//error:������������������ǵ�ַ
//	strcpy(b1.name, "C++");//strcpy - string copy - �ַ������� - �⺯�� - string.h
//	printf("%s\n", b1.name);
//	//b1.price = 15;
//	//struct BOOK* pb = &b1;
//	//����pb��ӡ�����ͼ۸�
//	//.  �ṹ�����.��Ա
//	//->  �ṹ��ָ��->��Ա
//	//printf("%s\n", pb->name);
//	//printf("%d\n", pb->price);
//
//	//printf("%s\n", (*pb).name);
//	//printf("%d\n", (*pb).price);
//	//printf("������%s\n", b1.name);
//	//printf("�۸�%dԪ\n", b1.price);
//	//b1.price = 25;
//	//printf("�޸ĺ�ļ۸�%dԪ\n", b1.price);
//	return 0;
//}

//int main()
//{
//	char ch = 'z';
//	char* un = &ch;
//	printf("%d\n", sizeof(un));
//	//*un = 'a';
//	//printf("%c\n", ch);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	//��һ�ֱ�����������ŵ�ַ�� - ָ�����
//	int* p = &a;//p��������int*
//	//printf("%p\n", &a);
//	//printf("%p\n", p);
//	*p = 30;//* - �����ò�����/��ӷ��ʲ����� - ��p���н����ò������ҵ�p��ָ��Ķ���a
//	printf("a = %d\n", a);
//	//&a - ȡ��ַ
//	//printf("%p\n", &a);//%p - ��ӡ��ַ
//	return 0;
//}

//#define ����ı�ʶ������
//#define MAX 200
//#define ����� - ������

//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}

//��Ķ���
//#define MAX(X,Y) (X>Y?X:Y)
//int main()
//{
//	//int a = MAX;
//	int a = 25;
//	int b = 20;
//	//�����ķ�ʽ
//	int max = Max(a, b);
//	printf("max = %d\n", max);
//	//��ķ�ʽ
//	int MAx = MAX(a ,b);
//	//MAx = (a>b?a:b)
//	printf("MAx = %d\n", MAx);
//	return 0;
//}


//1.static���ξֲ�����
//�ֲ��������������ڱ䳤
//2.static����ȫ�ֱ���
//�ı��˱����������� - ��̬��ȫ�ֱ���ֻ�����Լ����ڵ�Դ�ļ��ڲ�ʹ��
//3.static���κ���
//�ı��˺�������������
//�ⲿ�������� -> �ڲ���������

//extern - �����ⲿ����
//extern int Add(int, int);
//
//int main()
//{
//	int a = 10;
//	int b = 30;
//	int sum = Add(a, b);
//	printf("sum = %d\n", sum);
//	return 0;
//}

//int main()
//{
//	extern int g_val;
//	printf("g_val = %d\n", g_val);
//	return 0;
//}

//void test()
//{
//	static int a = 2;//a��һ����̬�ľֲ�����
//	a++;
//	printf("a = %d\n", a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}

//int main()
//{
//	//typedef - ���Ͷ��� - �����ض���
//	typedef unsigned int u_int;
//	unsigned int num = 10;
//	u_int num2 = 10;
//	return 0;
//}

//int main()
//{
//	//register int a = 10;//�����a����ɼĴ���������  register - �Ĵ�������
//	int a = 3;
//	a = 5;
//	//int����ı������з��ŵ�
//	// int �ȼ��� signed int
//	// unsigned int
//	unsigned int num = 1;
//	//struct - �ṹ��ؼ���
//	//union - ������/������
//	return 0;
//}

//int main()
//{
//	int a = 0;//�ֲ����� - �Զ�����auto
//	return 0;
//}

//int Add(int x,int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//
//int main()
//{
//	int arr[5] = { 0 };
//	arr[2];//[] - �±����ò�����
//	int a = 10;
//	int b = 20;
//	int sum = 0;
//	sum = Add(a, b);//() - �������ò����� 
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 30;
//	int max = 0;
//	max = (a > b ? a : b);
//	//�ȼ���
//	//if (a > b)
//	//	max = a;
//	//else
//	//	max = b;
//	return 0;
//}

//int main()
//{
//	//�� - 0
//	//�� - ��0
//	//&& - �߼���
//	//|| - �߼���
//	int a = 3;
//	int b = 4;
//	int c = a || b;
//	printf("c = %d\n", c);
//	return 0;
//}

//int main()
//{
//	int a = (int)3.14;//(����):ǿ������ת��  double --> int
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	//int b = a++;//����++����ʹ�ã���++
//	int b = ++a;//ǰ��++����++����ʹ��
//	printf("a = %d b = %d\n", a , b);
//	return 0;
//}

//int main()
//{
//	int a = 0; //4���ֽڣ�32��bitλ 
//	int b = ~a;  //b���з��ŵ�����  ~ - ����2���ƣ�λȡ��
//	//000000000000000000000000
//	//111111111111111111111111
//	//ԭ�� - ���� - ����
//	//�������ڴ��д洢��ʱ�򣬴洢���Ƕ����ƵĲ���
//	//111111111111111111111110
//	//100000000000000000000001
//	printf("%d\n", b); //ʹ�õġ���ӡ�����������ԭ��
//	return 0;
//}

//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int max = 0;
//	int num1 = 100;
//	int num2 = 20;
//	max = Max(num1, num2);
//	printf("Max = %d\n", max);
//	return 0;
//}

//int main()
//{
//	int num1 = 4;
//	int num2 = 10;
//	if (num1 > num2)
//		printf("max = %d\n", num1);
//	else
//		printf("max = %d\n", num2);
//	return 0;
//}