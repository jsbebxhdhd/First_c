#define _CRT_SECURE_NO_WARNINGS 1

#define MU(x,y) (x*y)
//#include<stdio.h>
#include<math.h>
#include<time.h>
#include<stdio.h>
int main() {
	int x = 070;
	printf("%d", --x);
	return 0;
}
/*int main(){
    int i ;
    for(i = 1;;i++){
        if(i%5 == 1 && i%6 == 5 && i%7 == 4 && i%11 == 10){
            printf("����������%d����", i);
            break;
        }
    }
    return 0;
}*/
//#include<stdio.h>
//int main() {
//
//	
//		int b;
//		b = MU(2 + 3, 4);
//		printf("%d", b);
//	
//	/*int i = 10;
//	while (i = 0)
//		i -= 1;*/
//	//int arr1[10] = { 1,2,3 };
//	//int arr2[] = { 1,2,3,4 };
//	//int arr3[5] = { 1,2,3,4,5 };
//	//char arr4[3] = { 'a',98, 'c' };
//	//char arr5[] = { 'a','b','c' };
//	//char arr6[] = "abcdef";
//	///*char arr1[] = "abc";
//	//char arr2[3] = { 'a','b','c' };*/
//	return 0;
//
//}
//����ͬ�������輦�ù� 30 ֻ���� 88 ֻ���ʼ��ø��ж���ֻ��
/*#include<stdio.h>
int main() {
	int x = 0;//����
	int y = 0;//ĸ��
	int z = 0;//С��
	for (x = 1; x <= 20; x++) {
		for (y = 1; y <= 34; y++) {
			for (z = 1; z <= 100; z++) {
				if (x+y+z == 100 && 15 * x + 9 * y + z == 300) {
								printf("������%d;ĸ����%d;С����%d;\n", x, y, z);
							}
			}
			
		}
	}
	return 0;
}
*/

/*#include <stdio.h>
int main() {
	int  i = 2;
	int count = 1;

	while (count != 1500) {
		if (i % 2 == 0 || i % 3 == 0 || i % 5 == 0) {
			count++;
		}
		i++;
	}
	printf("%d", i);
	return 0;

}
*/

/*#include<stdio.h>
int main() {
	int i = 0;
	scanf("%d", &i);
	printf("%d", -i);
	return 0;
}
*/

/*#include<stdio.h>
int main() {
	int i = 0;
	int sum = 0;
	scanf("%d", &i);
	while (i != 0) {
		sum += i % 10;
		i = i / 10;
	}
	printf("%d", sum);
	return 0;
}
*/

/*#include<stdio.h>
int main() {
	int i = 0;
	int x = 10;
	int count = 2;
	printf("������һ����������>");
	scanf("%d", &i);
	while (1)
	{
		if (i / x < 10 && i / x >= 0) {
			printf("%d��%dλ��", i, count);
			break;
		}
		x *= 10;
		count++;
	}
	return 0;
}
*/

/*#include<stdio.h>
int main() {
	int i = 1;
	while (1)
	{
		if (i * (i + 2) == 399)
		{
			printf("�����ڵ���������%d��%d.", i, i + 2);
			break;
		}
		i += 2;
	}
	return 0;
}
*/

/*#include<stdio.h>
int main() {
	int i;
	for (i = 100; i <= 200; i++)
	{
		if ((i + 3) % 5 == 0 && (i - 3) % 6 == 0)
		{
			printf("%d ", i);
		}
	}
	return 0;
}
*/

/*#include<stdio.h>
int main() {
	int x, y, z;
	int i = 0;
	for (i = 100; i <= 200; i++) {
		x = i % 10;//��λ
		y = i / 10 % 10;//ʮλ
		z = i / 100;//��λ
		if (y == 5 && (x + z) % 6 == 0) {
			printf("%d ", i);
		}
	}
	return 0;
}
*/

/*#include<stdio.h>
int main() {
	int i, j;
	for (int x = 100; x < 1000; x++)
	{
		i = x % 10;
		j = x / 100;
		if (i == j && x % 7 == 0) {
			printf("%d ", x);
		}
	}
	return 0;
}
*/

/*#include<stdio.h>

int main() {
	int i = 0;
	for (i = 1; i <= 200; i++) {
		if (i % 2 == 1 && i % 5 == 1) {
			printf("%d ", i);
		}
	}
	return 0;
}
*/

/*int main() {
	int n;
	scanf("%d", &n);
	int a, b, c;
	for (int i = 100; i < 1000; i++) {
		a = i % 10;
		b = i / 10 % 10;
		c = i / 100;
		if (a + b + c == n) {
			printf("%d ", i);
		}
	}
	return 0;
}
*/

//�����֣�����m , n
//��� 2000 ���� 2000 ��- 3000 ���� 3000 ��֮������ʮλ����m��0<=m<=9������n�ı���������
/*int main() {
	int m, n;
	printf("������m,n��>");
	scanf("%d%d", &m, &n);
	for (int i = 2000; i <= 3000; i++)
	{
		if (i / 10 % 10 == m && i % n == 0)
		{
			printf("%d ", i);
		}
	}
	return 0;
}*/

//�����֣������е���λ���У�ԭ���� 9 ������������ȵ�����
/*int Reverse(int i)//����
{
	int a, b, c, d;
	a = i % 10;
	b = i / 10 % 10;
	c = i / 100 % 10;
	d = i / 1000;
	return(a * 1000 + b * 100 + c * 10 + d);
}
int main() {
	int i = 0;
	for (i = 1000; i < 10000; i++) {
		if (i * 9 == Reverse(i)) {
			printf("%d ", i);
		}
	}
	return 0;
}
*/

//һ�������������� 100 ����һ����ȫƽ�������ټ��� 168 ����һ����ȫƽ���������ʸ����Ƕ��٣�
/*int main() 
{
	int i = 0;
	while (1) {
		int m = (int)sqrt(1.0 * (i + 100));
		int n = (int)sqrt(1.0 * (i + 100 + 168));
		if (m * m == (i + 100) && n * n == (i + 100 + 168))
		{
			break;
		}
		i++;
	}
	printf("������%d", i);
	return 0;
}
*/

//���Լ��
/*int main()
{
	int i, j;
	printf("������Ҫ�����Լ��������:>");
	scanf("%d%d", &i, &j);
	int x = 1;//�����������������
	while (1) {
		x = i % j;
		if (x == 0) {
			break;
		}
		i = j;
		j = x;
	}
	printf("%d��%d�����Լ����%d", j);
	return 0;
}

*/

//��С������
/*int main()
{
	int i,j;
	printf("������Ҫ�󹫱�������������>");
	scanf("%d%d", &i, &j);
	for (int x = 1; x <= i * j; x++) {
		if (x % i == 0 && x % j == 0) {
			printf("%d��%d����С�������ǣ�>%d", i, j, x);
			break;
		}
	}
	return 0;
}
*/

//һ�������������� 100 ����һ����ȫƽ������������ 168 ����һ����ȫƽ���������ʸ����Ƕ��٣�
/*int Square(int i) {
	int m = (int)sqrt(1.0 * (i));
	if (m * m == i) {
		return 1;
	}
	return 0;
}
int main()
{
	int m=0;
	int x, y;
	do {
		x = 100 + m;
		y = 168 + m;
		if (Square(x) && Square(y) == 1) {
			break;
		}
		m++;
	} while (1);
	printf("%d", m);
	return 0;
}
*/

//���� 100 �� 1 ����1��- 100 ����100��֮����������
/*void Nrand() {
	printf("%d ", rand()%100+1 );
}
int main() {
	srand((unsigned)time(NULL));
	int i = 0;
	for (i = 0; i < 100; i++)
	{
		Nrand();
	}
	return 0;
}
*/


//��ŵ��������������������������ƶ��Ĳ������衣
/*
* void HanoiTar(char a, char b, char c,int i) {
	if (i == 1)//����ֻ��һ������ ��ֱ�Ӵ�a ->c
	{
		printf("%c => %c\n", a, c);
	}
	else//��֮�ж������  �ѳ���������Ŀ���һ������ ��������һ������һ������
	{
		HanoiTar(a ,c ,b ,i-1); //����������ӽ���Cת�Ƶ�B
		printf("%c => %c\n", a, c);//��A��������ת�Ƶ�C
		HanoiTar(b, a, c, i - 1);//��B�����ӽ���Aת�Ƶ�C
	}
	
}
void main()
{
	char A = 'a';
	char B = 'b';
	char C = 'c';//�ֱ���� ��������
	int i = 0;//������������
	printf("��������������>");
	scanf("%d", &i);
	HanoiTar( A,  B,  C, i);
}
*/

//��¥�ݣ�����ʦ��¥�ݣ�������ÿ���� 1 ������ 2 ��������¥�ݵļ�������ͬ���߷�����
/*
int main() 
{	
	int N = 0;
	scanf("%d", &N);
	printf("%d",stair(N));
	return 0;
}
int stair(int N) 
{
	if (N == 1)
	{
		return 1;
	}
	if (N == 2)
	{
		return 2;
	}
	return stair(N - 1) + stair(N - 2);
	
}

*/

//��¥�ݣ�����ʦ��¥�ݣ�������ÿ���� 1 ��  2 ������3��������¥�ݵļ�������ͬ���߷�����
/*int main()
{
	int N = 0;
	scanf("%d", &N);
	printf("%d", stair(N));
	return 0;
}
int stair(int N)
{
	if (N == 1) //���ֻʣ��һ��̨�� �߷�ֻ��һ��
	{
		return 1;
	}
	if (N == 2)//���ֻʣ������̨��  �߷������� 11  2
	{
		return 2;
	}
	if (N == 3)//���ֻʣ������̨�� �߷������� 111 12 21 3
	{
		return 4;
	}
	return (stair(N - 1) + stair(N - 2) + stair(N - 3));//���ʣ�µĴ�������̨�� ������Ҫ�����һ����1/2/3��̨�׵��߷�֮��
}
*/

//쳲��������У�����������������������С�1 1 2 3 5 8 13 21 34 ...
/*
int main()
{
	int N = 0;
	scanf("%d", &N);
	printf("%d", Pbnq(N));
	return 0;
}
int Pbnq(int N)
{
	if (N == 1 ||N == 2)
	{
		return 1;
	}
	return Pbnq(N - 1) + Pbnq(N - 2);
}

*/

//��׳ˣ�����������n���� 1!+ 2!+ 3!+ 4!+ 5!+ 6!+ 7!+...+ n!�ĺ͡�Factorial
/*
int main()
{
	int n = 0;
	int count = 0;
	int s = 0;
	scanf("%d", &n);
	for (int i = 0; i <= n; i++)
	{
		s = Fatorial(i);
		count = count + s;
	}
	printf("%d", count);
	return 0;
}
//n! = 1+1!*2+2!*3+3!*4+...+(n-1)!*n
int Fatorial(int n)
{
	if (n == 0)
	{
		return 0;
	}
	if (n == 1)
	{
		return 1;
	}
	return Fatorial(n - 1) * n;
}
*/

//ȡ�����⣺��m�����У�����ȡn�������Żأ������ж����ֲ�ͬȡ����
/*
int Ball(int m, int n)
{
	if (m == n)
	{
		return 1;
	}

	if (n == 0)
	{
		return 1;
	}
	if (n > m)
	{
		return 0;
	}

	return Ball(m - 1, n - 1) + Ball(m - 1, n);
}
int main()
{
	int m, n = 0;
	printf("�����룺>");
	scanf("%d%d", &m, &n);
	printf("%d", Ball(m, n));
	return 0;
}
*/

//������ǣ�����Ҫ��ӡ�Ĳ�������ӡ������ǡ�
/*
int triangle(int m, int n) {//m�е�n��Ԫ��
	if (n == 1 || m == n)//n==1����һ�еĵ�һ��Ԫ�� m==n����һ�����һ��Ԫ��
		return 1;//��һ�е�һ�������һ��Ԫ����1
	return triangle(m - 1, n) + triangle(m - 1, n - 1);//�м��Ԫ��������Ԫ�صĺ�  ���� (3,2) = (3-1,2-1)+(3-1,2)
}
void main() {
	int n, i, j;
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {//���ƴ�ӡ�ĵ�i��
		for (j = 1; j <= i; j++) {//���ƴ�ӡ��i�еĵ�j��Ԫ��
			printf("%d ", triangle(i, j));
		}
		printf("\n");
	}
}
*/

//������
/*�� 5 ��������һ��
�ʵ� 5 ���˶����꣬��˵�ȵ� 4 ���˴� 2 �ꡣ
�ʵ� 4 ���˶����꣬��˵�ȵ� 3 ���˴� 2 �ꡣ
�ʵ� 3 ���˶����꣬��˵�ȵ� 2 ���˴� 2 �ꡣ
�ʵ� 2 ���˶����꣬��˵�ȵ� 1 ���˴� 2 �ꡣ
����ʵ� 1 ���ˣ���˵�� 10 �ꡣ���ʵ� 5 ���˶��
*/
/*int year(int p) {
	if (p == 1)
	{
		return 10;
	}
	return year(p - 1) + 2;
}
int main() 
{
	int p = 0;
	printf("�����룺");
	scanf("%d", &p);
	printf("%d", year(p));
	return 0;
}
*/

//���ӳ���
/*
��һ��ժ�����ɸ����ӣ���������һ�룬����񫣬�ֶ����һ����
�ڶ��������ֽ�ʣ�µ����ӳԵ�һ�룬�ֶ����һ����
�Ժ�ÿ�����϶�����ǰһ��ʣ�µ�һ���һ����
����ʮ���������ٳ�ʱ����ֻʣ��һ�������ˡ�
������ж��ٸ����ӡ�*/
	//�ݹ�
/*int main()
{
	int day = 1;
	printf("%d",Peach(day));
	return 0;
}
int Peach(int day)
{
	if (day == 10)
	{
		return 1;
	}
	return (Peach(day + 1) + 1) * 2;
}
*/
	//ѭ��
/*int main() 
{
	int peach = 1;
	int i = 0;
	for (i = 1; i < 10; i++)
	{
		peach = (peach + 1) * 2;
	}
	printf("%d", peach);
	return 0;
}
*/

//���Լ�������õݹ��㷨�������������Լ����
/*
շת�����
int main()
{
	int m ,n = 0;
	printf("������������>");
	scanf("%d%d", &m, &n);
	printf("%d", gcd(m, n));
	return 0;
}
int gcd(int m, int n)
{

	int b = m % n;
	if (b == 0) {

		return n;
	}
	return gcd(n, b);
}
*/

//�������������һ�����������������������������
/*void printDigit(int i)
{
	printf("%d", i % 10);
	if (i > 10)
	{
		printDigit(i / 10);
	}
}
int main() {
	int i;
	scanf("%d", &i);
	printDigit(i);
	return 0;
}
*/

//����һ���ַ����������ַ������������
/*�ݹ��ȥ,ֱ�����һ���ַ���
�����һ���ַ���ʼ���صݹ�*/
/*void PrintStr(char* str)
{
	if (*str != '\0')
	{
		PrintStr(str + 1);
	}
	if (*str != '\0') 
	{
		printf("%c", *str);
	}
}
int main()
{
	char str[] = "abcdef";
	PrintStr(str);//���������Ԫ�صĵ�ַ
	return 0;
}
*/

//��дһ������reverse_ string(char * string).
/*ʵ��:�������ַ����е��ַ��������У����������ӡ.
Ҫ��:����ʹ��C�������е��ַ�����������.
 */
/*
int char_len(char* str) //�ú������ش������鵥λ�ĸ���
{
	int len = 0;
	while (*str != '\0') {
		len++;
		*str++;
	}
	return len;
}
void reverse_string(char* str) 
{	
	char tmp = *str;
	int left = char_len(str)-1;
	*str = *(str+left);
	*(str + left) = '\0';
	if (char_len(str + 1) >= 2) {
		reverse_string(str + 1);
	}
	*(str + left) = tmp;
}
int main() {
	char str[] = "abcdef";
	int len = char_len(str);//�����ַ����ĳ���
	reverse_string(str);
	printf("%s", str);
	return 0;
}

*/

//��� 1 - 1000 ֮�����е�������
/*int main() {
	int i = 0;
	for (i = 1; i <= 1000; i+=2) {
		printf("%d \n", i);
	}
	return 0;
}

*/

//��� 1 - 1000 ֮�����е�ż����
/*int main() {
	int i = 0;
	for (i = 2; i <= 1000; i += 2)
	{
		printf("%d\n", i);
	}
	return 0;
}
*/

//��� 1 - 1000 ֮�����е�����(����)��
/*int main() 
{
	int i,j = 0;
	int count = 0;
	for (i = 1; i <= 1000; i++)
	{	
		count = 0;
		for (j = 1; j <= i; j++)
		{
			if (i % j == 0)
			{
				count++;
			}
		}
		if (count == 2)
		{
			printf("%d\n", i);
		}
	}
	return 0;
}
*/

//��� 1 - 1000 ֮�����е�������
/*int main() {
	int i, j,count = 0;
	for (i = 1; i <= 1000; i++)
	{	
		count = 0;
		for (j = 1; j < i; j++)
		{
			if (i % j == 0)
			{
				count += j;

			}
		}
		if (count == i)
		{
			printf("%d ", i);
		}
	}
	return 0;
}
*/

//��� 100 - 999 ֮�����еĻ�������
/*int main() {
	int i = 0;
	int m, n = 0;
	for (i = 100; i < 1000; i++)
	{
		m = i / 100;
		n = i % 10;
		if (m == n)
		{
			printf("%d ", i);
		}
	}
	return 0;
}
*/

//��� 100 - 999 ֮�����е�ˮ�ɻ�����
/*int main() {
	int i = 0;
	int x, y, z = 0;
	for (i = 100; i < 1000; i++)
	{
		x = i / 100;
		y = (i - x * 100) / 10;
		z = i % 10;
		if (x * x * x + y * y * y + z * z * z == i)
		{
			printf("%d ", i);
		}
	}
	return 0;
}

*/

//��λ��
/*
�������޸��������ݵ���λ���ķ����ǣ�
1.�����е�ͬ�����ݰ��մ�С��˳�����С�(ð������)
2.������ݵĸ�����������
	���м��Ǹ����ݾ�����Ⱥ���ݵ���λ����
  ������ݵĸ�����ż����
	���м��� 2 �����ݵ�����ƽ��ֵ������Ⱥ���ݵ���λ����
���ڸ���n���������������ǵ���λ��
��*/
/*void sort(int arr[],int len)
{
	int i = 0;
	int j = 0;
	int count = 0;
	for (i = len-1; i >= 1; i--)
	{
		for (j = 0; j < i; j++)
		{
			if (arr[j] > arr[j+1])
			{
				count = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = count;
			}
		}
	}
}
int main() {
	int arr[] = { 3,51,412,542,363,13,34,23,24,42 };
	int len = sizeof(arr) / sizeof(int);//��int���鳤�� = �ܿռ�/һ���Ŀռ�
	sort(arr,len);
	if (len % 2 == 1) {//������
		int z = len / 2 ;
		printf("���������е���λ���ǣ�>%d", arr[z]);
	}else {//ż����
		printf("���������е���λ���ǣ�>%.2f", (arr[len / 2] + arr[len / 2 - 1]) / 2.0);
	}
	return 0;
}
*/

//��ȫƽ��������һ�����ܱ�ʾ��ĳ������ƽ������ʽ����������Ϊ��ȫƽ������
/*
int Square(int i)
{
	int x = (int)sqrt(1.0 * i);
	if (x * x == i)
	{
		return i;
	}
	return 0;
}
int main() {
	int i = 0;
	scanf("%d", &i);
	Square(i);
	if (Square(i) == i) {
		printf("%d����ȫƽ����", i);
	}
	else {
		printf("%d������ȫƽ����", i);
	}
	return 0;
}
*/