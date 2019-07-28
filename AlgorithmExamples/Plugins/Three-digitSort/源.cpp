// 三整数排序.cpp : 定义控制台应用程序的入口点。
//

#include "stdio.h"


int main()
{
	int a = 1;
	int b = 2;
	int c = 3;
	//法一：
	if (a >= b && b >= c)
	{
		printf("%d %d %d", a, b, c);
	}
	else if (a >= c && c >= b)
	{
		printf("%d %d %d", a, c, b);
	}
	else if (b >= a && a >= c)
	{
		printf("%d %d %d", b, a, c);
	}
	else if (b >= c && c >= a)
	{
		printf("%d %d %d", b, c, a);
	}
	else if (c >= a && a >= b)
	{
		printf("%d %d %d", c, a, b);
	}
	else if (c >= b && b >= a)
	{
		printf("%d %d %d", c, b, a);
	}
	printf("\n");
	//法二：把变量改成a>=b>=c的格式
	int temp;
	if (a < b)
	{
		temp = a;
		a = b;
		b = temp;
		//执行完后a>=b
	}
	if (a < c)
	{
		temp = a;
		a = c;
		c = temp;
		//执行完后a>=c;且a>=b依然成立
	}
	if (b < c)
	{
		temp = b;
		b = c;
		c = temp;
	}
	printf("%d %d %d", a, b, c);
	getchar();
    return 0;
}

