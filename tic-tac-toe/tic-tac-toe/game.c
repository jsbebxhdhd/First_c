#define _CRT_SECURE_NO_WARNINGS
#include"game.h"

//初始化棋盘
void InitBoard(char board[ROW][COL], int row, int col) {
	int x = 0;
	int y = 0;
	for (x = 0; x < row; x++) {
		for (y = 0; y < col; y++) {
			board[x][y] = ' ';
		}
	}

}

//打印棋盘 
void PrintBoard(char board[ROW][COL], int row, int col) {
	int x = 0;
	int y = 0;
	for (x = 0; x < row; x++) {
		for (y = 0; y < col; y++) {
			printf(" %c ", board[x][y]);
			if (y < col - 1) {
				printf("|");
			}
		}
		printf("\n");
		for (y = 0; y < col; y++) {
			if (x < row - 1) {
				printf("---");
				if (y < col - 1) {
					printf("|");
				}
			}
		}
		printf("\n");

	}
}

//玩家下棋
void playerBoard(char board[ROW][COL], int row, int col) {
	//俩数用来接收玩家走的坐标
	int x = 0;
	int y = 0;
	do {
		printf("玩家走:> ");
		scanf("%d %d", &x, &y);
		//判断坐标的合法性
		if (x > 0 && x <= row && y > 0 && y <= col) {
			//判断坐标是否已经被占用
			if (board[x-1][y-1] == ' ') {
				board[x-1][y-1] = '#';
				break;
			}
			else {
				printf("该坐标已经被占用， 请重新输入。。\n");
			}
		}
		else {
			printf("坐标不合法， 请重新输入。。\n");
		}
	}while (1);
}

//电脑下棋
void ComputerBoard(char board[ROW][COL], int row, int col) {
	printf("电脑走:> \n");
	do {
		
		//随机生成电脑的坐标
		int x = rand() % row;
		int y = rand() % col;
		//判断坐标的合法性
		if (x >= 0 && x < row && y >= 0 && y < col) {
			//判断坐标是否已经被占用
			if (board[x][y] == ' ') {
				board[x][y] = '*';
				break;
			}
		}
	} while (1);
}


//判断是否平局
//如果是平局   返回 P
//如果是还未完 返回 C
char IsFull(char board[ROW][COL], int row, int col) {
	int x = 0;
	int y = 0;
	for (x = 0; x < row; x++) {
		for (y = 0; y < col; y++) {
			//遍历之后还有空位就继续
			if (board[x][y] == ' ') {
				return 'C';
			}
		}
	}
	return 'P';
}
//如果是玩家赢 返回 #
//如果是电脑赢 返回 *
//如果是平局   返回 P
//如果是还未完 返回 C
char IsWin(char board[ROW][COL], int row, int col) {

	//判断行相等
	for (int x = 0; x < row; x++) {
		if (board[x][0] == board[x][1] && board[x][1] == board[x][2] && board[x][0] != ' ') {
			return board[x][0];
		}
	}

	//判断列相等
	for (int x = 0; x < row; x++) {
		if (board[0][x] == board[1][x] && board[1][x] == board[2][x] && board[0][x] != ' ') {
			return board[0][x];
		}
	}

	//判断对角线相等
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ') {
		return board[1][1];
	}
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ') {
		return board[1][1];
	}

	//判断是否平局
	char n = IsFull(board, row, col);
	return n;
}
