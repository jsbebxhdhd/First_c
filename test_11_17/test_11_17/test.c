#define _CRT_SECURE_NO_WARNINGS

//#include<stdio.h>
//int main() {
//	/*int arr[] = { 1,2,3,4,5 };
//	int a = arr[5];*/
//
//	/*int n = 10;
//	int i = 4;
//	n %= i + 1;
//	printf("%d", n);*/
//	/*char c = 'A';
//	int i = 1, j;
//	j = !c && i++;
//	printf("%d %d", i, j);*/
//	char a[10] = '5';
//	printf("%s", a);
//	return 0;
//}

//��дһ������reverse_ string(char * string).
//
//ʵ��:�������ַ����е��ַ� �������У����������ӡ.
//
//Ҫ�� :����ʹ��C�������е��ַ�����������.
#include<stdio.h>
int my_strlen(char* str) {
	if (*str == '\0') {
		return 0;
	}
	return 1 + my_strlen(str + 1);
}
void reverse_string(char* string) {
	int str = my_strlen(string);//дһ�����������ַ����ĳ���
	char tmp = '0';
	
	tmp = *(string);
	*(string) = *(string + str - 1);
	*(string + str - 1) = '\0';
	if (my_strlen(string+1)>=2) {
		reverse_string(string + 1);
	}
	*(string + str - 1) = tmp;
	
	
}
int main() {
	char ch[] = "abcdef";
	reverse_string(ch);
	printf("%s", ch);
	return 0;
}