#define _CRT_SECURE_NO_WARNINGS
#include"game.h"

//��ʼ������
void InitBoard(char board[ROW][COL], int row, int col) {
	int x = 0;
	int y = 0;
	for (x = 0; x < row; x++) {
		for (y = 0; y < col; y++) {
			board[x][y] = ' ';
		}
	}

}

//��ӡ���� 
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

//�������
void playerBoard(char board[ROW][COL], int row, int col) {
	//����������������ߵ�����
	int x = 0;
	int y = 0;
	do {
		printf("�����:> ");
		scanf("%d %d", &x, &y);
		//�ж�����ĺϷ���
		if (x > 0 && x <= row && y > 0 && y <= col) {
			//�ж������Ƿ��Ѿ���ռ��
			if (board[x-1][y-1] == ' ') {
				board[x-1][y-1] = '#';
				break;
			}
			else {
				printf("�������Ѿ���ռ�ã� ���������롣��\n");
			}
		}
		else {
			printf("���겻�Ϸ��� ���������롣��\n");
		}
	}while (1);
}

//��������
void ComputerBoard(char board[ROW][COL], int row, int col) {
	printf("������:> \n");
	do {
		
		//������ɵ��Ե�����
		int x = rand() % row;
		int y = rand() % col;
		//�ж�����ĺϷ���
		if (x >= 0 && x < row && y >= 0 && y < col) {
			//�ж������Ƿ��Ѿ���ռ��
			if (board[x][y] == ' ') {
				board[x][y] = '*';
				break;
			}
		}
	} while (1);
}


//�ж��Ƿ�ƽ��
//�����ƽ��   ���� P
//����ǻ�δ�� ���� C
char IsFull(char board[ROW][COL], int row, int col) {
	int x = 0;
	int y = 0;
	for (x = 0; x < row; x++) {
		for (y = 0; y < col; y++) {
			//����֮���п�λ�ͼ���
			if (board[x][y] == ' ') {
				return 'C';
			}
		}
	}
	return 'P';
}
//��������Ӯ ���� #
//����ǵ���Ӯ ���� *
//�����ƽ��   ���� P
//����ǻ�δ�� ���� C
char IsWin(char board[ROW][COL], int row, int col) {

	//�ж������
	for (int x = 0; x < row; x++) {
		if (board[x][0] == board[x][1] && board[x][1] == board[x][2] && board[x][0] != ' ') {
			return board[x][0];
		}
	}

	//�ж������
	for (int x = 0; x < row; x++) {
		if (board[0][x] == board[1][x] && board[1][x] == board[2][x] && board[0][x] != ' ') {
			return board[0][x];
		}
	}

	//�ж϶Խ������
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ') {
		return board[1][1];
	}
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ') {
		return board[1][1];
	}

	//�ж��Ƿ�ƽ��
	char n = IsFull(board, row, col);
	return n;
}
