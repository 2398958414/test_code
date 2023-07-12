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
		printf("玩家赢\n");
	}
	else if (ret == '#')
	{
		printf("电脑赢\n");
	}
	else
	{
		printf("平局\n");
	}
}

int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
		{
			printf("退出游戏\n");
			break;
		}
		default:
		{
			printf("输入有误，请重新输入!\n");
			break;
		}
		}
	}
	while(input);
	return 0;
}