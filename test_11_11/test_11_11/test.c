#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main() {
	/*
	ѡ�����
	if...else...
	if(���ʽ){
		���1��
	}else{
		���2��
	}
	���if/else���治��{}���ֻ�ܿ���һ�����
	�������{}else������������ifƥ��
	��û��Ƕ����ϡ���
	*/
//#include <stdio.h>
//	int main()
//	{
//		int a = 0;
//		int b = 2;
//		if (a == 1)
//			if (b == 2)
//				printf("hehe\n");
//		else
//			printf("haha\n");//ʲô������ӡ
//		return 0;
//	}

/*int age = 0;
	printf("�������������->");
	scanf("%d", &age);
	if (age >= 18) 
	{
		printf("����%d���Ѿ������ˡ�", age);
	}
	else 
	{
		printf("����%d����δ���ꡣ", age);
	}*/
		
//#include<stdio.h>
////int main() {
////	//�ж�һ�����Ƿ�Ϊ����
////	//int i = 0;
////	//*scanf("%d", &i);
////	//if (i % 2 == 0) {
////	//	printf("ż��");
////	//}
////	//else {
////	//	printf("����");
////	//}*/
////	//for (i = 0; i <= 100; i++) {
////	//	if (i % 2 == 1){
////	//		printf("%d ", i);
////	//	}
////	//}
////	//int day = 0;
////	/*
////	switch���
////	switch(���ʽ){
////	case ���γ������ʽ1��
////		���1��
////		break��
////	case ���γ������ʽ2��
////		���2��
////		break;
////		....
////	}
////
////	*/
////	//scanf("%d", &day);
////	/*switch (day) {
////	case 1 :
////		printf("����1\n");
////		break;
////	case 2:
////		printf("����2\n");
////		break;
////	case 3:
////		printf("����3\n");
////		break;
////	case 4:
////		printf("����4\n");
////		break;
////	case 5:
////		printf("����5\n");
////		break;
////	case 6:
////		printf("����6\n");
////		break;
////	case 7:
////		printf("����7\n");
////		break;
////	}*/
////
////	return 0;
////}
////	return 0;
////}
//int main()
//{
//	/*
//һ���򵥵�ȷ���������*/
//	char password[20] = { 0 };
//	printf("����������=>");
//	scanf("%s", password);
//	printf("��ȷ������(Y/N)\n");
//	//���������е�\n
//	//getchar();
//	
//	//���������еĶ���ַ�
//	//https://www.bilibili.com/video/BV1cq4y1U7sg?t=1338.1
//	int tmp = 0;
//	while ((tmp = getchar()) != '\n') {
//		;
//	}
//
//	if ('Y' == getchar()) {
//		printf("ȷ�ϳɹ�");
//	}
//	else {
//		printf("ȷ��ʧ��");
//	}
//
//	return 0;
//}
#include<stdio.h>
int main() {
	/*
	���ʽ1
	���ʽ1Ϊ��ʼ�����֣����ڳ�ʼ��ѭ�������ġ�
	���ʽ2
	���ʽ2Ϊ�����жϲ��֣������ж�ѭ��ʱ����ֹ��
	���ʽ3
	���ʽ3Ϊ�������֣�����ѭ�������ĵ�����
	*/
	//��������������ʡ��,�����жϲ���ʡ��-->�жϲ��ֺ�Ϊ�棬�ᵼ������ѭ��
	//0 Ϊ�� ��0 Ϊ��   ��ֵΪ��
	int i = 0;
	int j = 0;
	//for (i = 0; i < 3; i++)
	//{
	//	for (j = 0; j < 3; j++)
	//	{
	//		printf("hehe\n");
	//	}
	//}//��ӡ3 * 3	9��hehe
	for (; i < 3; i++)
	{
		for (; j < 3; j++)
		{
			printf("hehe\n");
		}
	}//��ӡ3��hehe	
	 //��Ϊ��һ��iѭ�������jѭ��������	�ٴν���iѭ��ʱ j���ᱻ��ʼ�� Ҳ�Ͳ������jѭ����
	return 0;
}