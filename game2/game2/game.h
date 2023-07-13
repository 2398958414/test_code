#pragma once

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
#define EASY_COUNT 79

void InitBoard(char board[ROWS][COLS], int rows, int cols,char ret);
void Print(char board[ROWS][COLS], int row, int col);
void SetMine(char board[ROWS][COLS], int row, int col);
void Find_Mine(char mine[ROWS][COLS],char show[ROWS][COLS], int row, int col);
int Get_Mine_Count(char mine[ROWS][COLS] , int x, int y);