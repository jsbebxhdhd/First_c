#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//
//void print(int n)
//{
//	if (n > 9) {
//		print(n / 10);
//	}
//	printf("%d ", n%10 );
//}
//int main() {
//	//递归
//	//接受一个整型值（无符号），按照顺序打印它的每一位。
//	//例如：
//	//输入：1234，输出 1 2 3 4.
//	unsigned int num = 0;
//	scanf("%d", &num);
//	print(num);
//	return 0;
//}

//#include<stdio.h>
//int Strlen(char* arr) {
//	if (*arr != '\0') {
//		return 1 + Strlen(arr + 1);
//	}
//	else {
//		return 0;
//	}
//}
// //编写函数不允许创建临时变量，求字符串的长度。
//int main() {
//	char arr[] = "abcd";
//	// a b c d \0
//	int len = Strlen(arr);
//	printf("%s 的长度是：%d ", arr, len);
//	return 0;
//}
#include<stdio.h>
//
//int Fib(int n) {
//	if (n <= 2) {
//		return 1;
//	}
//	else {
//		return Fib(n - 1) + Fib(n - 2);
//	}
//	
//}
////打印出第n个斐波那契数
//int main() {
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("第%d个斐波那契数是%d", n, ret);
//	return 0;
//}


//汉诺塔
//传入的值 n代表：n层盘子； a：A塔 ； b：B塔 ；c:C塔  A塔借助 B塔 到 C塔

void HanoiTar(int n, char* a, char* b, char* c) {
	//如果只有一层 就直接从A 到 C.
	if (1 == n) {
		printf("%s => %s\n", a, c);
	}
	else {//反之 如果>=2层 就把最下面一层看成一层 把剩下的看成一层.
		//先把最上面的借助C塔从A塔到B塔.
		HanoiTar(n - 1, a, c, b);
		//再把最下面一层 从A到C塔.
		printf("%s => %s\n", a, c);
		//最后把B塔上面的所有借助A塔移动到C塔.
		HanoiTar(n - 1, b, a, c);

	}

}

int main() {
	int n = 0;
	printf("请输入层数:\n");
	scanf("%d", &n);
	char a[] = "A";
	char b[] = "B";
	char c[] = "C";

	HanoiTar(n, a, b, c);
	return 0;

}