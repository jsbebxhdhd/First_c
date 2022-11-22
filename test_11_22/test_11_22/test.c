#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//int main() {
//
//	//整型提升
//	//char 和 short在参与运算时会整型提升到int类型
//	//
//	char a = 1122;
//	char b = 123;
//	char c = a + b;
//	printf("%d\n", c);
//	return 0;
//}
#include<stdio.h>

//int main() {
//
//	//上下对称反转
//	int arr[][4] = {
//		{1,2,3,4},
//		{5,6,7,8},
//		{9,10,11,12},
//		{13,14,15,16}
//	};
//	int sz1 = sizeof(arr) / sizeof(arr[0]);//一维数组的长度
//	int sz2 = sizeof(arr[0]) / sizeof(arr[0][0]);//二维数组的长度
//	int up = 0;
//	int down = sz1 - 1;
//	int tmp = 0;//用于交换的中间变量
//	int left = 0;
//	while (up<down) {
//		
//		//交换一组
//		for (left = 0; left < sz2; left++) {
//			tmp = arr[up][left];
//			arr[up][left] = arr[down][left];
//			arr[down][left] = tmp;
//			
//		}
//		//交换完一组之后向中间递进
//		up++;
//		down--;
//	}
//	for (int i = 0; i < sz1; i++) {
//		for (int j = 0; j < sz2; j++) {
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//左右反转
/*int main() {
	int arr[][4] = {
		{1,2,3,4},
		{5,6,7,8},
		{9,10,11,12},
		{13,14,15,16}
	};
	int sz1 = sizeof(arr) / sizeof(arr[0]);			//一维中的长度
	int sz2 = sizeof(arr[0]) / sizeof(arr[0][0]);	//二维中的长度
	//printf("sz1 = %d sz2 = %d\n", sz1, sz2);
	int tmp = 0;//中间变量
	for (int i = 0; i < sz1; i++) {
		int left = 0;
		int right = sz2 - 1;
		while (left < right) {
			tmp = arr[i][left];
			arr[i][left] = arr[i][right];
			arr[i][right] = tmp;
			left++;
			right--;
		}
	}
	for (int i = 0; i < sz1; i++) {
		for (int j = 0; j < sz2; j++) {
			printf("%d ", arr[i][j]);
		}
	printf("\n");
	}
	return 0;
}

*/

//上下左右反转
int main() {
	int arr[][4] = {
		{1,2,3,4},
		{5,6,7,8},
		{9,10,11,12},
		{13,14,15,16}
	};
	int sz1 = sizeof(arr) / sizeof(arr[0]);			//一维中的长度
	int sz2 = sizeof(arr[0]) / sizeof(arr[0][0]);	//二维中的长度
	for (int i = 0; i < sz1; i++) {
		for (int j = 0; j < sz2; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	printf("++++++++++++++++++++\n");


	int up = 0;
	int down = sz1 - 1;
	int tmp = 0;
	while(up<down){
		int left = 0;
		int right = sz2 - 1;
		while (left <= sz2 - 1) {
			tmp = arr[up][left];
			arr[up][left] = arr[down][right];
			arr[down][right] = tmp;
			left++;
			right--;
		}
		up++;
		down--;
	}

	for (int i = 0; i < sz1; i++) {
		for (int j = 0; j < sz2; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}