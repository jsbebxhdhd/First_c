#define _CRT_SECURE_NO_WARNINGS

#include"game.h"


//菜单
void menu() {
	printf("++++++++++++++++++++\n");
	printf("++++	1.play	++++\n");
	printf("++++	0.exit	++++\n");
	printf("++++++++++++++++++++\n");
}//菜单

//游戏
void game() {
	char ret = '0';
	//创建并初始化棋盘 
	//	没下的地方是空格 
	//	玩家下的是 #
	//	电脑走的是 *
	char board[ROW][COL];
	InitBoard(board, ROW, COL);

	//打印棋盘
	PrintBoard(board, ROW, COL);
	do {
		//玩家走
		playerBoard(board, ROW, COL);
		//走完之后打印数组 
		PrintBoard(board, ROW, COL);
		//并且判断是否继续
		//如果是玩家赢 返回 #
		//如果是电脑赢 返回 *
		//如果是平局   返回 P
		//如果是还未完 返回 C
		ret = IsWin(board, ROW, COL);
		if (ret != 'C') {
			break;
		}
		//电脑走
		ComputerBoard(board, ROW, COL);
		PrintBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'C') {
			break;
		}
	} while (1);
	if (ret == '#') {
		printf("玩家赢。。\n");
	}
	else if (ret == '*') {
		printf("电脑赢。。\n");
	}
	else {
		printf("平局。。\n");
	}
	PrintBoard(board, ROW, COL);
	
}

int main() {
	srand((unsigned int)time(NULL));
	int input = 0;
	do {
		menu();//菜单
		printf("请选择:>");
		scanf("%d", &input);
		switch (input) {
		case 1:
			game();
			//printf("玩游戏\n");
			break;
		case 0:
			printf("退出。。\n");
			break;
		default:
			printf("选择错误 请重新输入\n");
			break;
		}
	} while (input);
	return 0;
}