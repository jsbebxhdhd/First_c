#define _CRT_SECURE_NO_WARNINGS

//#include<stdio.h>
//main()
//{ 
//	int c[] = {23,1,56,234,7,0,34},i,j,t;
//
//for(i = 1; i < 7; i++)
//{
//	t = c[i]; j = i - 1;
//	while( j>= 0 && t > c[j])
//	{
//		c[j + 1] = c[j]; j--; 
//	}
//		c[j + 1] = t;
//}
//
//	for(i = 0; i < 7; i++)
//		printf("%d ",c[i]);
//	putchar('\n');
//}


//#include "stdio.h" 
//#include "string.h" 
//main()
//{ char a[30] = "nice to meet you!";
//strcpy(a + sizeof(a) / 2, "you");
//printf("%s\n", a); 
//}
//#include<stdio.h>
//#include<math.h>
//int main() {
//	printf("%d", 18 / 4 * sqrt(4.0) / 8);
//	/*int i = 0, k = 0;
//	for (i = 0, k = -1; k = 1; k++) printf("*****\n");*/
//	return 0;
//}

//fun(float x)
//{
//	float y;
//	y = 3 * x - 4;
//	return y;
//}
//#include<stdio.h>
//int p(int k, int a[])
//{
//	int m, i, c = 0;
//	for (m = 2; m <= k; m++) {
//		for (i = 2; i <= m; i++)
//			if (!(m % i)) break;
//		if (i == m) a[c++] = m;
//	}
//	return c;
//}
//#define MAXN 20
//main()
//{
//	int i, m, s[MAXN];
//	m = p(13, s);
//	for (i = 0; i < m; i++)
//		printf("%4d", s[i]);
//	printf("\n");
//}
//#include<stdio.h>
//void main(void)
//{
//	int k = 0;
//	char c = 'A';
//	do
//	{
//		switch (c++)
//		{
//		case 'A': k++; break;
//		case 'B': k--;
//		case 'C': k += 2; break;
//		case 'D': k = k % 2; continue;
//		case 'E': k = k * 10; break;
//		default: k = k / 3;
//		}
//		k++;
//	} while (c < 'G');
//	printf("k=%d\n", k);
//}
//#include <stdio.h>
//void main(void)
//
//{
//int a[10] = {1,9,18,24,-14,2,6,-16,4,5};
//int m1,m2, j;
//m1 = m2 = a[0];
//for (j = 1; j < 10; j++)
//{
//if (m1 > *(a + j)) m1 = *(a + j);
//if (m2 < *(a + j)) m2 = *(a + j);
//}
//printf("m1 = % d,m2 = % d", m1, m2);
//}
//   2   3   5   7  11  13

//#include<stdio.h>
//void main(void)
//{
//	int i, j, x = 0;
//	for (i = 0; i < 2; i++)
//	{
//		x++;
//		for (j = 0; j <= 3; j++)
//		{
//			if (j % 2) continue;
//			x++;
//		}
//		x++;
//	}
//	printf("x=%d\n", x);
//}

//#include<stdio.h>
//
//int main() {
//	int i = 0;
//	int j = 0;
//	int k = 0;
//	for(i = 1; i <= 4; i++) {
//		for (j = 1; j <= (4- i) ; j++) {
//			printf("  ");
//		}
//		for (k = 1; k <= (4 - j + 1); k++) {
//
//			printf(" *");
//		}
//		printf("\n");
//	}
//	for (i = 1; i <= 4; i++) {
//		for (j = 1; j <= (4 - i); j++) {
//			printf(" *");
//		}
//		/*for (k = 1; k <= (4 - j ); k++) {
//
//			printf("  ");
//		}*/
//		printf("\n");
//	}
//	return 0;
//}

/*有一字符串，包含 n 个字符。写一函数，
将此字符串中从第 m 个字符开始的全部字符
复制成为另一个字符串*/

//#include<stdio.h>
//
//int main() {
//	printf("\a");
//	int m = 0;
//	int n = 0;
//	int i = 0;
//	int j = 0;
//	printf("请输入m , n 的值\n");
//	scanf("%d%d", &m, &n);
//	char ch1[] = "abcdefghigkl";
//	char ch2[] = "1234567890";
//	int add = sizeof(ch2);
//	for (i = 0; i < 10; i++) {
//		ch1[m + i] = ch2[i];
//	}
//	ch1[m + i] = '\0';
//	printf("%s\n", ch1);
//	return 0;
//}
#include<malloc.h>
#include<stdio.h>
void fun(int* p1, int* p2, int* s)
{
	s = (int*)malloc(sizeof(int));
	*s = *p1 + *p2;
	free(s);
}

int main() {
	//int a[][4] = { 0,0 };
	/*char c = '\072';
	int i = 0;
	for (i = 0; ; i++) {
		printf("1 ");
	}*/
	/*int a = 1;
	int b = 40;
	int* q = &a;
	fun(&a, &b, q);
	printf("%d\n", *q);*/
	int c[][4] = { 1,2,3,4,5,6,7,34,213,56,62,3,23,12,34,56 };
	printf("%x,%x\n", c[2][2], * (* (c + 1) + 1));
	return 0;
	
}