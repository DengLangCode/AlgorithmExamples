// ��λ����ת.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdio.h"


int main()
{
	int a = 123;
// 	printf("������һ������:");
// 	scanf_s("%d", &a);
	int b = a / 100;
	int c = a / 10 % 10;
	int d = a % 10;
	printf("%d", d * 100 + c * 10 + b);
	getchar();
    return 0;
}

