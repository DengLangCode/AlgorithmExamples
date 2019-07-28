// 三位数反转.cpp : 定义控制台应用程序的入口点。
//

#include "stdio.h"


int main()
{
	int a = 123;
// 	printf("请属于一个整数:");
// 	scanf_s("%d", &a);
	int b = a / 100;
	int c = a / 10 % 10;
	int d = a % 10;
	printf("%d", d * 100 + c * 10 + b);
	getchar();
    return 0;
}

