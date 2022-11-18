#define _CRT_SECURE_NO_WARNINGS

//#include<stdio.h>
//int DigitSum(int i) {
//	if (i < 10) {
//		return i;
//	}
//	return (i % 10) + DigitSum(i / 10);
//	
//}
//int main() {
//	int i = 1749;
//	int sum = DigitSum(i);
//	printf("%d", sum);
//	return 0;
//}

//#include<stdio.h>
//double Pow(int n, int k) {
//    if (k == 0) {
//        return 1;
//    }
//    else if (k > 0) {
//        return n * Pow(n, k - 1);
//    }
//    else {
//        return 1.0 / (Pow(n, -k));
//    }
//
//}
//int main() {
//    int n = 0;
//    int k = 0;
//    scanf("%d %d", &n, &k);
//    double ret = Pow(n, k);
//    printf("%f", ret);
//    return 0;
//}

//数组
//#include<stdio.h>
//#include<string.h>
//int main() {
//	/*int arr[8];
//	char ch[10];
//	int n = 8;
//	int arr1[n];*/
//	//int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };//完全初始化
//	//int arr2[10] = { 1,2,3,4,5,6 };//不完全初始化
//	//int arr3[] = { 1,2,3,4,5,6 };//根据初始化内容决定长度
//	//char ch1[5] = { '1','2','3' ,'\0'};	//空间中 ： 1  2 3 \0 0
//	//char ch2[] = { '1','2','3' };	//空间中 ： 1  2 3
//	//char ch3[] = "123";	  //空间中 ： 1  2 3 \0
//	//char ch4[5] = "123";  //空间中 ： 1  2 3 \0 0
//	/*printf("%s\n", ch1);
//	printf("%s\n", ch2);
//	printf("%s\n", ch3);
//	printf("%s\n", ch4);*/
//	/*printf("%d\n", strlen(ch1));
//	printf("%d\n", strlen(ch2));
//	printf("%d\n", sizeof(ch2));
//	printf("%d\n", sizeof(ch1));
//	printf("%d\n", sizeof(arr1));
//	printf("%d\n", sizeof(arr2));*/
//	//printf("%d",sizeof(ch1) / sizeof(ch1[0]));
//	
//	//二维数组的创建和初始化
//	//创建
//	/*int arr1[3][4] ;
//	char ch1[4][5] ;*/
//	//初始化
//	int arr[3][4] = {
//		{1,2},
//		{ 5 },
//		{9,10,11,12} };
//	int arr1[3][4] = { 1,2,3,4,5,6,7,8,9 };
//	/*int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++) {
//		for (j = 0; j < 4; j++) {
//			printf("arr[%d][%d] = %d\n", i, j, arr[i][j]);
//		}
//	}*/
//	int* p = &arr[0][0];
//	for (int i = 0; i < 12; i++) {
//		printf("%d ", *p);
//		p++;
//	}
//	return 0;
//}

//数组作为函数参数
//写一个函数来将传入的数组进行升序排列
#include<stdio.h>
void bubble_sort(int arr[],int sz)
{	
	int i = 0;
	int j = 0;
	int tmp = 0;//用于交换的中间变量
	for (i = sz-1; i >= 0; i--) {
		for (j = 0; j < i; j++) {
			if (arr[j] > arr[j + 1]) {
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}
void my_printf(int arr[],int sz) {
	int* p = arr;
	for (int x = 0; x < sz; x++) {
		printf("%d ", *p);
		p++;
	}
}
int main() {
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	printf("%d\n", sz);
	bubble_sort(arr,sz);
	my_printf(arr, sz);
	return 0;
}
