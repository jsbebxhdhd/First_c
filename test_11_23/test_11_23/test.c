#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//
//int main() {
	//ָ�����


	/*int a = 10;
	int* pa = &a;
	*pa = 20;
	printf("%d ", *pa);
	printf("%d ", a);*/
	//int* pa;
	//char* pc;
	//float* pf;
	//printf("%d\n", sizeof(pa));//4�ֽ�
	//printf("%d\n", sizeof(pc));//4
	//printf("%d\n", sizeof(pf));//4
	//��ͬ���͵����ݵ�ָ��ռ��Сһ������4�ֽ�

	//int a = 0x12345678;
	//char* pc = &a;
	//*pc = 0;

	//int arr[10] = { 0 };
	//int* p = arr;
	//char* pc = arr;
	//printf("%p\n", p);//0115F960
	//printf("%p\n", pc);//0115F960

	//printf("%p\n", p+1);//0115F964
	//printf("%p\n", pc+1);//0115F961


	/*int arr[10] = { 0 };
	char* p = arr;
	int i = 0;
	printf("%p\n", p);
	for (i = 0; i < 10; i++) {
		*(p + i )= i;
	}
	for (i = 0; i < 10; i++) {
		printf("%d ", arr[i]);
	}*/
	

	//Ұָ��
	//1.ָ��δ��ʼ��
	//2.Խ�����
	//3.�ڴ�ռ䱻�ͷ�
	 
	
	////�����p����һ��Ұָ��
	//int* p;//p�Ǿֲ����� �ֲ�����ʼ���Ļ���Ĭ�������ֵ
	//*p = 20;	//�Ƿ������ڴ���
	 
	//Խ�����
	/*int arr[10] = { 0 };
	int* p = arr;
	int i = 0;
	for (i = 0;  i <= 10; i++) {
		*p = i;
		p++;
	}*/

	//��α���Ұָ�룻
	//1.ָ���ʼ��
	//	int* p = NULL;
	//2.С��Խ�����
	//3.ָ��ָ��ռ䱻�ͷ� ��ʱ�ÿ�(NULL)
	//4.ָ��ʹ��֮ǰ������Ч�Լ��
//
//	return 0;
//}

//int main() {
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", &arr[9] - &arr[0]);//9
/*}*/	//ָ���ָ������ǰ�� �� ��ָ��ָ��ͬһ��ռ�

//int main() {
//	//�����ָ��
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++) {
//		printf("%p <==> %p\n", (p + i), &arr[i]);
//	}
//	return 0;
//}

//int main() {
//	//����ָ��
//	int i = 10;
//	int* p = &i;
//	int** pa = &p;
//	printf("%d\n", **pa);
//	printf("%p\n", p);
//	printf("%p\n", pa);
//	return 0;
//}

//int main() {
//	//int arr[10] = { 0 };//��������
//	//char ch[10] = { '0' };//�ַ�����
//	//int* p[10];//����ָ������
//	char a = -1;
//	signed char b = -1;
//	unsigned char c = -1;
//	printf("a=%d,b=%d,c=%d", a, b, c);
//	return 0;
//
//	return 0;
//}

//�ж�a[N][N]�Ƿ�������Խ��߶Գƣ���б�������Գ���� 1 ��������� 0 ��
//int main() {
//	int arr[4][4] = {
//		{1,2,3,4},
//		{5,6,7,8},
//		{9,10,11,12},
//		{13,14,15,16}
//	};
//
//	return 0;
//}

//#include <stdio.h>
//#define N 4
//void main() {
//	int i, j, flag = 1;
//	int arr[N][N] = {
//		{1,5,9,13},
//		{5,6,10,14},
//		{9,10,11,15},
//		{13,14,15,16}
//	};
//	for (i = 0; i < N; i++)
//		for (j = 0; j < i; j++)
//			if (arr[i][j] != arr[j][i]) {
//				flag = 0;
//				break;
//			}
//	if (flag == 1)
//		printf("1");
//	else
//		printf("0");
//}
#include <stdio.h>
#define N 4
int main() {
	int i, j, flag = 1;
	int arr[N][N] = {
		{16,15,14,13},
		{15,11,10,14},
		{14,10,11,15},
		{13,14,15,16}
	};
	for (i = 0; i < N; i++) {
		for (j = 0; j < i; j++) {
			if (arr[i][j] != arr[N - 1 - j][N - 1 - i]) {
				flag = 0;
				break;
			}
		}
	}
	if (flag == 1)
		printf("1");
	else
		printf("0");
	return 0;
}