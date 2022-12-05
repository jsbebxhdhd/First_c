#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void menu() {//菜单
	printf("++++++++++++++++++++++++++++\n");
	printf("++++		1.Play		++++\n");
	printf("++++		0.Exit		++++\n");
	printf("++++++++++++++++++++++++++++\n");
}
void game() {

	//初始化游戏界面 ——创建二维数组

	char Miss[ROWM][COLM];//隐藏的界面 ——下层的二维数组	非雷的地方是 0 初始化全成0
	char Show[ROWM][COLM];//展示出来的界面 ——眼前的二维数组	全是*代表没探的
	InitBoard(Miss, ROWM, COLM, '0');//
	InitBoard(Show, ROWM, COLM, '*');

	//DisPlayBoard(Miss, ROW, COL);//打印数组
	//DisPlayBoard(Show, ROW, COL);

	//布置雷
	SetMint(Miss, ROW, COL);
	DisPlayBoard(Show, ROW, COL);
	//DisPlayBoard(Miss, ROW, COL);//打印数组



	//排查雷
	FineBoard(Miss, Show, ROW, COL);







}

int main() {
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("请选择：>");
		scanf("%d", &input);
		switch (input) {
		case 1:
			game();
			break;
		case 0:
			printf("退出\n");
			break;
		default:
			printf("输入错误，请重新选择\n");

		}


	} while (input);
	return 0;
}