#define _CRT_SECURE_NO_WARNINGS

	/*
	do
	{
		ѭ����;
	}
	while(���ʽ);
	
	�ص�
		ѭ��������ִ��һ��
	*/
	/*
	break ��������ѭ�� ִ��ѭ����������
	count �������ѭ����ִ����һ��ѭ��
	*/

//����n�Ľ׳�
/*#include<stdio.h>
int main()
{	
	int n = 0;
	int num = 1;
	printf("������n��ֵ->");
	scanf("%d", &n);
	for (int j = 1; j <= n; j++) 
	{
		num *= j;
	}
	printf("%d", num);
	return 0;
}
*/
//���� 1��+2��+3��+4��...+n!
/*#include<stdio.h>

int main()
{
	
	int i = 0;
	int n = 0;
	int sum = 1;
	int num = 0;
	for (n = 1;n <= 3;n++) {

		for (i = 1;i<=n;i++) {
			sum *= i;
		}

		num += sum;
		sum = 1;

	}
	printf("%d", num);
	return 0;
}*/

//��һ�����������в��Ҿ����ĳ������n��(���ֲ���)
/*
#include<stdio.h>
int main() {
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;//Ҫ���ҵ���
	int sz = sizeof(arr) / sizeof(arr[0]);//���������ĳ���
	int left = 0;//������ֵ��±�
	int right = sz - 1;//�ұ����ֵ��±�
	while (left<=right) {
		int mid = (left + right) / 2;//�м����ֵ��±�
		if(arr[mid]<k)//����м�����ֱ�Ҫ���ҵ���ҪС
		{
			left = mid + 1;
		}
		else if (arr[mid]>k)//����м�����ֱ�Ҫ���ҵ���Ҫ��
		{
			right = mid - 1;
		}
		else//����������������������ʹ����ҵ���
		{
			printf("�ҵ��ˣ��±���:%d.", mid);
			break;
		}
	}
	if (left > right) {//�����������������ʹ����������û��Ҫ���ҵ���

		printf("�Ҳ���������");
	}
	return 0;
}
*/
//��д���룬��ʾ����ַ��������ƶ������м��ۡ�
#include<stdio.h>
#include<string.h>
#include<windows.h>
int main() {
	char arr1[] = "i`m about to blow your mind";
	char arr2[] = "###########################";
	int str = strlen(arr1) - 1;
	int left = 0;
	int right = str;
	while (left <= right) {
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		Sleep(1000);
		left++;
		right--;
	}
	
	return 0;
}