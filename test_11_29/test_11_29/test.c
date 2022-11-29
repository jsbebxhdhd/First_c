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
 中国有句俗语叫“三天打鱼两天晒网”。假设某人从某天起，开始“三天打鱼两天晒网”，
问这个人在以后的第 N 天中是“打鱼”还是“晒网”？
*/
//int main() {
//	int N = 0;
//	printf("请输入N的值:>\n");
//	scanf("%d", &N);
//	int n =N % 5;
//	if (n < 4 && n > 0) {
//		printf("第%d天是在打鱼\n", N);
//	}
//	else {
//		printf("第%d天是在晒网\n", N);
//
//	}
//	return 0;
//}

/*
编写函数，函数功能：删去一维数组中所有重复的数，只保留不同的数。输出主函数原来
元素和删除后的元素。数组中的数已按由小到大的顺序排列，函数返回删除后数组中数据的个数。
例如：一维数组中的数据是: 2 2 2 3 4 4 5 6 6 6 6 7 7 8 9 9 10 10 10。
删除后，数组中的内容应该是: 2 3 4 5 6 7 8 9 10。
*/
//int main() {
//	int arr[] = { 1,1,1,2,3,5,5,6,6,6,6,7,8,9,9,9 };
//
//	return 0;
//}


/*
某大学正在举行歌唱比赛，现有 10 位评委为学生评分，评分采用百分制。
按如下规则计算学生的最终得分：
	先计算评委的分数之和，减去分数中的最高分与最低分，再除以 8 得到
	学生的成绩。

	请输入 1 位同学的 10 个分数，计算和输出学生的最终得分。
下面给出了 main()函数，请将其他函数补充完整，即写出 input()、ssum()、smax()与 smin()函数的定义。
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
//	input(score, 10); //输入 10 个评委的评分
//	sum = ssum(score, 10); //计算 10 个评委的评分之和
//	max = smax(score, 10); //计算最高分
//	min = smin(score, 10); //计算最低分
//	aver = (sum - max - min) * 1.0 / (10 - 2); //计算学生的最终得分
//	printf("%f\n", aver); //输出学生的最终得分
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
			printf("其他\n");
		case 0:
			printf("0\n");
			a--;
	}
}