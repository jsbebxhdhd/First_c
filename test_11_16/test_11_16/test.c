#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//
//void print(int n)
//{
//	if (n > 9) {
//		print(n / 10);
//	}
//	printf("%d ", n%10 );
//}
//int main() {
//	//�ݹ�
//	//����һ������ֵ���޷��ţ�������˳���ӡ����ÿһλ��
//	//���磺
//	//���룺1234����� 1 2 3 4.
//	unsigned int num = 0;
//	scanf("%d", &num);
//	print(num);
//	return 0;
//}

//#include<stdio.h>
//int Strlen(char* arr) {
//	if (*arr != '\0') {
//		return 1 + Strlen(arr + 1);
//	}
//	else {
//		return 0;
//	}
//}
// //��д��������������ʱ���������ַ����ĳ��ȡ�
//int main() {
//	char arr[] = "abcd";
//	// a b c d \0
//	int len = Strlen(arr);
//	printf("%s �ĳ����ǣ�%d ", arr, len);
//	return 0;
//}
#include<stdio.h>
//
//int Fib(int n) {
//	if (n <= 2) {
//		return 1;
//	}
//	else {
//		return Fib(n - 1) + Fib(n - 2);
//	}
//	
//}
////��ӡ����n��쳲�������
//int main() {
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("��%d��쳲���������%d", n, ret);
//	return 0;
//}


//��ŵ��
//�����ֵ n����n�����ӣ� a��A�� �� b��B�� ��c:C��  A������ B�� �� C��

void HanoiTar(int n, char* a, char* b, char* c) {
	//���ֻ��һ�� ��ֱ�Ӵ�A �� C.
	if (1 == n) {
		printf("%s => %s\n", a, c);
	}
	else {//��֮ ���>=2�� �Ͱ�������һ�㿴��һ�� ��ʣ�µĿ���һ��.
		//�Ȱ�������Ľ���C����A����B��.
		HanoiTar(n - 1, a, c, b);
		//�ٰ�������һ�� ��A��C��.
		printf("%s => %s\n", a, c);
		//����B����������н���A���ƶ���C��.
		HanoiTar(n - 1, b, a, c);

	}

}

int main() {
	int n = 0;
	printf("���������:\n");
	scanf("%d", &n);
	char a[] = "A";
	char b[] = "B";
	char c[] = "C";

	HanoiTar(n, a, b, c);
	return 0;

}