#define _CRT_SECURE_NO_WARNINGS 1 

#include<stdio.h>
#include<string.h>
//int main() {
//	char ch1[20] = "abcdef";
//	puts(ch1);
//	char ch2[] = "ghijk";
//	puts(ch2);
//	strcat(ch1, ch2);
//	puts(ch1);
//	puts(ch2);
//
//	return 0;
//}

//void fun(char* w, int n)
//{
//	char t, * s1, * s2;
//	s1 = w;
//	s2 = w + n - 1;
//	while (s1 < s2) { 
//	t = *s1++;
//	*s1 = *s2--;
//	*s2 = t; }
//}
//int main()
//{
	/*char* p;
	char a[] = "1234567";
	p = a;
	fun(p, strlen(p));
	puts(p);*/

	/*int i = 0;
	for (i = 0; i <= 3; i++) {
		static i = 3;
		i *= 3;
		printf("%d,", i);

	}
	return 0;*/
	/*
	����һ���ַ����ֱ�ͳ��ͳ���ַ����� 0-9 �ĳ���
	*/
	/*char ch[] = "1a2b3c4d5e!@#";
	char* p = ch;
	int sum = 0;
	while (*p != '\0') {
		if (*p >= '0' && *p <= '9') {
			sum++;
		}
		p++;
	}
	printf("���ַ�����0-9���ֵĴ�����%d\n", sum);*/
	

//}
/*дһ������ʵ�������ַ����ıȽϡ����Լ�ʵ�ֿ⺯��strcmp������
����ԭ��Ϊint strcmp(char *p1,char *p2)
�� p1 ָ���ַ��� s1��p2 ָ���ַ��� s2��
Ҫ�� s1=s2 ʱ������ֵΪ 0��
�� s1!=s2,�������Ƕ��ߵ�һ������ͬ�ַ��� ASCII ���ֵ��
�� s1>s2 �������ֵ��
�� s1<s2 �������ֵ��*/
//int my_strcmp(char* p1, char* p2) {
//
//	while (*p1 != '\0') {
//		if (*p1 != *p2)
//			return *p1 - *p2;
//		p1++;
//		p2++;
//	}
//	if (*p1 != *p2)
//		return *p1 - *p2;
//	else
//		return 0;
//}
//
//int main() {
//	char s1[] = "abc";
//	char s2[] = "abcd";
//	char* p1 = s1 ;
//	char* p2 = s2;
//	
//	printf("%d", my_strcmp(p1, p2));
//
//	return 0;
//}

/*��д���򣺸���ĳ�������� n�����������ӷֽ�������ν�����ӷֽ�����������������Լ
������Լ��������*/
int su(int i) {
	int n = 0;
	int count = 0;
	for (n = 2; n < i; n++) {
		if (i % n == 0) {
			return 0;
		}
	}
	return 1;
}
int main() {
	int n = 20;
	int i = 0;
	int count = 0;
	for (i = 2; i < n / 2; i++) {
		if (n % i == 0) {//Լ��
			if (su(i)) {//����
				printf("%d ,",i);
				count++;
			}
		}
	}
	if (n != 1 && count == 0) {
		printf("%d ,", n);
	}
	if(n == 1){
		printf("1ֻ������һ��Լ��������������Ҳ��������");
	}
	return 0;
}