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
用 C 语言编写程序，对某电子产品销售公司员工的销售收入进行输入、统计、排序、打
印。假设公司有 40 名员工，销售产品有电视机、电冰箱、空调和洗衣机四种，员工自身信息有
工号和姓名。输入信息为：工号（int）、姓名（字符串）、电视机（float）、电冰箱（float）、
空调（float）和洗衣机（float）销售收入，然后计算每人的总销售额（float），再按总销售额从
高到低排序，最后输出排序后的结果，每一行一位员工的数据，仍然是按工号、姓名、电视机、
电冰箱、空调和洗衣机销售收入的顺序。
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
		printf("请输入第%d位员工信息:\n", n + 1);
		printf("工号:\n");
		scanf("%d", &a[n].id);
		printf("姓名:\n");
		scanf("%s", a[n].name);
		printf("电视机销售额:\n");
		scanf("%f", &a[n].dian);
		printf("冰箱销售额:\n");
		scanf("%f", &a[n].bing);
		printf("空调销售额:\n");
		scanf("%f", &a[n].kong);
		printf("洗衣机销售额:\n");
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

		printf("id:%d 姓名：%s 电视：%f 冰箱：%f 空调：%f 洗衣机：%f\n", a[n].id, a[n].name, a[n].dian, a[n].bing, a[n].kong, a[n].xi);
	}
	return 0;
}