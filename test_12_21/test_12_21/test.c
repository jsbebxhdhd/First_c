#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

//int main() {
//	//int a, i; a = 0;
//	/*for(i = 1; i<5; i++)
//	{ switch(i)
//	{ case 0:
//	case 3:a += 2;
//	case 1:
//	default:a += 5;
//	case 2:a += 3;
//	
//	}
//	}
//	printf("%d��n", a);*/
//	int a = 0;
//	int b = 0;
//	if (a > 0)
//		printf("a>0\n");
//		if (b>0) {
//			printf("a>0,b>0\n");
//		}
//		else {
//			printf("a>0,b<=0\n");
//		}
//	else {
//		printf("a<=0");
//		}
//	return 0;
//}
//void fun(int* a, int* b)
//{
//	int* k = 0;
//	k = a;
//	a = b; 
//	b = k;
//}
//main()
//{
//	int a = 3, b = 6;
//	int *x = a, *y = b;
//fun(x,y);
//printf("%d %d\n", a, b);
////printf("%d %d\n", *x, *y);
//}
//#include <stdio.h>
//main()
//{
//	int a, b, k = 4, m = 6, * p = &k, * q = &m;
//	a = p == &m;
//	b = (-*p) / (*q) +7;
//	printf("a=%d\n", a);
//	printf("b=%d\n", b);
//}
//#include<stdio.h>
//#include<stdlib.h>
//int fun(int n)
//{
//	int* p;
//		p = (int*)malloc(sizeof(int)); 
//		*p = n;
//		return *p;
//}
//main()
//{
//	int a;
//	a = fun(10);
//	printf("%d\n", a + fun(10));
//}
//#define N 5
//int fun(int* s, int a, int n)
//{
//	int j; *s = a; j = n;
//	while (a != s[j]) j--;
//	return j;
//}
//main()
//{
//	int s[N + 1]; int k;
//	for (k = 1; k <= N; k++)
//		s[k] = k + 1;
//	printf("%d\n", fun(s, 4, N));
//}
//#include "stdio.h"
//struct s { int n; char* c; }*p;
//char d[] = { 'a','b','c','d','e' };
//struct s a[] = { 10,&d[0],20,&d[1],30,&d[2],40,&d[3],50,&d[4] };
//#include <stdio.h>
//main()
//{
//	/*p = a;
//	printf("%d\n", ++p->n);
//	printf("%d\n", (++p)->n);
//	printf("%c\n", ++(*p->c));*/
//	//int a, b;
//	//if (a > 0)
//	//{
//	//	if (b > 0)
//	//	{
//	//		// do something
//	//	}
//	//	else
//	//	{
//	//		// do something else
//	//	}
//	//}
//	float a, b, c;
//	scanf("%f%f%f", &a, &b, &c);
//	printf("%f %f %f\n", a, b, c);
//
//}
//#include "stdio.h" 
//main()
//{
//int b[2][3] = { 1,3,5,7,9,11 };
//int* a[2][3];
//int i, j;
//int** p, m;
//for (i = 0; i < 2; i++)
//	for (j = 0; j < 3; j++)
//		a[i][j] = *(b + i) + j;
//p = a[0];
//for (m = 0; m < 6; m++)
//{
//	printf("%4d", **p);
//	p++;
//}
//}
//#include "stdio.h" 
//#include "string.h" 
//main()
//{
//	char s[80], sub[80];
//	int n;
//		gets(s);
//	gets(sub);
//	printf("%d\n", count(s, sub));
//}
//int count(char* p, char* q)
//{
//	int m, n, k, num = 0;
//	for (m = 0; p[m]; m++)
//		for (n = m, k = 0; q[k] == p[n]; k++, n++)
//			if (q[k+1] == '\0')
//			{
//				num++; break;
//			}
//	return (num);
//}
/*
�� 10 ��ѧ����ÿ��ѧ�������ݰ���ѧ�ţ�stu_num��6 ���ַ����� s00101����������name��
8 ���ַ��������ſγ̵ĳɼ���score[3]��ʵ�ͣ�����ƽ���֣�avr��ʵ�ͣ���ʼʱ����ֵ������
���������� 10 ��ѧ�������ݣ�Ȼ���ټ���ÿ��ѧ�� 3 �ſγ̵�ƽ���֣���� avr �У�����
���� 6 ��ѧ����������Ϣ��
*/
struct stu {
	char stu_num[7];
	char name[9];
	float score[3];
	float avr;
};
int main() {
	struct stu ss[10] = { 0 };
	int i = 0;
	int j = 0;
	for (i = 0; i < 10; i++) {
		printf("�������%d��ѧ������Ϣ\n", i + 1);
		printf("ѧ�ţ�\n");
		scanf("%s", ss[i].stu_num);
		printf("������\n");
		scanf("%s", ss[i].name);
		printf("���ſγ̵ĳɼ���\n");
		scanf("%f%f%f", ss[i].score[0], ss[i].score[1],ss[i].score[2]);

		ss[i].avr = (ss[i].score[0] + ss[i].score[1] + ss[i].score[2]) / 3;

	}
	printf("��6λѧ������Ϣ���£�\n");
	printf("ѧ�ţ�%s\n",ss[5].stu_num);
	printf("������%s\n", ss[5].name);
	printf("���ſγ̵ĳɼ���%f,%f,%f\n", ss[5].score[0], ss[5].score[1], ss[5].score[2]);
	printf("ƽ���ɼ�Ϊ��%f", ss[5].avr);
	return 0;
}
//
//#include <stdio.h>
//
//#define NUM_STUDENTS 10 // ѧ������
//#define NUM_COURSES 3 // �γ�����
//
//// ѧ���ṹ��
//struct student {
//	char stu_num[7]; // ѧ��
//	char name[9]; // ����
//	float score[3]; // �γ̳ɼ�
//	float avr; // ƽ����
//};
//
//int main(void) {
//	int i, j;
//	struct student students[NUM_STUDENTS]; // ѧ������
//
//	// ����ѧ������
//	for (i = 0; i < NUM_STUDENTS; i++) {
//		printf("����� %d ��ѧ�������ݣ�\n", i + 1);
//		printf("ѧ�ţ�");
//		scanf("%s", students[i].stu_num);
//		printf("������");
//		scanf("%s", students[i].name);
//		printf("���ſγ̵ĳɼ���");
//		for (j = 0; j < NUM_COURSES; j++) {
//			scanf("%f", &students[i].score[j]);
//		}
//	}for (i = 0; i < NUM_STUDENTS; i++) {
//		float sum = 0.0; // �ɼ��ܺ�
//		for (j = 0; j < NUM_COURSES; j++) {
//			sum += students[i].score[j];
//		}
//		students[i].avr = sum / NUM_COURSES; // ƽ����
//	}
//
//	// ����� 6 ��ѧ������Ϣ
//	printf("�� 6 ��ѧ������Ϣ��\n");
//	printf("ѧ�ţ�%s\n", students[5].stu_num);
//	printf("������%s\n", students[5].name);
//	printf("���ſγ̵ĳɼ���");
//	for (j = 0; j < NUM_COURSES; j++) {
//		printf("%.2f ", students[5].score[j]);
//	}
//	printf("\nƽ���֣�%.2f\n", students[5].avr);
//
//	return 0;
//}