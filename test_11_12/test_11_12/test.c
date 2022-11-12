#define _CRT_SECURE_NO_WARNINGS

	/*
	do
	{
		循环体;
	}
	while(表达式);
	
	特点
		循环体至少执行一次
	*/
	/*
	break 跳出整个循环 执行循环下面的语句
	count 跳出这层循环，执行下一次循环
	*/

//计算n的阶乘
/*#include<stdio.h>
int main()
{	
	int n = 0;
	int num = 1;
	printf("请输入n的值->");
	scanf("%d", &n);
	for (int j = 1; j <= n; j++) 
	{
		num *= j;
	}
	printf("%d", num);
	return 0;
}
*/
//计算 1！+2！+3！+4！...+n!
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

//在一个有序数组中查找具体的某个数字n。(二分查找)
/*
#include<stdio.h>
int main() {
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;//要查找的数
	int sz = sizeof(arr) / sizeof(arr[0]);//求这个数组的长度
	int left = 0;//左边数字的下标
	int right = sz - 1;//右边数字的下标
	while (left<=right) {
		int mid = (left + right) / 2;//中间数字的下标
		if(arr[mid]<k)//如果中间的数字比要查找的数要小
		{
			left = mid + 1;
		}
		else if (arr[mid]>k)//如果中间的数字比要查找的数要大
		{
			right = mid - 1;
		}
		else//如果以上条件都不成立，就代表找到了
		{
			printf("找到了，下标是:%d.", mid);
			break;
		}
	}
	if (left > right) {//如果上面条件不满足就代表该数组中没有要查找的数

		printf("找不到。。。");
	}
	return 0;
}
*/
//编写代码，演示多个字符从两端移动，向中间汇聚。
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