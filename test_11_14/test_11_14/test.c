#define _CRT_SECURE_NO_WARNINGS

/*
	��ӡ1 - 100 ֮������3�ı���
	*/
//#include<stdio.h>
//int main() {
//
//	
//	int i = 0;
//	for (i = 3; i <= 100; i += 3) {
//
//		printf("%d ", i);
//	}
//	return 0;
//}

/*
�ж��ǲ�������
1����4���� ���ܱ�100����������
2����400����Ҳ������
*/
//#include<stdio.h>
//int main() {
//	int year = 0;
//	for (year = 1000; year <= 2000; year++) {
//		if (year % 4 == 0 && year % 100) {
//
//				printf("%d ",year);
//		}
//		if (year % 400 == 0) {
//
//				printf("%d ", year);
//		}
//
//	}
//	
//	return 0;
//}

//#include <stdio.h>
//void main() {
//	int arr[4][5] = {
//	{ 1 , 2 , 3 , 4 , 5 },
//	{ 6 , 7 , 8 , 9 , 10 },
//	{ 11 , 12 , 13 , 14 , 15 },
//	{ 16 , 17 , 18 , 19 , 20 },
//	};
//	int i, j, t;
//	int rows = sizeof(arr) / sizeof(arr[0]);
//	int cols = sizeof(arr[0]) / sizeof(arr[0][0]);
//	for (i = 0; i < rows / 2; i++) {
//		for (j = 0; j < cols; j++) {
//			t = arr[rows - 1 - i][j];
//			arr[rows - 1 - i][j] = arr[i][j];
//			arr[i][j] = t;
//		}
//	}
//	for (i = 0; i < rows; i++) {
//		for (j = 0; j < cols; j++)
//			printf("%-5d", arr[i][j]);
//		printf("\n");
//	}
//}


//#include<stdio.h>
//int main() {
//	flag:
//	printf("hehe\n");
//	printf("hehe\n");
//	goto flag;
//	return 0;
//}



//�ػ�����

//system()			ִ��ϵͳ����
//shutown -s -t 60	�ػ�
//shutown -a		ȡ���ػ�

//#include<stdio.h>
//#include <stdlib.h>
//#include<string.h>
//
//int main() {
//	char input[] = { 0 };
//	system("shutdown -s -t 60");	//60s��ػ�
//damie:
//	printf("����Խ�����60s��ػ������롰������ȡ���ػ�=>\n");
//	scanf("%s", input);
//	if (strcmp(input, "������") == 0)
//	{
//		system("shutdown -a");
//		printf("�������� ֪���������ˡ�����");
//	}
//	else {
//		goto damie;
//	}
//	return 0;
//}

//������ඡ���
/*
(��������) ������(����){
	������;
}
*/
//#include<stdio.h>
//int Max(int x, int y) {
//	if (x > y) {
//		return x;
//	}
//	else {
//		return y;
//	}
//
//}
//int main() {
//	int a = 0;
//	int b = 10;
//	printf("%d",Max(a, b));
//
//	return 0;
//}

