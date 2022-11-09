#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	//sizeof - 关键字 - 操作符 - 计算数据类型或者变量所占的空间的大小
	//数据类型
	//字符类型 char
	char a = 'a';
	printf("%c\n", a);
	//短整型 short
	short b = 1;
	printf("%d\n", b);
	//整形 int 打印一个整数对应的格式 - %d
	int age = 20;
	//长整型 long
	long c = 100;
	printf("%d\n", c);
	//单精度浮点数 float
	float d = 10.4;
	printf("%f\n", d);
	//双精度浮点数 double 
	double e = 10.42;
	printf("%10.1f\n", e);
	//更长的整形 long long

	
	//printf("%d\n", sizeof(char));		//1bit
	//printf("%d\n", sizeof(short));		//2
	//printf("%d\n", sizeof(int));		//4
	//printf("%d\n", sizeof(long));		//4
	//printf("%d\n", sizeof(long long));	//8
	//printf("%d\n", sizeof(float));		//4
	//printf("%d\n", sizeof(double));		//8
	//printf("%d\n", sizeof(long double));//8
	return 0;

}