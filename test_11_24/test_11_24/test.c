#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

//struct Stu {
//	char name[12];
//	int age;
//	double Shengao;
//}s1 = {"������",15,180.0};
//
//int main() {
////	//�ṹ��
////	printf("%s %d %lf", s1.name, s1.age, s1.Shengao);
//
//
//	//���Լ���
//
//	return 0;
//}
//#define N  5
//
//int main() {
//	//�ֱ����N�׷���a�������Խ�����Ԫ��֮�͡�
//	int a[N][N] = {
//		{1,2,3,4,1},
//		{5,0,7,1,9},
//		{9,10,0,12,13},
//		{13,1,1,1,17},
//		{1,18,19,20,1}
//	};
//	int sum = 0;
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < N; i++) {
//		sum += a[i][i];
//		if (i != N - 1 - i) {
//			sum += a[i][N - 1 - i];
//		}
//	}
//	printf("sum = %d", sum);
//
//	return 0;
//}
// 

/*
#define N  5
int main() {
	
//.N�׷���a����ת�ã�������л�����ķ���a��
	int a[N][N] = {
		{1,2,3,4,1},
		{5,0,7,1,9},
		{9,10,0,12,13},
		{13,1,1,1,17},
		{1,18,19,20,1}
	};
	int i = 0;
	int j = 0;
	int tmp = 0;
	for (i = 0; i < N; i++) {
		for (j = 0; j < i; j++) {
			tmp = a[i][j];
			a[i][j] = a[j][i];
			a[j][i] = tmp;
		}
	}
	return 0;
}
*/
//#define N  5
//int main() {
////N�׷���a���Ϸ���a��ת�ô���ڷ���b�У��������b��
//	int a[N][N] = {
//		{1,2,3,4,1},
//		{5,0,7,1,9},
//		{9,10,0,12,13},
//		{13,1,1,1,17},
//		{1,18,19,20,1}
//	};
//	int i = 0;
//	int j = 0;
//	int b[N][N] = { 0 };
//	for (i = 0; i < N; i++) {
//		for (j = 0; j < N; j++) {
//			b[i][j] = a[i][j] + a[j][i];
//		}
//	}
//	for (i = 0; i < N; i++) {
//		for (j = 0; j < N; j++) {
//			printf("%-5d", b[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
