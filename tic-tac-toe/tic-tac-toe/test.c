#define _CRT_SECURE_NO_WARNINGS

#include"game.h"


//�˵�
void menu() {
	printf("++++++++++++++++++++\n");
	printf("++++	1.play	++++\n");
	printf("++++	0.exit	++++\n");
	printf("++++++++++++++++++++\n");
}//�˵�

//��Ϸ
void game() {
	char ret = '0';
	//��������ʼ������ 
	//	û�µĵط��ǿո� 
	//	����µ��� #
	//	�����ߵ��� *
	char board[ROW][COL];
	InitBoard(board, ROW, COL);

	//��ӡ����
	PrintBoard(board, ROW, COL);
	do {
		//�����
		playerBoard(board, ROW, COL);
		//����֮���ӡ���� 
		PrintBoard(board, ROW, COL);
		//�����ж��Ƿ����
		//��������Ӯ ���� #
		//����ǵ���Ӯ ���� *
		//�����ƽ��   ���� P
		//����ǻ�δ�� ���� C
		ret = IsWin(board, ROW, COL);
		if (ret != 'C') {
			break;
		}
		//������
		ComputerBoard(board, ROW, COL);
		PrintBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'C') {
			break;
		}
	} while (1);
	if (ret == '#') {
		printf("���Ӯ����\n");
	}
	else if (ret == '*') {
		printf("����Ӯ����\n");
	}
	else {
		printf("ƽ�֡���\n");
	}
	PrintBoard(board, ROW, COL);
	
}

int main() {
	srand((unsigned int)time(NULL));
	int input = 0;
	do {
		menu();//�˵�
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input) {
		case 1:
			game();
			//printf("����Ϸ\n");
			break;
		case 0:
			printf("�˳�����\n");
			break;
		default:
			printf("ѡ����� ����������\n");
			break;
		}
	} while (input);
	return 0;
}