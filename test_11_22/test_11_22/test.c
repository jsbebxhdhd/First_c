#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//int main() {
//
//	//��������
//	//char �� short�ڲ�������ʱ������������int����
//	//
//	char a = 1122;
//	char b = 123;
//	char c = a + b;
//	printf("%d\n", c);
//	return 0;
//}
#include<stdio.h>

//int main() {
//
//	//���¶ԳƷ�ת
//	int arr[][4] = {
//		{1,2,3,4},
//		{5,6,7,8},
//		{9,10,11,12},
//		{13,14,15,16}
//	};
//	int sz1 = sizeof(arr) / sizeof(arr[0]);//һά����ĳ���
//	int sz2 = sizeof(arr[0]) / sizeof(arr[0][0]);//��ά����ĳ���
//	int up = 0;
//	int down = sz1 - 1;
//	int tmp = 0;//���ڽ������м����
//	int left = 0;
//	while (up<down) {
//		
//		//����һ��
//		for (left = 0; left < sz2; left++) {
//			tmp = arr[up][left];
//			arr[up][left] = arr[down][left];
//			arr[down][left] = tmp;
//			
//		}
//		//������һ��֮�����м�ݽ�
//		up++;
//		down--;
//	}
//	for (int i = 0; i < sz1; i++) {
//		for (int j = 0; j < sz2; j++) {
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//���ҷ�ת
/*int main() {
	int arr[][4] = {
		{1,2,3,4},
		{5,6,7,8},
		{9,10,11,12},
		{13,14,15,16}
	};
	int sz1 = sizeof(arr) / sizeof(arr[0]);			//һά�еĳ���
	int sz2 = sizeof(arr[0]) / sizeof(arr[0][0]);	//��ά�еĳ���
	//printf("sz1 = %d sz2 = %d\n", sz1, sz2);
	int tmp = 0;//�м����
	for (int i = 0; i < sz1; i++) {
		int left = 0;
		int right = sz2 - 1;
		while (left < right) {
			tmp = arr[i][left];
			arr[i][left] = arr[i][right];
			arr[i][right] = tmp;
			left++;
			right--;
		}
	}
	for (int i = 0; i < sz1; i++) {
		for (int j = 0; j < sz2; j++) {
			printf("%d ", arr[i][j]);
		}
	printf("\n");
	}
	return 0;
}

*/

//�������ҷ�ת
int main() {
	int arr[][4] = {
		{1,2,3,4},
		{5,6,7,8},
		{9,10,11,12},
		{13,14,15,16}
	};
	int sz1 = sizeof(arr) / sizeof(arr[0]);			//һά�еĳ���
	int sz2 = sizeof(arr[0]) / sizeof(arr[0][0]);	//��ά�еĳ���
	for (int i = 0; i < sz1; i++) {
		for (int j = 0; j < sz2; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	printf("++++++++++++++++++++\n");


	int up = 0;
	int down = sz1 - 1;
	int tmp = 0;
	while(up<down){
		int left = 0;
		int right = sz2 - 1;
		while (left <= sz2 - 1) {
			tmp = arr[up][left];
			arr[up][left] = arr[down][right];
			arr[down][right] = tmp;
			left++;
			right--;
		}
		up++;
		down--;
	}

	for (int i = 0; i < sz1; i++) {
		for (int j = 0; j < sz2; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}