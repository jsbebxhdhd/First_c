#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
//
//int main() {
//
//	//char c[4] = d[4] = "abc";
//	/*char str[10];
//	*str =  "acdds" ;*/
//	
//	/*char* a;
//	*a = "chain";*/
//
//	/*char* a;
//	a = "ands";*/
//
//	/*char s[5] = { 'a','b','c','d','e' };*/
//
//	char* s = "\ta\017bc";
//
//	printf("%d", strlen(s));
//
//
//
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//struct A
//{
//	int a; char b[10]; double c;
//};
//void f(struct A *t);
//int main()
//{
//	struct A a = { 1001,"ZhangDa",1980 }; 
//	f(&a);
//	printf("%d,%s,%-7.1f\n", a.a, a.b, a.c);
//	return 0;
//}
//void f(struct A *t)
//{
//	t->a = 1002;
//	strcpy(t->b, "ChangRong");
//	t->c = 1202.0;
//}
/*
�� C ���Ա�д���򣬶�ĳ���Ӳ�Ʒ���۹�˾Ա������������������롢ͳ�ơ����򡢴�
ӡ�����蹫˾�� 40 ��Ա�������۲�Ʒ�е��ӻ�������䡢�յ���ϴ�»����֣�Ա��������Ϣ��
���ź�������������ϢΪ�����ţ�int�����������ַ����������ӻ���float��������䣨float����
�յ���float����ϴ�»���float���������룬Ȼ�����ÿ�˵������۶float�����ٰ������۶��
�ߵ������������������Ľ����ÿһ��һλԱ�������ݣ���Ȼ�ǰ����š����������ӻ���
����䡢�յ���ϴ�»����������˳��
*/
#define R 40
struct str {
	int id;
	char name[20];
	float dian;
	float bing;
	float kong;
	float xi;
	float zong;
};
int main() {
	struct str a[R];
	int n = 0;
	int m = 0;
	struct str tmp;
	for (n = 0; n < R; n++) {
		printf("�������%dλԱ����Ϣ:\n", n + 1);
		printf("����:\n");
		scanf("%d", &a[n].id);
		printf("����:\n");
		scanf("%s", a[n].name);
		printf("���ӻ����۶�:\n");
		scanf("%f", &a[n].dian);
		printf("�������۶�:\n");
		scanf("%f", &a[n].bing);
		printf("�յ����۶�:\n");
		scanf("%f", &a[n].kong);
		printf("ϴ�»����۶�:\n");
		scanf("%f", &a[n].xi);
		a[n].zong = a[n].dian + a[n].bing + a[n].kong + a[n].xi;
	}
	for (n = 0; n < R; n++) {
		for (m = 0; m < R - 1 - n; m++) {
			if (a[m].zong < a[m+1].zong) {
				tmp = a[m];
				a[m] = a[m + 1];
				a[m + 1] = tmp;
			}

		}

	}
	for (n = 0; n < R; n++) {

		printf("id:%d ������%s ���ӣ�%f ���䣺%f �յ���%f ϴ�»���%f\n", a[n].id, a[n].name, a[n].dian, a[n].bing, a[n].kong, a[n].xi);
	}
	return 0;
}