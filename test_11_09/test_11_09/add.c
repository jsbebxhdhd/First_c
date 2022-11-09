#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
//声明变量 
//全局变量在别的文件里只有在声明之后才能使用
extern int g_val;
//int main() {
//	printf("test.c中的全局变量g_val = %d", g_val);
//	return 0;
//}