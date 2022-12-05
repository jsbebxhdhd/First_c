#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

void InitBoard(char board[ROWM][COLM], int rowm, int colm, char s)
{//��ʼ������ 

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
	printf("---------------ɨ����Ϸ---------------\n");
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
	printf("---------------ɨ����Ϸ---------------\n");
}

void SetMint(char board[ROWM][COLM], int row, int col)//����
{
	int i = 0;
	int j = 0;
	int cound = THUN;//����10����

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
//�Ų���
void FineBoard(char miss[ROWM][COLM], char show[ROWM][COLM], int row, int col)
{
	int i = 0;
	int j = 0;//��������������
	int win = 0;
	while (win < row * col - THUN) {
		printf("�����ף�>");
		scanf("%d %d", &i, &j);
		//���ж�����ĺϷ���
		if (i >= 1 && i <= row && j >= 1 && j <= col)
		{
			//����ж��������û����
			if (miss[i][j] == '1')//����1 �ʹ�������1

			{
				printf("��ϲ�� �㱻ը���� ����\n");
				DisPlayBoard(miss, ROW, COL);//��ӡ����
				break;
			}
			else//Ҫ��û�� ���ڽ�������ʾ�����׵����� 
			{
				int thun = ThunTmp(miss, i, j);//дһ������ ����������ѡ���긽���׵�����
				show[i][j] = thun + '0';
				DisPlayBoard(show, ROW, COL);//��ӡ����
				win++;
			}
		}
		else {
			printf("������겻�Ϸ� ����������\n");
		}

	}
	if (win == row * col - THUN) {
		printf("��ϲ�㣡���׳ɹ�~~~~\nȫ������ ȫtm��������������\n");
	}

}