// ����������.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdio.h"


int main()
{
	int a = 1;
	int b = 2;
	int c = 3;
	//��һ��
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
	//�������ѱ����ĳ�a>=b>=c�ĸ�ʽ
	int temp;
	if (a < b)
	{
		temp = a;
		a = b;
		b = temp;
		//ִ�����a>=b
	}
	if (a < c)
	{
		temp = a;
		a = c;
		c = temp;
		//ִ�����a>=c;��a>=b��Ȼ����
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

