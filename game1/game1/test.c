#define _CRT_SECURE_NO_WARNINGS 1


#include <string.h>
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

void game()
{
	//���� - ���������Ϣ
	char board[ROW][COL] = { 0 };//ȫ���ո�
	//��ʼ������
	InitBoard(board, ROW, COL);
	//��ӡ����
	displayboard(board,ROW,COL);
}
int main()
{
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