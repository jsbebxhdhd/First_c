#define _CRT_SECURE_NO_WARNINGS

//#include<stdio.h>
//
//int p = 1;
//int F(int x)
//{
//	p *= x;
//	return p;
//}
//int main() {
//	int i = F(2);
//	int j = F(3);
//	printf("%d %d\n", i, j);
//	return 0;
//}

//#include<stdio.h>
/*
 �й��о�����С������������ɹ����������ĳ�˴�ĳ���𣬿�ʼ�������������ɹ������
����������Ժ�ĵ� N �����ǡ����㡱���ǡ�ɹ������
*/
//int main() {
//	int N = 0;
//	printf("������N��ֵ:>\n");
//	scanf("%d", &N);
//	int n =N % 5;
//	if (n < 4 && n > 0) {
//		printf("��%d�����ڴ���\n", N);
//	}
//	else {
//		printf("��%d������ɹ��\n", N);
//
//	}
//	return 0;
//}

/*
��д�������������ܣ�ɾȥһά�����������ظ�������ֻ������ͬ���������������ԭ��
Ԫ�غ�ɾ�����Ԫ�ء������е����Ѱ���С�����˳�����У���������ɾ�������������ݵĸ�����
���磺һά�����е�������: 2 2 2 3 4 4 5 6 6 6 6 7 7 8 9 9 10 10 10��
ɾ���������е�����Ӧ����: 2 3 4 5 6 7 8 9 10��
*/
//int main() {
//	int arr[] = { 1,1,1,2,3,5,5,6,6,6,6,7,8,9,9,9 };
//
//	return 0;
//}


/*
ĳ��ѧ���ھ��и質���������� 10 λ��ίΪѧ�����֣����ֲ��ðٷ��ơ�
�����¹������ѧ�������յ÷֣�
	�ȼ�����ί�ķ���֮�ͣ���ȥ�����е���߷�����ͷ֣��ٳ��� 8 �õ�
	ѧ���ĳɼ���

	������ 1 λͬѧ�� 10 ����������������ѧ�������յ÷֡�
��������� main()�������뽫��������������������д�� input()��ssum()��smax()�� smin()�����Ķ��塣
*/
//#include <stdio.h>
//void input(int sc[],int n) {
//	
//	int x = 0;
//	for (x = 0; x < n; x++) {
//		scanf("%d", &sc[x]);
//	}
//}
//
//int ssum(int sc[], int n) {
//	int sum = 0;
//	int x = 0;
//	for (x = 0; x < n; x++) {
//		sum += sc[x];
//		
//	}
//	return sum;
//}
//
//
//int smax(int sc[], int n) {
//	int x = sc[0];
//	int y = 0;
//	for (y = 1; y < n; y++) {
//		if (x < sc[y]) {
//			x = sc[y];
//		}
//	}
//	return x;
//}
//
//int smin(int sc[], int n) {
//	int x = sc[0];
//	int y = 0;
//	for (y = 1; y < n; y++) {
//		if (x > sc[y]) {
//			x = sc[y];
//		}
//	}
//	return x;
//}
//
//
//
//int main()
//{
//	int score[10], max, min, sum;
//	float aver;
//	input(score, 10); //���� 10 ����ί������
//	sum = ssum(score, 10); //���� 10 ����ί������֮��
//	max = smax(score, 10); //������߷�
//	min = smin(score, 10); //������ͷ�
//	aver = (sum - max - min) * 1.0 / (10 - 2); //����ѧ�������յ÷�
//	printf("%f\n", aver); //���ѧ�������յ÷�
//}

//#include <stdio.h>
//void main()
//{
//	char* p, s[6];
//	int n;
//	p = s;
//	gets(p);
//	n = *p - '0';
//	while (*(++p) != '\0')
//		n = n*8+*p-'0';
//	printf("%d\n", n);
//	return 0;
//}
#include<stdio.h>

//#include<stdio.h>
//void main()
//{
//	char* s, c[80];
//	s = c;
//	gets(s);
//	while (*(++s) != '\0')
//		if (*s == 'a') 
//			break;
//  		else { 
//			s++; 
//			gets(s); 
//		}
//	puts(s);
//}

void main()
{
	/*int v1 = 0, v2 = 0;
	char ch;
	while ((ch = getchar()) != '\n')
		switch (ch)
		{
		case 'a':
		case 'h':
		default:v1++;
		case '0':v2++;
		}
	printf("%d,%d\n", v1, v2);*/

	int a = 3;
	switch (a) {
		case 1:
			
		case 2:
			
		default:
			printf("����\n");
		case 0:
			printf("0\n");
			a--;
	}
}