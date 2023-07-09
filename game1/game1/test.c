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
	//数组 - 存放棋盘信息
	char board[ROW][COL] = { 0 };//全部空格
	//初始化棋盘
	InitBoard(board, ROW, COL);
	//打印棋盘
	displayboard(board,ROW,COL);
}
int main()
{
	int input = 0;
	do
	{
		menu();
		printf("请输入:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入有误，请重新输入\n");
			break;
		}
	}
	while(input);
	return 0;
}