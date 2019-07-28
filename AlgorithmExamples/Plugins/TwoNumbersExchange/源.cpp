//交换两数

#include "stdio.h"

//交换两数的方法
int main()
{
	int a = 1;
	int b = 2;
	//法一：
	int c = 0;
	c = a;
	a = b;
	b = c;
	printf("%d %d", a, b);
	printf("\n");
	//法二：
	int d = 1;
	int e = 2;
	d = d + e;
	e = d - e;//a以前的数值
	d = d - e;//b以前的数值
	printf("%d %d", d ,e);
	printf("\n");
	//法三：
	int f = 1;
	int g = 2;
	f = g^f;
	g = g^f;
	f = g^f;
	printf("%d %d", f, g);
	getchar();
    return 0;
}

