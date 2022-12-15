#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>
int main() {
	/*double x;
	x = 218.82631;
	printf("%6.2e\n", x);	*/

	//char ch = '\77';
	char ch[] = "I \'m jerry.";
	printf("%d", strlen(ch));
	return 0;
}