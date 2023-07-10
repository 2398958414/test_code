#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

#include "game.h"

void menu()
{
	printf("***************************\n");
	printf("****  1.play   0.exit  ****\n");
	printf("***************************\n");
}

//   |   |   
//---|---|---
//   |   |   
//---|---|---
//   |   |   

//������Ϸ�㷨��ʵ��
void game()
{
	char ret = 0;
	//���� - ���������Ϣ
	char board[ROW][COL] = { 0 };//ȫ���ո�
	//��ʼ������
	InitBoard(board, ROW, COL);
	//��ӡ����
	displayboard(board,ROW,COL);
	//����
	while (1)
	{
		//�������
		PlayerMove(board, ROW, COL);
		displayboard(board, ROW, COL);
		//�ж�����Ƿ��ʤ
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
			break;
		//��������
		ComputerMove(board, ROW, COL);
		displayboard(board, ROW, COL);
		//�жϵ����Ƿ��ʤ
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
			break;
	}
	if (ret == '*')
		printf("���Ӯ\n");
	else if (ret == '#')
		printf("����Ӯ\n");
	else
		printf("ƽ��\n");
}

int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("������:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("������������������\n");
			break;
		}
	}
	while(input);
	return 0;
}