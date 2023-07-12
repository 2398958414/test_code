#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include "game.h"

menu()
{
	printf("*************************\n");
	printf("***  1.Play   0.Exit  ***\n");
	printf("*************************\n");
	}

void game()
{
	char ret = 0;
	char board[ROW][COL] = { 0 };
	InitBoard(board, ROW, COL);
	Print(board, ROW, COL);
	while (1)
	{
		UserMove(board, ROW, COL);
		Print(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		ComputerMove(board, ROW, COL);
		Print(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("���Ӯ\n");
	}
	else if (ret == '#')
	{
		printf("����Ӯ\n");
	}
	else
	{
		printf("ƽ��\n");
	}
}

int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
		{
			printf("�˳���Ϸ\n");
			break;
		}
		default:
		{
			printf("������������������!\n");
			break;
		}
		}
	}
	while(input);
	return 0;
}