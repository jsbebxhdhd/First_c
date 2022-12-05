#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

void InitBoard(char board[ROWM][COLM], int rowm, int colm, char s)
{//初始化棋盘 

	int i = 0;
	int j = 0;
	for (i = 0; i < rowm; i++) {
		for (j = 0; j < colm; j++) {
			board[i][j] = s;
		}
	}
}
void DisPlayBoard(char board[ROWM][COLM], int row, int col) {
	int i = 0;
	int j = 0;
	printf("---------------扫雷游戏---------------\n");
	for (i = 0; i <= row; i++) {

		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{

			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf("---------------扫雷游戏---------------\n");
}

void SetMint(char board[ROWM][COLM], int row, int col)//布雷
{
	int i = 0;
	int j = 0;
	int cound = THUN;//布置10个雷

	while (cound) {
		i = rand() % row + 1;
		j = rand() % col + 1;

		if (board[i][j] == '0')
		{
			board[i][j] = '1';
			cound--;
		}
	}
}
int ThunTmp(char miss[ROWM][COLM], int i, int j) {
	return  miss[i - 1][j - 1] +
		miss[i - 1][j] +
		miss[i - 1][j + 1] +
		miss[i][j - 1] +
		miss[i][j + 1] +
		miss[i + 1][j - 1] +
		miss[i + 1][j] +
		miss[i + 1][j + 1] - 8 * '0';


}
//排查雷
void FineBoard(char miss[ROWM][COLM], char show[ROWM][COLM], int row, int col)
{
	int i = 0;
	int j = 0;//用来存放玩家坐标
	int win = 0;
	while (win < row * col - THUN) {
		printf("请排雷：>");
		scanf("%d %d", &i, &j);
		//先判断坐标的合法性
		if (i >= 1 && i <= row && j >= 1 && j <= col)
		{
			//其次判断这个点有没有雷
			if (miss[i][j] == '1')//等于1 就代表有雷1

			{
				printf("恭喜你 你被炸死了 ！！\n");
				DisPlayBoard(miss, ROW, COL);//打印数组
				break;
			}
			else//要是没雷 就在界面上显示附近雷的数量 
			{
				int thun = ThunTmp(miss, i, j);//写一个函数 用来返回所选坐标附近雷的数量
				show[i][j] = thun + '0';
				DisPlayBoard(show, ROW, COL);//打印数组
				win++;
			}
		}
		else {
			printf("这个坐标不合法 请重新输入\n");
		}

	}
	if (win == row * col - THUN) {
		printf("恭喜你！排雷成功~~~~\n全是运气 全tm是运气！！！！\n");
	}

}