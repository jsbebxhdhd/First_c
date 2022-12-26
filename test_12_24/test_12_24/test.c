#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
static char c;

int main() {
	int a[10] = { 0,1,2,3,4,5,6,7,8,9 };
	int* p = a;
	printf("%d", p[5]);
	return 0;
}