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
//	printf("%d＼n", a);*/
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
有 10 个学生，每个学生的数据包括学号（stu_num，6 个字符，如 s00101）、姓名（name，
8 个字符）、三门课程的成绩（score[3]，实型）及其平均分（avr，实型，初始时不赋值，）。
首先输入这 10 个学生的数据，然后再计算每个学生 3 门课程的平均分，存回 avr 中，并输
出第 6 号学生的所有信息。
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
		printf("请输入第%d个学生的信息\n", i + 1);
		printf("学号：\n");
		scanf("%s", ss[i].stu_num);
		printf("姓名：\n");
		scanf("%s", ss[i].name);
		printf("三门课程的成绩：\n");
		scanf("%f%f%f", ss[i].score[0], ss[i].score[1],ss[i].score[2]);

		ss[i].avr = (ss[i].score[0] + ss[i].score[1] + ss[i].score[2]) / 3;

	}
	printf("第6位学生的信息如下：\n");
	printf("学号：%s\n",ss[5].stu_num);
	printf("姓名：%s\n", ss[5].name);
	printf("三门课程的成绩：%f,%f,%f\n", ss[5].score[0], ss[5].score[1], ss[5].score[2]);
	printf("平均成绩为：%f", ss[5].avr);
	return 0;
}
//
//#include <stdio.h>
//
//#define NUM_STUDENTS 10 // 学生数量
//#define NUM_COURSES 3 // 课程数量
//
//// 学生结构体
//struct student {
//	char stu_num[7]; // 学号
//	char name[9]; // 姓名
//	float score[3]; // 课程成绩
//	float avr; // 平均分
//};
//
//int main(void) {
//	int i, j;
//	struct student students[NUM_STUDENTS]; // 学生数组
//
//	// 输入学生数据
//	for (i = 0; i < NUM_STUDENTS; i++) {
//		printf("输入第 %d 个学生的数据：\n", i + 1);
//		printf("学号：");
//		scanf("%s", students[i].stu_num);
//		printf("姓名：");
//		scanf("%s", students[i].name);
//		printf("三门课程的成绩：");
//		for (j = 0; j < NUM_COURSES; j++) {
//			scanf("%f", &students[i].score[j]);
//		}
//	}for (i = 0; i < NUM_STUDENTS; i++) {
//		float sum = 0.0; // 成绩总和
//		for (j = 0; j < NUM_COURSES; j++) {
//			sum += students[i].score[j];
//		}
//		students[i].avr = sum / NUM_COURSES; // 平均分
//	}
//
//	// 输出第 6 号学生的信息
//	printf("第 6 号学生的信息：\n");
//	printf("学号：%s\n", students[5].stu_num);
//	printf("姓名：%s\n", students[5].name);
//	printf("三门课程的成绩：");
//	for (j = 0; j < NUM_COURSES; j++) {
//		printf("%.2f ", students[5].score[j]);
//	}
//	printf("\n平均分：%.2f\n", students[5].avr);
//
//	return 0;
//}