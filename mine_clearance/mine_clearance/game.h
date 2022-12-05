#pragma once
#include <stdio.h>
#include <string.h>
#include<stdlib.h>
#include<time.h>


#define ROW 9
#define COL 9
#define THUN 10
#define ROWM ROW+2
#define COLM COL+2


void InitBoard(char board[ROWM][COLM], int rowm, int colm, char s);
void DisPlayBoard(char board[ROWM][COLM], int row, int col);

void SetMint(char board[ROWM][COLM], int row, int col);//²¼À×

void FineBoard(char miss[ROWM][COLM], char show[ROWM][COLM], int row, int col);//ÅÅ²éÀ×
