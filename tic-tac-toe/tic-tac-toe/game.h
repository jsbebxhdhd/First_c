#pragma once

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define ROW 3 //��
#define COL 3 //��

//��ʼ������
void InitBoard(char board[ROW][COL], int row, int col);

//��ӡ���� 
void PrintBoard(char board[ROW][COL], int row, int col);

//�������
void playerBoard(char board[ROW][COL], int row, int col);

//��������
void ComputerBoard(char board[ROW][COL], int row, int col);

//�ж��Ƿ����
char IsWin(char board[ROW][COL], int row, int col);
