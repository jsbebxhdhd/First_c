#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main() {
//	int input = 0;
//	
//	scanf("%d", &input);
//	//选择语句
//	if (input == 1)
//		printf("nb");
//	else
//		printf("bunb");
//	return 0;
//}
int Add(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;
}
int main() {

	//int num1 = 0;
	//int num2 = 0;
	//scanf("%d%d", &num1, &num2);
	////int sum = num1 + num2;//俩数和相加
	////函数的方式解决
	//int sum = Add(num1, num2);
	//printf("%d\n", sum);
	//return 0;
	int a = 0;
	int b = ~a;
	printf("%d", b);
}