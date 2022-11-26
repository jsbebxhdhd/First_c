#define _CRT_SECURE_NO_WARNINGS

//#include <stdio.h>
//int main(){
////{
////	int m = 14, n = 63;
////	while (m != n)
////	{
////		while (m > n) m = m - n;
////		while (m < n) n = n - m;
////	}
////	printf("%d\n", m);
//
//
//	/*int a[10] = { 6,7,8,9,10 };
//	int* p; 
//	p = &a[5]; 
//	printf("%d\n", p[-3]);*/
//	//int x, y;
//	//x = y = 3;
//	//printf("%d %d\n", x, y);
//	//int t = ++x || ++y;
//	//printf("%d\n", t);
//
//
//
//	int count = 0, s = 0, new_number = 0, t_number, digit, number;
//	scanf("%d", &number);
//	t_number = number;
//	if (t_number < 0) {
//		t_number = -t_number;
//	}
//	do {
//		digit = t_number % 10;
//		s = s + digit;
//		new_number = new_number * 10 + digit;
//		count++;
//		printf("%d#%d#%d#%d\n", count, digit, s, new_number);
//		t_number = t_number / 10;
//	} while (t_number != 0);
//	return 0;
//}
#include<stdio.h>

add(int m, int n, int arr[])
{
	int i, j, sum = 0;
	for (i = 0; i < m; i = i + m - 1)
		for (j = 0; j < n; j++)
			sum = sum + ________;
	for (j = 0; j < n; j = j + n - 1)
			for (i = 1; ______; i++)
				sum = sum + arr[i * n + j];
	return(sum);
}
int main()
{
	int a[3][4] = { 3,0,0,3,2,5,7,3,1,0,4,2 }, s;
	s = add(3,4,a);
	printf("s=%d\n", s);
	return 0;
}