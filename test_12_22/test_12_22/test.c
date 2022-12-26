#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	/*int x, y, t;
	x = y = 3;
	t = ++x || ++y;
	printf("%d,%d,%d", x, y, t);*/
	//scanf("i=%d,j=%d", &i, &j);
	//printf("%d", sizeof(float));
	int a = 7;
	float x = 2.5;
	float y = 4.7;
	printf(" %f",x + a % 3 * (int)(x + y) % 2 / 4 ); 
	return 0;
}