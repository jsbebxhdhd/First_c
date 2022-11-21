#define _CRT_SECURE_NO_WARNINGS
//
//#include<stdio.h>
//int F(int n) {
//	if (n < 2) {
//		return n;
//	}
//	else {
//		return n & 1 + F(n >> 1);
//	}
//}
//int main() {
//	/*int i = 0;
//	scanf("我去你六九的%d", &i);
//
//	printf("%d", i);*/
//
//	
//	/*int n = 2;
//	int m = n << 33;
//	printf("%d", n);*/
//	//按位操作符	只能是整数
//
//	//int a = 3;
//	//int b = 5;
//	////按位(二进制位)与
//	////全1出1 有0出0
//	//int c = a & b;
//	////按位或
//	////有1出1 全0出0
//	//int d = a | b;
//	////按位异或
//	////相同为0 相异为1
//	//int e = a ^ b;
//	//printf("与%d 或%d 异或%d", c, d, e);
//
//	//不使用第三变量 使得a = 3; b = 5;交换
//	//a = 3 b = 5 =>a = 5 b =3
//	/*int a = 3;
//	int b = 5;
//	printf("a = %d b = %d\n", a, b);
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("a = %d b = %d\n", a, b);*/
//	//这样写有一个缺陷 就是 数字不能太大 如果太大就很容易超出范围
//	
//	//可以这样写
//	/*int a = 3;
//	int b = 5;
//	printf("a = %d b = %d\n", a, b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("a = %d b = %d\n", a, b);*/
//
//	//求一个整数存储在内存中的二进制中1的个数
//	/*int n = 15;
//	int n_num = 0;
//	n_num = F(n);
//	printf("n:%d", n_num);
//	return 0;*/
//
//	/*short a = 3;
//	int b = 10;
//	printf("%d\n",sizeof(a = b+2));	//2
//	printf("%d\n",a);				//3
//	//！！sizeof括号中的内容不参与运算
//	*/
//
//	//按位取反
//	/*int a = 1;
//	int b = ~a;
//	printf("%d", b);*/
//	return 0;
//}

#include<stdio.h>

int main() {
	int a = 10;
	int* p = &a;
	*p = 20;
	printf("%d\n", a);
	printf("%d\n", *p);

	//指针变量不论类型(无论是int 还是 cher) 都是4位或者8位
	return 0;
}