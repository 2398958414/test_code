#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

//int main()
//{
//	char input[20] = { 0 };
//	//system() - ִ��ϵͳ����
//	system("shutdown -s -t 60");//shutdown -s(�ػ�) -t(ʱ�䣩 60(��)
//	while (1)
//	{
//		printf("��ע�⣬��ĵ��Խ���1���Ӻ�ػ���������룺����������ȡ���ػ�\n������>:");
//		scanf("%s", input);
//		if (strcmp(input, "������") == 0)
//		{
//			system("shutdown -a");//shutdown -a��ȡ���ػ�
//			break;
//		}
//	}
//
//	return 0;
//}

//int main()
//{
//	char input[20] = { 0 };
//	//system() - ִ��ϵͳ����
//	system("shutdown -s -t 60");//shutdown -s(�ػ�) -t(ʱ�䣩 60(��)
//again:
//		printf("��ע�⣬��ĵ��Խ���1���Ӻ�ػ���������룺����������ȡ���ػ�\n������>:");
//		scanf("%s", input);
//		if (strcmp(input, "������") == 0)
//			system("shutdown -a");//shutdown -a��ȡ���ػ�
//		else
//			goto again;
//	return 0;
//}

//int main()
//{
//	printf("hello SZTU\n");
//	goto again;
//	printf("���\n");
//	again:
//	printf("haha\n");
//	return 0;
//}

//void game()
//{
//	int guess = 0;
//	//1.ϵͳ���������
//	int ret = 0;
//	//ʱ��� - �������ǰ��ʱ����������ʼʱ��(1970.1.1.0:0:0)�Ĳ�ֵ - ��****����
//	//time_t time(time_t *timer)   time_t�����Ͼ��ǳ�����
//	ret = rand()%100+1;//�������1-100֮��
//	//RAND_MAX - 32767
//	//printf("%d\n", ret);
//	//2.������
//	while (1)
//	{
//		printf("�������:>");
//		scanf("%d", &guess);
//		if (guess < ret)
//			printf("��С��\n");
//		else if (guess > ret)
//			printf("�´���\n");
//		else
//		{
//			printf("��ϲ��,�¶���\n");
//			break;
//		}
//	}
//}
//
//void menu()
//{
//	printf("**********************************\n");
//	printf("****   1. play      0.exit    ****\n");
//	printf("**********************************\n");
//}
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("������;>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//		{
//			game();
//			break;
//		}
//		case 0:
//		{
//			printf("�˳���Ϸ\n");
//			break;
//		}
//		default:
//		{
//			printf("�������\n");
//			break;
//		}
//		}
//	}
//	while(input);
//	return 0;
//}

