#define _CRT_SECURE_NO_WARNINGS

//����

//#include<stdio.h>
//int is_leap_year(int year) {
//	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
//
//		return 1;
//	}
//	else {
//		return 0;
//
//	}
//	
//}
//int main()
//{
//	int y = 0;
//	for (y = 1000; y <= 2000; y++) {
//
//		if (is_leap_year(y) == 1) {
//
//			printf("%d ", y);
//		}
//	}
//	return 0;
//}

//д����  ʵ��һ����������Ķ��ֲ���

//#include<stdio.h>
//int binart_search(int arr[],int k , int sz) {
//	int right = sz-1;	//�ұ�
//	int left = 0;		//��
//	while (left<=right) {
//		int mid = (right + left) / 2;
//		if (arr[mid] < k) 
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k) 
//		{
//			right = mid - 1;
//		}
//		else 
//		{
//			return mid;
//		}	
//	}
//	return -1;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int k = 1;
//	if (binart_search(arr,k,sz) == -1) {
//		printf("û�ҵ�");
//	}
//	else {
//		printf("�ҵ��ˣ��±��ǣ�%d", binart_search(arr, k, sz));
//	}
//	return 0;
//}

#include<stdio.h>
#include<string.h>
int main() {
	char ch[] = "abc";
	int sz = sizeof(ch) / sizeof(ch[0]);
	int str = strlen(ch);
	printf("sz = %d, str = %d", sz, str);
	return 0;
}