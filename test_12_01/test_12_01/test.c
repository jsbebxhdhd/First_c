#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

//int main() {
//	char* s2 = "D Oove China!", ** s1 = &s2;
//	char* s3,c,*s4 = "W";
//	s3 = &c; 
//	*s3 = 'H';
//	s2 = s2 + 2;
//	printf("% s\t% c\t% s\t% c\n",s2,*s3,s4,**s1);
//	return 0;
//}

//#include <stdio.h>
//int fun()
//{
//	auto int x = 1;
//	static int y = 1;
//	x += 3;
//	y += 3;
//	return x + y;
//}
//void main()
//{
//	int a, b;
//	a = fun();
//	b = fun();
//	printf("%d,%d\n", a, b);
//}

//#include <stdio.h>
//#define MAX(x,y) x<y?x:y
//int main()
//{
//	int a = 5, b = 2, c = 3, d = 3, t;
//	t = MAX(a + b, c + d) * 10;
//	printf("%d\n", t);
//}

//#define ADD(x, y) ((x)+(y))
//#include <stdio.h>
//int main()
//{
//    int sum = ADD(2, 3);
//    printf("sum = %d\n", sum);
//
//    sum = 10 * ADD(2, 3);
//    printf("sum = %d\n", sum);
//
//    return 0;
//}

//#include <stdio.h>
//void main()
//{
//	int a = 15, b = 21, m = 0;
//	switch (a % 3)
//	{
//	case 0: m++; break;
//	case 1:m++;
//			switch (b % 2)
//			{
//			default: m++;
//			case 0:m++; break;
//			}
//	}
//	printf("%d\n", m);
//}

//#include <stdio.h>
//void main()
//{
//	int i, p[3][3] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 }, * p1[3], (*p2)[3];
//	for (i = 0; i < 3; i++) 
//		p1[i] = p[i];
//	p2 = p;
//	for (i = 1; i < 3; i++)
//		printf("%d,%d\n", *(*(p1 + i) + 1) + 1, *(*++p2 + 1) + 1);
//}
//#define N 30
//#include "stdio.h" 
//#include "string.h"
//typedef struct student
//{
//	int number;
//	char name[8];
//	char addr[20];
//}STU;
//void main()
//{
//	STU stu[N], * p;
//	int count = 0;
//	printf("input students information:\n");
//	for (p = stu; p < stu+N; p++)
//	{
//		scanf("%d %s %s",&p->number,p->name,p->addr );
//		if (strcmp((*p).addr,"�ӱ�"))
//			count++;
//	}
//	printf("%d come from �ӱ�\n",count );
//}
/*
��1�����һ������ int isprime(int x)�����ж�һ�������Ƿ�Ϊ���������������� 1������
�� 0��(������ֻ�ܱ� 1 ������������������)
��2�����������е��� isprime ��������� 100~999 ֮��ĸ�λ����Ϊ 3 ����������������
�ĺ�
*/
//#include<stdio.h>
//int isprime(int x) {
//	int n = 2;
//	
//	for (n = 2; n < x; n++) {
//		if (x % n == 0) {
//			break;
//
//		}
//	}
//	if (n == x) {
//		return 1;
//	}
//	return 0;
//}
//int main() {
//	int i = 100;
//	int add = 0;
//	for (i = 100; i < 1000; i++) {
//		int j = 0;
//		if (i % 10 == 3 && isprime(i)) {
//			printf("%d ", i);
//			add += i;
//		}
//	}
//	printf("\n100~999 ֮��ĸ�λ����Ϊ 3 �����������ĺ�=%d",add);
//	return 0;
//}

/*
��д������ s=a+aa+aaa+aaaa+aa...a ��ֵ������ a ��һ�����֡�
���� 2+22+222+2222+22222(��ʱ���� 5 �������)��a ��b��������ɼ�������
*/

#include<stdio.h>

int main() {
	int a = 0;
	int b = 0;
	int c = 0;
	printf("������a��b��ֵ:>\n");
	scanf("%d%d", &a, &b);
	int add = 0;
	for (int i = 1; i <= b; i++) {
		c = c * 10 + a;
		add += c ;
		printf("%d ", c);
	}
	printf("\n%d", add);
	return 0;
}