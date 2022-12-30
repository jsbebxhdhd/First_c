#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<math.h>
#include<string.h>
//int main() {
//
//	float a = 0;
//	float b = 0;
//	float c = 0;
//	printf("请输入a,b,c的值\n");
//	scanf("%f%f%f", &a, &b, &c);
//	float tmp = b * b - 4 * a * c;
//	if (tmp < 0) {//小于0的话
//		printf("方程无实根");
//	}
//	else {
//		printf("x1 = %f\n", -(b + sqrt(tmp)) / 2 * a);
//		printf("x2 = %f\n", -(b - sqrt(tmp)) / 2 * a);
//	}
//	return 0;
//}

//int main() {
//	int arr[10][10] = { 0 };
//	arr[0][0] = 1;
//	for (int i = 1; i < 10; i++) {
//		for (int j = 0; j <= i; j++) {
//			if (j != 0 && j != i) {
//				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//			}
//			else {
//				arr[i][j] = 1;
//			}
//		}
//	}
//	for (int i = 0; i < 10; i++) {
//		for (int j = 0; j <= i; j++) {
//			printf("%-5d", arr[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}
//void my_strcat(char c1[], char c2[]) {
//	char* p1 = c1+strlen(c1);
//	char* p2 = c2;
//	while (*p2 != '\0') {
//		*p1 = *p2;
//		p1++;
//		p2++;
//	}
//	*p1 = '\0';
//}
//int a;
//int main() {
	/*char ch1[20] = "abcd";
	char ch2[20] = "EFGHIJK";
	my_strcat(ch1, ch2);*/
	/*char* p1 = ch1 + 4;
	char* p2 = ch2;
	while (*p2 != '\0') {
		*p1 = *p2;
		p1++;
		p2++;
	}
	*p1 = '\0';*/
//	puts(ch1);
//	return 0;
//}
int a;
int main() {
	static b;
	printf("%d %d", a, b);
	return 0;
}