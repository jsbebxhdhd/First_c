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
            printf("韩信至少有%d个兵", i);
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
//鸡兔同笼：假设鸡兔共 30 只，脚 88 只，问鸡兔各有多少只？
/*#include<stdio.h>
int main() {
	int x = 0;//公鸡
	int y = 0;//母鸡
	int z = 0;//小鸡
	for (x = 1; x <= 20; x++) {
		for (y = 1; y <= 34; y++) {
			for (z = 1; z <= 100; z++) {
				if (x+y+z == 100 && 15 * x + 9 * y + z == 300) {
								printf("公鸡：%d;母鸡：%d;小鸡：%d;\n", x, y, z);
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
	printf("请输入一个正整数：>");
	scanf("%d", &i);
	while (1)
	{
		if (i / x < 10 && i / x >= 0) {
			printf("%d是%d位数", i, count);
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
			printf("该相邻的俩奇数是%d和%d.", i, i + 2);
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
		x = i % 10;//个位
		y = i / 10 % 10;//十位
		z = i / 100;//百位
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

//求数字：输入m , n
//输出 2000 （含 2000 ）- 3000 （含 3000 ）之间所有十位数是m（0<=m<=9）且是n的倍数的数。
/*int main() {
	int m, n;
	printf("请输入m,n：>");
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

//求数字：求所有的四位数中，原数的 9 倍与其逆序相等的数。
/*int Reverse(int i)//逆序
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

//一个整数，它加上 100 后是一个完全平方数，再加上 168 又是一个完全平方数，请问该数是多少？
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
	printf("该数是%d", i);
	return 0;
}
*/

//最大公约数
/*int main()
{
	int i, j;
	printf("请输入要求最大公约数的俩数:>");
	scanf("%d%d", &i, &j);
	int x = 1;//用来存放俩数的余数
	while (1) {
		x = i % j;
		if (x == 0) {
			break;
		}
		i = j;
		j = x;
	}
	printf("%d和%d的最大公约数是%d", j);
	return 0;
}

*/

//最小公倍数
/*int main()
{
	int i,j;
	printf("请输入要求公倍数的两个数：>");
	scanf("%d%d", &i, &j);
	for (int x = 1; x <= i * j; x++) {
		if (x % i == 0 && x % j == 0) {
			printf("%d和%d的最小公倍数是：>%d", i, j, x);
			break;
		}
	}
	return 0;
}
*/

//一个整数，它加上 100 后是一个完全平方数，它加上 168 又是一个完全平方数，请问该数是多少？
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

//生成 100 个 1 （含1）- 100 （含100）之间的随机数。
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


//汉诺塔：请输入盘子数，输出盘子移动的操作步骤。
/*
* void HanoiTar(char a, char b, char c,int i) {
	if (i == 1)//假设只有一个盘子 就直接从a ->c
	{
		printf("%c => %c\n", a, c);
	}
	else//反之有多个盘子  把除了最下面的看成一个整体 把最下面一个看成一个整体
	{
		HanoiTar(a ,c ,b ,i-1); //把上面的盘子借助C转移到B
		printf("%c => %c\n", a, c);//把A最后的盘子转移到C
		HanoiTar(b, a, c, i - 1);//把B的盘子借助A转移到C
	}
	
}
void main()
{
	char A = 'a';
	char B = 'b';
	char C = 'c';//分别代表 三个柱子
	int i = 0;//用来存盘子数
	printf("请输入盘子数：>");
	scanf("%d", &i);
	HanoiTar( A,  B,  C, i);
}
*/

//爬楼梯：树老师爬楼梯，他可以每次走 1 级或者 2 级，输入楼梯的级数，求不同的走法数。
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

//爬楼梯：树老师爬楼梯，他可以每次走 1 级  2 级或者3级，输入楼梯的级数，求不同的走法数。
/*int main()
{
	int N = 0;
	scanf("%d", &N);
	printf("%d", stair(N));
	return 0;
}
int stair(int N)
{
	if (N == 1) //如果只剩下一级台阶 走法只有一种
	{
		return 1;
	}
	if (N == 2)//如果只剩下两级台阶  走法有两种 11  2
	{
		return 2;
	}
	if (N == 3)//如果只剩下三级台阶 走法有四种 111 12 21 3
	{
		return 4;
	}
	return (stair(N - 1) + stair(N - 2) + stair(N - 3));//如果剩下的大于三级台阶 可以需要计算第一步是1/2/3级台阶的走法之和
}
*/

//斐波那契数列：请输入项数，输出具体数列。1 1 2 3 5 8 13 21 34 ...
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

//求阶乘：请输入整数n，求 1!+ 2!+ 3!+ 4!+ 5!+ 6!+ 7!+...+ n!的和。Factorial
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

//取球问题：在m个球中，任意取n个（不放回），求有多少种不同取法。
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
	printf("请输入：>");
	scanf("%d%d", &m, &n);
	printf("%d", Ball(m, n));
	return 0;
}
*/

//杨辉三角：输入要打印的层数，打印杨辉三角。
/*
int triangle(int m, int n) {//m行第n个元素
	if (n == 1 || m == n)//n==1：这一行的第一个元素 m==n：这一行最后一个元素
		return 1;//这一行第一个和最后一个元素是1
	return triangle(m - 1, n) + triangle(m - 1, n - 1);//中间的元素是上面元素的和  例如 (3,2) = (3-1,2-1)+(3-1,2)
}
void main() {
	int n, i, j;
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {//控制打印的第i行
		for (j = 1; j <= i; j++) {//控制打印第i行的第j个元素
			printf("%d ", triangle(i, j));
		}
		printf("\n");
	}
}
*/

//求年龄
/*有 5 个人坐在一起，
问第 5 个人多少岁，他说比第 4 个人大 2 岁。
问第 4 个人多少岁，他说比第 3 个人大 2 岁。
问第 3 个人多少岁，他说比第 2 个人大 2 岁。
问第 2 个人多少岁，他说比第 1 个人大 2 岁。
最后问第 1 个人，他说是 10 岁。请问第 5 个人多大？
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
	printf("请输入：");
	scanf("%d", &p);
	printf("%d", year(p));
	return 0;
}
*/

//猴子吃桃
/*
第一天摘下若干个桃子，当即吃了一半，还不瘾，又多吃了一个。
第二天早上又将剩下的桃子吃掉一半，又多吃了一个。
以后每天早上都吃了前一天剩下的一半多一个。
到第十天早上想再吃时，见只剩下一个桃子了。
问最初有多少个桃子。*/
	//递归
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
	//循环
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

//最大公约数：利用递归算法求两个数的最大公约数。
/*
辗转相除法
int main()
{
	int m ,n = 0;
	printf("请输入俩数：>");
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

//逆序输出：输入一个正整数，将该正整数逆序输出。
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

//输入一个字符串，将该字符串逆序输出。
/*递归进去,直到最后一个字符，
从最后一个字符开始往回递归*/
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
	PrintStr(str);//传入的是首元素的地址
	return 0;
}
*/

//编写一个函数reverse_ string(char * string).
/*实现:将参数字符串中的字符反向排列，不是逆序打印.
要求:不能使用C函数库中的字符串操作函数.
 */
/*
int char_len(char* str) //该函数返回传入数组单位的个数
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
	int len = char_len(str);//返回字符串的长度
	reverse_string(str);
	printf("%s", str);
	return 0;
}

*/

//输出 1 - 1000 之间所有的奇数。
/*int main() {
	int i = 0;
	for (i = 1; i <= 1000; i+=2) {
		printf("%d \n", i);
	}
	return 0;
}

*/

//输出 1 - 1000 之间所有的偶数。
/*int main() {
	int i = 0;
	for (i = 2; i <= 1000; i += 2)
	{
		printf("%d\n", i);
	}
	return 0;
}
*/

//输出 1 - 1000 之间所有的素数(质数)。
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

//输出 1 - 1000 之间所有的完数。
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

//输出 100 - 999 之间所有的回文数。
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

//输出 100 - 999 之间所有的水仙花数。
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

//中位数
/*
计算有限个数的数据的中位数的方法是：
1.把所有的同类数据按照大小的顺序排列。(冒泡排序)
2.如果数据的个数是奇数，
	则中间那个数据就是这群数据的中位数；
  如果数据的个数是偶数，
	则中间那 2 个数据的算术平均值就是这群数据的中位数。
现在给出n个正整数，求它们的中位数
。*/
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
	int len = sizeof(arr) / sizeof(int);//求int数组长度 = 总空间/一个的空间
	sort(arr,len);
	if (len % 2 == 1) {//奇数个
		int z = len / 2 ;
		printf("这组数据中的中位数是：>%d", arr[z]);
	}else {//偶数个
		printf("这组数据中的中位数是：>%.2f", (arr[len / 2] + arr[len / 2 - 1]) / 2.0);
	}
	return 0;
}
*/

//完全平方数：若一个数能表示成某个数的平方的形式，则称这个数为完全平方数。
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
		printf("%d是完全平方数", i);
	}
	else {
		printf("%d不是完全平方数", i);
	}
	return 0;
}
*/