#define _CRT_SECURE_NO_WARNINGS 


#include<stdio.h>


int fun(int i) {

	i = i < 3 ? i++ : 0;
	return i;

}
int main() {
	int i = 5;
	int k = 0;
	k = fun(i / 2);
	printf("%d\n", k);
	k = fun(i = i / 2);
	printf("%d\n", k);
	k = fun(i / 2);
	printf("%d\n", k);

	return 0;
}