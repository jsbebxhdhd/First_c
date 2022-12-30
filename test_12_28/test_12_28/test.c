#define _CRT_SECURE_NO_WARNINGS 1 

#include<stdio.h>
#include<string.h>
//int main() {
//	char ch1[20] = "abcdef";
//	puts(ch1);
//	char ch2[] = "ghijk";
//	puts(ch2);
//	strcat(ch1, ch2);
//	puts(ch1);
//	puts(ch2);
//
//	return 0;
//}

//void fun(char* w, int n)
//{
//	char t, * s1, * s2;
//	s1 = w;
//	s2 = w + n - 1;
//	while (s1 < s2) { 
//	t = *s1++;
//	*s1 = *s2--;
//	*s2 = t; }
//}
//int main()
//{
	/*char* p;
	char a[] = "1234567";
	p = a;
	fun(p, strlen(p));
	puts(p);*/

	/*int i = 0;
	for (i = 0; i <= 3; i++) {
		static i = 3;
		i *= 3;
		printf("%d,", i);

	}
	return 0;*/
	/*
	输入一串字符，分别统计统计字符串中 0-9 的出现
	*/
	/*char ch[] = "1a2b3c4d5e!@#";
	char* p = ch;
	int sum = 0;
	while (*p != '\0') {
		if (*p >= '0' && *p <= '9') {
			sum++;
		}
		p++;
	}
	printf("该字符串中0-9出现的次数：%d\n", sum);*/
	

//}
/*写一个函数实现两个字符串的比较。即自己实现库函数strcmp函数。
函数原型为int strcmp(char *p1,char *p2)
设 p1 指向字符串 s1，p2 指向字符串 s2。
要求当 s1=s2 时，返回值为 0；
若 s1!=s2,返回它们二者第一个不相同字符的 ASCII 码差值，
若 s1>s2 则输出正值，
如 s1<s2 则输出负值。*/
//int my_strcmp(char* p1, char* p2) {
//
//	while (*p1 != '\0') {
//		if (*p1 != *p2)
//			return *p1 - *p2;
//		p1++;
//		p2++;
//	}
//	if (*p1 != *p2)
//		return *p1 - *p2;
//	else
//		return 0;
//}
//
//int main() {
//	char s1[] = "abc";
//	char s2[] = "abcd";
//	char* p1 = s1 ;
//	char* p2 = s2;
//	
//	printf("%d", my_strcmp(p1, p2));
//
//	return 0;
//}

/*编写程序：给定某个正整数 n，求其素因子分解结果。所谓素因子分解就是找这个数的所有约
数并且约数是素数*/
int su(int i) {
	int n = 0;
	int count = 0;
	for (n = 2; n < i; n++) {
		if (i % n == 0) {
			return 0;
		}
	}
	return 1;
}
int main() {
	int n = 20;
	int i = 0;
	int count = 0;
	for (i = 2; i < n / 2; i++) {
		if (n % i == 0) {//约数
			if (su(i)) {//素数
				printf("%d ,",i);
				count++;
			}
		}
	}
	if (n != 1 && count == 0) {
		printf("%d ,", n);
	}
	if(n == 1){
		printf("1只有自身一个约数，并且它本身也不是素数");
	}
	return 0;
}