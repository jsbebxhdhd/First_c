#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main() {
	int a[][3] = {11,8,7,6,5,4,3,2,1 },*p = a[1]+1;
	printf("%d\n", p - *a);
	return 0;
}