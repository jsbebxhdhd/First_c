#define _CRT_SECURE_NO_WARNINGS 1
#include "stdio.h"
//int Square(int i)
//{
//	return i * i;
//}
//void main()
//{
//	int i = 0;
//	i = Square(i);
//	for (; i < 3; i++)
//	{
//		static int i = 1;
//		i += Square(i);
//		printf("%d,", i);
//	}
//	printf("%d\n", i);
//}
//#include<string.h>
//int main() {
//	char ch[10];
//	ch[0] = "abcdef";
//	putchar(ch);
//	puts(ch);
//	return 0;
//}
//#include<stdio.h>
//void main()
//{
//	/*char* s, c[80];
//	s = c;
//	gets(s);
//	while (*(++s) != '\0')
//		if (*s == 'a') break;
//		else { s++; gets(s); }
//	puts(s);*/
//
//	int x = 3;
//	int y;
//	int* p = &x;
//	y = *p++;
//	printf("%d,%d", x, y);
//}
main()
{
	char* s2 = "I love China!", ** s1 = &s2;
char* s3,c,*s4 = "W";
s3 = &c; *s3 = 'H';
s2 = s2 + 2;
printf("%s\t%c\t%s\t%c\n",s2,*s3,s4,**s1);
}