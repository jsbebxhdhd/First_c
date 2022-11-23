#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//
//int main() {
	//指针初阶


	/*int a = 10;
	int* pa = &a;
	*pa = 20;
	printf("%d ", *pa);
	printf("%d ", a);*/
	//int* pa;
	//char* pc;
	//float* pf;
	//printf("%d\n", sizeof(pa));//4字节
	//printf("%d\n", sizeof(pc));//4
	//printf("%d\n", sizeof(pf));//4
	//不同类型的数据的指针空间大小一样都是4字节

	//int a = 0x12345678;
	//char* pc = &a;
	//*pc = 0;

	//int arr[10] = { 0 };
	//int* p = arr;
	//char* pc = arr;
	//printf("%p\n", p);//0115F960
	//printf("%p\n", pc);//0115F960

	//printf("%p\n", p+1);//0115F964
	//printf("%p\n", pc+1);//0115F961


	/*int arr[10] = { 0 };
	char* p = arr;
	int i = 0;
	printf("%p\n", p);
	for (i = 0; i < 10; i++) {
		*(p + i )= i;
	}
	for (i = 0; i < 10; i++) {
		printf("%d ", arr[i]);
	}*/
	

	//野指针
	//1.指针未初始化
	//2.越界访问
	//3.内存空间被释放
	 
	
	////这里的p就是一个野指针
	//int* p;//p是局部变量 局部不初始化的话，默认是随机值
	//*p = 20;	//非法访问内存了
	 
	//越界访问
	/*int arr[10] = { 0 };
	int* p = arr;
	int i = 0;
	for (i = 0;  i <= 10; i++) {
		*p = i;
		p++;
	}*/

	//如何避免野指针；
	//1.指针初始化
	//	int* p = NULL;
	//2.小心越界访问
	//3.指针指向空间被释放 及时置空(NULL)
	//4.指针使用之前进行有效性检查
//
//	return 0;
//}

//int main() {
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", &arr[9] - &arr[0]);//9
/*}*/	//指针和指针相间的前提 ： 俩指针指向同一块空间

//int main() {
//	//数组和指针
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++) {
//		printf("%p <==> %p\n", (p + i), &arr[i]);
//	}
//	return 0;
//}

//int main() {
//	//二级指针
//	int i = 10;
//	int* p = &i;
//	int** pa = &p;
//	printf("%d\n", **pa);
//	printf("%p\n", p);
//	printf("%p\n", pa);
//	return 0;
//}

//int main() {
//	//int arr[10] = { 0 };//整型数组
//	//char ch[10] = { '0' };//字符数组
//	//int* p[10];//整型指针数组
//	char a = -1;
//	signed char b = -1;
//	unsigned char c = -1;
//	printf("a=%d,b=%d,c=%d", a, b, c);
//	return 0;
//
//	return 0;
//}

//判断a[N][N]是否关于主对角线对称（左斜），若对称输出 1 ，否则输出 0 。
//int main() {
//	int arr[4][4] = {
//		{1,2,3,4},
//		{5,6,7,8},
//		{9,10,11,12},
//		{13,14,15,16}
//	};
//
//	return 0;
//}

//#include <stdio.h>
//#define N 4
//void main() {
//	int i, j, flag = 1;
//	int arr[N][N] = {
//		{1,5,9,13},
//		{5,6,10,14},
//		{9,10,11,15},
//		{13,14,15,16}
//	};
//	for (i = 0; i < N; i++)
//		for (j = 0; j < i; j++)
//			if (arr[i][j] != arr[j][i]) {
//				flag = 0;
//				break;
//			}
//	if (flag == 1)
//		printf("1");
//	else
//		printf("0");
//}
#include <stdio.h>
#define N 4
int main() {
	int i, j, flag = 1;
	int arr[N][N] = {
		{16,15,14,13},
		{15,11,10,14},
		{14,10,11,15},
		{13,14,15,16}
	};
	for (i = 0; i < N; i++) {
		for (j = 0; j < i; j++) {
			if (arr[i][j] != arr[N - 1 - j][N - 1 - i]) {
				flag = 0;
				break;
			}
		}
	}
	if (flag == 1)
		printf("1");
	else
		printf("0");
	return 0;
}