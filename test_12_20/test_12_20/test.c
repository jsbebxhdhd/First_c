#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

#define pr(ar) printf("%d ",ar);
#include<string.h>

//int* p;
//main()
//{
//	int x = 1, y = 2, z = 3;
//	p = &y;
//	fun(x + z, &y);
//	printf("(1) %d %d %d\n", x, y, *p);
//}
//fun(int x, int* y)
//{
//	int z = 4; 
//	*p = *y + z;
//	x = *p - z;
//	printf("(2) %d %d %d\n", x, *y, *p);
//}
//void swap(int* a, int* b)
//{
//	int* t;
//	t = a;
//	a = b;
//	b = t;
//}
//main()
//{
//	int x = 3, y = 5, * p = &x, * q = &y;
//	swap(p, q);
//	printf("%d %d\n", *p, *q);
//}
//main()
//{
//	printf("%d ", sizeof(long));
//	printf("%d ", sizeof(int));
//	printf("%d ", sizeof(long long ));
//	char* p = "abcdefgh", * r;
//	long* q;
//	q = (long*)p;
//	q++;
//	r = (char*)q;
//	printf("%s\n", r);
//}
//main()
//{
//	int a[4][4], i, j, k;
//	for (i = 0; i < 4; i++)
//		for (j = 0; j < 4; j++) a[i][j] = i - j;
//
//	for (i = 0; i < 4; i++)
//	{
//		printf("\n");
//		for (j = 0; j < 4; j++) printf("%4d", a[i][j]);
//	}
//	printf("\n+++++++++++++++++++++++++\n");
//	for (i = 1; i < 4; i++)
//		for (j = i + 1; j < 4; j++)
//		{
//			k = a[i][j]; a[i][j] = a[j][i]; a[j][i] = k;
//		}
//	for (i = 0; i < 4; i++)
//	{
//		printf("\n");
//		for (j = 0; j < 4; j++)
//			printf("%4d", a[i][j]);
//	}
//	printf("\n");
//}

//main()
//{
//	int x = 1, y = 1;
//	while (y <= 5)
//	{
//		if (x >= 10) break;
//		if (x % 2 == 0)
//			
//		{ x += 5; continue; }
//		x -= 3; y++;
//	}
//	printf("%d,%d", x, y);
//}

//main()
//{
//	int n, i, j, k;
//	for (n = 100; n<1000;n++)
//	{
//		i = n / 100;
//		j = (n - i*100)/10;
//		k = n % 10;
//		if (i*i*i+j*j*j+k*k*k == n) printf("%d\n", n);
//	}
//}

//#include "stdio.h" 
//#include "string.h" 
//main()
//{
//char* t, s[8];
//int n;
//t = s;
//gets(t);
//n = *t - '0';
//while (*++t != '\0') n = n * 8 + *t - '0';
//printf("%d\n", n);
//}


//main()
//{
//	int a[20] = { 1,10,20,30,40,50,60,70,80,90 }, x, i, p;
//	scanf("%d", &x);
//	for (i = 0; i <= 10; i++) printf("%5d\n", a[i]);
//	printf("\n++++++++++++++++\n");
//	for (i = 0, p = 10; i < 10; i++)
//		if (x < a[i]) { p = i;break ; }
//	for (i = 9; i >= p; i--) a[i + 1] = a[i];
//	a[p] = x;
//	for (i = 0; i <= 10; i++) printf("%5d\n", a[i]);
//	printf("\n");
//}




//输入一行文字，找出其中大写字母、小写字母、空格、数字和其他字符各有多少

//int main() {
	//int DZ = 0;//大写字母
	//int XZ = 0;//小写字母
	//int KG = 0;//空格
	//int SZ = 0;//数字
	//int QT = 0;//其他

	//char a[1000] ="0";
	//gets(a);
	//char* t = a;
	//while (*t != '\0') {
	//	if (*t >= 'A' && *t <= 'Z') {
	//		DZ++;
	//		
	//	}
	//	if (*t >= 'a' && *t <= 'z') {
	//		XZ++;
	//		
	//	}
	//	if (*t == ' ' || *t == '\t') {
	//		KG++;
	//		
	//	}
	//	if (*t >= '0' && *t <= '9') {
	//		SZ++;
	//		
	//	}
	//	t++;
	//}
	//printf("大写字母：%d \n 小写字母：%d \n 空格：%d \n 数字：%d \n", DZ, XZ, KG, SZ);
	/*int a = 8;
	int b = 5, c;
	char d = 'A';
	c = a / b + d % a + 0.5;
	*/
	//for (int a = 'a'; a <= 'z'; printf("%c", a++));
	/*char* p = "abcde\0fghjik\0";
	printf("%d\n ", strlen(p));*/
	/*int m = 10, n = 20;
	char* format = "%s, m=%d, n=%d\n";
	m *= n;
	printf(format, "m*=n", m, n);*/
	/*int i, n;
	for (i = 0; i < 8; i++)
	{
		n = rand() % 5;
		switch (n)
		{
		case 1:
		case 3:printf("%d\n", n); break;
		case 2:
		case 4:printf("%d\n", n); continue;
		case 0:exit(0);
		}
		printf("%d\n", n);
	}*/
//	printf("%-5s", "ass");
//	return 0;
//}

//union pw
//{
//	int i;
//	char ch[2];
//}a;
//main()
//{	a.ch[0] = 13; 
//	a.ch[1] = 0; 
//	printf("%d\n",a.i); 
//}

#include <stdio.h> 
#include <string.h>
//main()
//{
//	char s[80];
//		char* t;
//		char max;
//		char* w;
//	t = s;
//	w = s;
//	gets(s);
//	max = *(t++);
//	while (*t != '\0')
//	{
//		if (max < *t)
//		{
//			max = *t; w = t;
//		}
//		t++;
//	}
//		t = w;
//	while (t!=s)
//	{
//		*t = *(t - 1);
//		t--;
//	} *t = max;
//	puts(t);
//}
//int main() {
//	int i = 0;
//	long a[10];
//	scanf("%s", a);
//	printf("%c", a);
//	return 0;
//}
main()
{
	int x[4][4] = { 0 }, n = 0, i, j;
	for (j = 0; j < 4; j++)
		for (i = 3; i >= j; i--)
		{
			n++;x[i][j] = n ;
		}
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j <= i; j++)
			printf("%5d", x[i][j]);
		printf("\n");
	}
}