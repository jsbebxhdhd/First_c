#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main() {
	int i = 100;
	int j = 0;
	int add = 0;
	for (j = 0; j <= i; j++) {
		add += j;

	}
	printf("%d", add);
	return 0;
}