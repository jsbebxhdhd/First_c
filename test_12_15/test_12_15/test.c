#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#define N 2
#define y(n) ((N+1)*n)
void fun(int* x, int* y)
{
	printf("%d %d ", *x, *y); *x = 3; *y = 4;
}
int main() {
	/*int z = 0;
	z = 4 * (N + y(5));
	printf("%d", z);*/

	//int a[12] = { 0,1,2,3,4,5,6,7,8,9,10,11, }, *p[3], **pp, i;
	//for(i = 0; i < 3; i++)
	//	p[i] = &a[i * 4];
	//pp = p;
	//printf("%d", *(*(p + 2) + 2));
	////printf("%d", pp[0][1]);
	////printf("%d", pp[0][1]);
	//printf("%d", p[3][1]);
	////*£¨* £¨p + 2£© + 2£©

	//char s[100]; int c, i;
	//scanf("%c", &c); 
	////scanf("%d", &i); scanf("%s", s);
	//printf("%c\n", c);
	/*char ch[] = { 0 };
	gets(ch);
	puts(ch);*/
	
		/*struct stu
		{
			char num[6];
			int s[5];
			double ave;
		}a;
		printf("%d\n", sizeof(struct stu));
	*/
	/*float x = 1.5; int a = 1, b = 3, c = 2;
	switch (a + b)
	{
	case 1: printf("*\n");
	case 3 + 1: printf("123**\n");
	}*/
	/*switch((int)x)
	{ case 1: printf("*\n");
	case 2: printf("**\n"); }*/
			/*switch (x);
			{ case 1.0: printf("*\n");
			case 2.0: printf("**\n"); }*/
					 /*switch (a + b)
					  {
					  case 1: printf("*\n");
					  case c: printf("**\n");
					  }*/
	/* int i,j,x = 0;
	for(i = 0; i < 2; i++)
	{ x++;
		for(j = 0; j < 3; j++)
		{ if(j % 2)continue;
		x++;
		}
		x++;
	}
	printf("x=%d\n",x);
	*/

	/*int labc= 0;
	printf("%d", labc % 2);*/
	/*struct stu
	{
		char num[6];
		int s[5];
		double ave;
	}a;
	printf("%d\n", sizeof(struct stu));*/


	
	
		int x = 1, y = 2;
		fun(&y, &x);
		printf("%d %d ", x, y);
	





	return 0;
}
