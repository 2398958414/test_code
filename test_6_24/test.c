#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

//int main()
//{
//	int ch = 0;
//	//ctrl + z
//	//EOF - end of file -> -1
//	while ((ch = getchar()) != EOF)
//		putchar(ch);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	while (i<=9)
//	{
//				if (i == 3)
//			//break;//������ֹѭ�� 
//			continue;//��������ѭ������ת��while�����жϲ���
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}

//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1:
//		m++;
//	case 2:
//		n++;
//	case 3:
//		switch (n)
//		{//switch����Ƕ��ʹ��
//		case 1:
//			n++;
//		case 2:
//			m++;
//			n++;
//			break;
//		}
//	case 4:
//		m++;
//		break;
//	default:
//		break;
//	}
//	printf("m = %d, n = %d\n", m, n);
//	return 0;
//}

int main()
{
	int day = 0;
	int n = 1;
	scanf("%d", &day);
	switch (day)
	{
	case 1:
		if (1 == n)
			printf("haha\n");
	case 2:
	case 3:
	case 4:
	case 5:
		printf("������\n");
		break;
	case 6:
	case 7:
		printf("��Ϣ��\n");
		break;
	default:
		printf("��������");
	}
	return 0;
}

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("����һ\n");
//		break;
//	case 2:
//		printf("���ڶ�\n");
//		break;
//	case 3:
//		printf("������\n");
//		break;
//	case 4:
//		printf("������\n");
//		break;
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//		printf("������\n");
//		break;
//	case 7:
//		printf("������\n");
//		break;
//	}
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		if (i % 2 == 1)
//			printf("%d ", i);
//		i++;
//	}
//	return 0;
//}

//int main()
//{
//	int num = 3;
//	if (5 == num)//���ڷ�������
//		printf("hehe\n");
//	//if (num = 4)// = ��ֵ��== �ж����
//	//	printf("�Ǻ�\n");
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//	{
//		if (b == 2)
//			printf("hehe\n");
//		else
//			printf("haha\n");
//	}
//	return 0;
//}

//int main()
//{
//	int age = 10;
//	if (age < 18)
//	{
//		printf("δ����\n");
//		printf("δ�����˽�̸ֹ����\n");
//	}
//	else
//	{
//		if (age >= 18 && age < 28)
//			printf("����\n");
//		else if (age >= 28 && age < 50)
//			printf("׳��\n");
//		else if (age >= 50 && age < 90)
//			printf("����\n");
//		else
//			printf("������\n");
//	}

	//int age = 100;
	//if (age < 18)
	//	printf("δ����\n");
	//else if (age >= 18 && age < 28)
	//	printf("����\n");
	//else if (age >= 28 && age < 50)
	//	printf("׳��\n");
	//else if (age >= 50 && age < 90)
	//	printf("����\n");
	//else
	//	printf("������\n");

	//if (age < 18)
	//	printf("δ����\n");
	//else
	//	printf("�ѳ���\n");
	//if(age<18)
	//	printf("δ����\n");
//	return 0;
//}