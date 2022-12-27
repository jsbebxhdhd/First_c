#define _CRT_SECURE_NO_WARNINGS 1 

/*
编写函数 void sort(char *words [], int n);
对一组英文单词进行按字典排序。
在主函数中输出原无序的单词和排序后的单词
*/
#include<string.h>
#include<stdio.h>

int main() {
	char ch[] = "abc";

	return 0;
}
//void sort(char* words[], int n) {
//	int i = 0;
//	int j = 0;
//	int count = 0;
//	char* ch = "0";
//	for (int m = 0; m < n - 1; m++) {
//		for (i = 0; i < n - 1; i++) {
//
//			j = 0;
//			count = 0;
//			while (words[i][j] != '\0') {
//				if (words[i][j] > words[i + 1][j]) {
//					ch = words[i];
//					words[i] = words[i + 1];
//					words[i + 1] = ch;
//					count++;
//				}
//				if (count) {
//					break;
//				}
//				j++;
//			}
//		}
//
//	}
//}
//int main() {
//	char* ch[4] = { "cca","cba","bac","abc" };
//	int len = 4;
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < len; i++) {
//		j = 0;
//		while (ch[i][j] !='\0') {
//			printf("%c", ch[i][j]);
//			j++;
//		}
//		printf("\n");
//
//	}
//	sort(ch, len);
//	printf("++++++++++++++++\n");
//	for (i = 0; i < len; i++) {
//		j = 0;
//		while (ch[i][j] != '\0') {
//			printf("%c", ch[i][j]);
//			j++;
//		}
//		printf("\n");
//
//	}
//	return 0;
//}

#include <stdio.h>
#include <string.h>

// 函数声明
void sort(char* words[], int n);

int main()
{
    // 定义一组单词
    char* words[] = { "cca","cba","bac","abc" };
    // 获取单词数
    int n = sizeof(words) / sizeof(words[0]);

   
        // 输出原无序的单词
        printf("Original words: ");
    for (int i = 0; i < n; i++)
        printf("%s ", words[i]);
    printf("\n");

    // 对单词按字典序排序
    sort(words, n);

    // 输出排序后的单词
    printf("Sorted words: ");
    for (int i = 0; i < n; i++)
        printf("%s ", words[i]);
    printf("\n");

    return 0;
}

// 函数定义：按字典序排序
void sort(char* words[], int n)
{
    char* temp;
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (strcmp(words[i], words[j]) > 0)
            {
                temp = words[i];
                words[i] = words[j];
                words[j] = temp;
            }
}