#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main() {
	/*
	选择语句
	if...else...
	if(表达式){
		语句1；
	}else{
		语句2；
	}
	如果if/else后面不跟{}则就只能控制一条语句
	如果不带{}else会和离它最近的if匹配
	最好还是都带上。。
	*/
//#include <stdio.h>
//	int main()
//	{
//		int a = 0;
//		int b = 2;
//		if (a == 1)
//			if (b == 2)
//				printf("hehe\n");
//		else
//			printf("haha\n");//什么都不打印
//		return 0;
//	}

/*int age = 0;
	printf("请输入你的年龄->");
	scanf("%d", &age);
	if (age >= 18) 
	{
		printf("年龄%d，已经成年了。", age);
	}
	else 
	{
		printf("年龄%d，还未成年。", age);
	}*/
		
//#include<stdio.h>
////int main() {
////	//判断一个数是否为奇数
////	//int i = 0;
////	//*scanf("%d", &i);
////	//if (i % 2 == 0) {
////	//	printf("偶数");
////	//}
////	//else {
////	//	printf("奇数");
////	//}*/
////	//for (i = 0; i <= 100; i++) {
////	//	if (i % 2 == 1){
////	//		printf("%d ", i);
////	//	}
////	//}
////	//int day = 0;
////	/*
////	switch语句
////	switch(表达式){
////	case 整形常量表达式1：
////		语句1；
////		break；
////	case 整形常量表达式2；
////		语句2；
////		break;
////		....
////	}
////
////	*/
////	//scanf("%d", &day);
////	/*switch (day) {
////	case 1 :
////		printf("星期1\n");
////		break;
////	case 2:
////		printf("星期2\n");
////		break;
////	case 3:
////		printf("星期3\n");
////		break;
////	case 4:
////		printf("星期4\n");
////		break;
////	case 5:
////		printf("星期5\n");
////		break;
////	case 6:
////		printf("星期6\n");
////		break;
////	case 7:
////		printf("星期7\n");
////		break;
////	}*/
////
////	return 0;
////}
////	return 0;
////}
//int main()
//{
//	/*
//一个简单的确认密码代码*/
//	char password[20] = { 0 };
//	printf("请输入密码=>");
//	scanf("%s", password);
//	printf("请确认密码(Y/N)\n");
//	//清理缓冲区中的\n
//	//getchar();
//	
//	//清理缓冲区中的多个字符
//	//https://www.bilibili.com/video/BV1cq4y1U7sg?t=1338.1
//	int tmp = 0;
//	while ((tmp = getchar()) != '\n') {
//		;
//	}
//
//	if ('Y' == getchar()) {
//		printf("确认成功");
//	}
//	else {
//		printf("确认失败");
//	}
//
//	return 0;
//}
#include<stdio.h>
int main() {
	/*
	表达式1
	表达式1为初始化部分，用于初始化循环变量的。
	表达式2
	表达式2为条件判断部分，用于判断循环时候终止。
	表达式3
	表达式3为调整部分，用于循环条件的调整。
	*/
	//三个条件都可以省略,但是判断部分省略-->判断部分恒为真，会导致无限循环
	//0 为假 非0 为真   赋值为真
	int i = 0;
	int j = 0;
	//for (i = 0; i < 3; i++)
	//{
	//	for (j = 0; j < 3; j++)
	//	{
	//		printf("hehe\n");
	//	}
	//}//打印3 * 3	9个hehe
	for (; i < 3; i++)
	{
		for (; j < 3; j++)
		{
			printf("hehe\n");
		}
	}//打印3个hehe	
	 //因为第一次i循环里面的j循环了三次	再次进入i循环时 j不会被初始化 也就不会进入j循环里
	return 0;
}