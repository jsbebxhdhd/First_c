#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void menu() {//�˵�
	printf("++++++++++++++++++++++++++++\n");
	printf("++++		1.Play		++++\n");
	printf("++++		0.Exit		++++\n");
	printf("++++++++++++++++++++++++++++\n");
}
void game() {

	//��ʼ����Ϸ���� ����������ά����

	char Miss[ROWM][COLM];//���صĽ��� �����²�Ķ�ά����	���׵ĵط��� 0 ��ʼ��ȫ��0
	char Show[ROWM][COLM];//չʾ�����Ľ��� ������ǰ�Ķ�ά����	ȫ��*����û̽��
	InitBoard(Miss, ROWM, COLM, '0');//
	InitBoard(Show, ROWM, COLM, '*');

	//DisPlayBoard(Miss, ROW, COL);//��ӡ����
	//DisPlayBoard(Show, ROW, COL);

	//������
	SetMint(Miss, ROW, COL);
	DisPlayBoard(Show, ROW, COL);
	//DisPlayBoard(Miss, ROW, COL);//��ӡ����



	//�Ų���
	FineBoard(Miss, Show, ROW, COL);







}

int main() {
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��>");
		scanf("%d", &input);
		switch (input) {
		case 1:
			game();
			break;
		case 0:
			printf("�˳�\n");
			break;
		default:
			printf("�������������ѡ��\n");

		}


	} while (input);
	return 0;
}