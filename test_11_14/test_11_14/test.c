#define _CRT_SECURE_NO_WARNINGS

/*
	打印1 - 100 之间所有3的倍数
	*/
//#include<stdio.h>
//int main() {
//
//	
//	int i = 0;
//	for (i = 3; i <= 100; i += 3) {
//
//		printf("%d ", i);
//	}
//	return 0;
//}

/*
判断是不是闰年
1、被4整除 不能被100整除的闰年
2、被400整除也是闰年
*/
//#include<stdio.h>
//int main() {
//	int year = 0;
//	for (year = 1000; year <= 2000; year++) {
//		if (year % 4 == 0 && year % 100) {
//
//				printf("%d ",year);
//		}
//		if (year % 400 == 0) {
//
//				printf("%d ", year);
//		}
//
//	}
//	
//	return 0;
//}

//#include <stdio.h>
//void main() {
//	int arr[4][5] = {
//	{ 1 , 2 , 3 , 4 , 5 },
//	{ 6 , 7 , 8 , 9 , 10 },
//	{ 11 , 12 , 13 , 14 , 15 },
//	{ 16 , 17 , 18 , 19 , 20 },
//	};
//	int i, j, t;
//	int rows = sizeof(arr) / sizeof(arr[0]);
//	int cols = sizeof(arr[0]) / sizeof(arr[0][0]);
//	for (i = 0; i < rows / 2; i++) {
//		for (j = 0; j < cols; j++) {
//			t = arr[rows - 1 - i][j];
//			arr[rows - 1 - i][j] = arr[i][j];
//			arr[i][j] = t;
//		}
//	}
//	for (i = 0; i < rows; i++) {
//		for (j = 0; j < cols; j++)
//			printf("%-5d", arr[i][j]);
//		printf("\n");
//	}
//}


//#include<stdio.h>
//int main() {
//	flag:
//	printf("hehe\n");
//	printf("hehe\n");
//	goto flag;
//	return 0;
//}



//关机程序

//system()			执行系统命令
//shutown -s -t 60	关机
//shutown -a		取消关机

//#include<stdio.h>
//#include <stdlib.h>
//#include<string.h>
//
//int main() {
//	char input[] = { 0 };
//	system("shutdown -s -t 60");	//60s后关机
//damie:
//	printf("你电脑将会在60s后关机，输入“我是猪”取消关机=>\n");
//	scanf("%s", input);
//	if (strcmp(input, "我是猪") == 0)
//	{
//		system("shutdown -a");
//		printf("行了行了 知道你是猪了。。。");
//	}
//	else {
//		goto damie;
//	}
//	return 0;
//}

//函数来喽。。
/*
(返回类型) 函数名(参数){
	函数体;
}
*/
//#include<stdio.h>
//int Max(int x, int y) {
//	if (x > y) {
//		return x;
//	}
//	else {
//		return y;
//	}
//
//}
//int main() {
//	int a = 0;
//	int b = 10;
//	printf("%d",Max(a, b));
//
//	return 0;
//}

