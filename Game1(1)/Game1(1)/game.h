#pragma once

#define ROW 5
#define COL 5

#include <stdlib.h>
#include <time.h>

void InitBoard(char board[ROW][COL], int row, int col);
void Print(char board[ROW][COL], int row, int col);
void UserMove(char board[ROW][COL], int row, int col);
void ComputerMove(char board[ROW][COL], int row, int col);
char IsWin(char board[ROW][COL], int row, int col);
int IsFull(char board[ROW][COL], int row, int col);