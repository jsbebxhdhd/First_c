#include<stdio.h>
#include<string.h>
int g_val = 100;//全局变量
enum Sex
{	
	//这种枚举类型的变量的未来可能取值
	//枚举常量
	MALE = 3,//赋初值
	FEMALE,
	SECRET
};

int main() {
	/*
1.局部变量的作用域是变量所在的局部范围。
		例如循环中的变量 作用域就只是在循环内
		main函数体内创建 作用域就在main函数内生效
 2.全局变量的作用域是整个工程(项目)。
		全局变量在别的文件里只有在声明之后才能使用
		关键字extern 例：extern int g_val;
变量的生命周期指的是变量的创建到变量的销毁之间的一个时间段
		1. 局部变量的生命周期是：进入作用域生命周期开始，出作用域生命周期结束。
		2. 全局变量的生命周期是：整个程序的生命周期。
*/
	//printf("全局变量g_val = %d", g_val);
	/*
	*C语言中的常量分为以下以下几种：
	*1.字面常量
	*	3.14;
	*	'a';
	*	10;
	*	"abcde";
	* 
	*2.const修饰的常变量(本质是变量只不过被const修饰具有了常属性)
	*	const int num = 10;//被const修饰的num就是常变量—具有常属性(不能被改变的属性)
	*	num = 10;	//报错 因为num为常变量不能被修改
	*
	*3.#define 定义的标识符常量
	*	#define MAX = 200;
	*	MAX = 2000; //报错 标识符常量不能被修改
	*4.枚举常量(enum)
	*	可以一一列举的常量
	*	printf("%d\n", MALE);	//0 3
	*	printf("%d\n", FEMALE);	//1 4
	*	printf("%d\n", SECRET);	//2 5
	*
	*/
	/*
	字符串
		用""括起来的一串字符;
		注：字符串的结束标志是一个 \0 的转义字符。
		在计算字符串长度的时候 \0 是结束标志，不算作字符串内容。 
		"hello";
		strlen() 求字符串的长度 
			函数从字符串的开头位置依次向后计数，直到遇见\0，然后返回计时器的值。最终统计的字符串长度不包括\0。
		头文件：string.h
	*/
	/*char arr1[] = "abcd";
	char arr2[] = { 'a', 'b', 'c', 'd','\0'};
	printf("%d\n", strlen(arr1));
	printf("%d\n", strlen(arr2));*/
	//printf("%c\n",'\x41');
	printf("%d\n", strlen("abcdef"));
	// \62被解析成一个转义字符
	printf("%d\n", strlen("c:\test\121\test.c"));
	return 0;
}