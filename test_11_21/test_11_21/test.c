#define _CRT_SECURE_NO_WARNINGS
//
//#include<stdio.h>
//int F(int n) {
//	if (n < 2) {
//		return n;
//	}
//	else {
//		return n & 1 + F(n >> 1);
//	}
//}
//int main() {
//	/*int i = 0;
//	scanf("��ȥ�����ŵ�%d", &i);
//
//	printf("%d", i);*/
//
//	
//	/*int n = 2;
//	int m = n << 33;
//	printf("%d", n);*/
//	//��λ������	ֻ��������
//
//	//int a = 3;
//	//int b = 5;
//	////��λ(������λ)��
//	////ȫ1��1 ��0��0
//	//int c = a & b;
//	////��λ��
//	////��1��1 ȫ0��0
//	//int d = a | b;
//	////��λ���
//	////��ͬΪ0 ����Ϊ1
//	//int e = a ^ b;
//	//printf("��%d ��%d ���%d", c, d, e);
//
//	//��ʹ�õ������� ʹ��a = 3; b = 5;����
//	//a = 3 b = 5 =>a = 5 b =3
//	/*int a = 3;
//	int b = 5;
//	printf("a = %d b = %d\n", a, b);
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("a = %d b = %d\n", a, b);*/
//	//����д��һ��ȱ�� ���� ���ֲ���̫�� ���̫��ͺ����׳�����Χ
//	
//	//��������д
//	/*int a = 3;
//	int b = 5;
//	printf("a = %d b = %d\n", a, b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("a = %d b = %d\n", a, b);*/
//
//	//��һ�������洢���ڴ��еĶ�������1�ĸ���
//	/*int n = 15;
//	int n_num = 0;
//	n_num = F(n);
//	printf("n:%d", n_num);
//	return 0;*/
//
//	/*short a = 3;
//	int b = 10;
//	printf("%d\n",sizeof(a = b+2));	//2
//	printf("%d\n",a);				//3
//	//����sizeof�����е����ݲ���������
//	*/
//
//	//��λȡ��
//	/*int a = 1;
//	int b = ~a;
//	printf("%d", b);*/
//	return 0;
//}

#include<stdio.h>

int main() {
	int a = 10;
	int* p = &a;
	*p = 20;
	printf("%d\n", a);
	printf("%d\n", *p);

	//ָ�������������(������int ���� cher) ����4λ����8λ
	return 0;
}