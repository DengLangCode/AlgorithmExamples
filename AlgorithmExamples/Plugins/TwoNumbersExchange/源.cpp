//��������

#include "stdio.h"

//���������ķ���
int main()
{
	int a = 1;
	int b = 2;
	//��һ��
	int c = 0;
	c = a;
	a = b;
	b = c;
	printf("%d %d", a, b);
	printf("\n");
	//������
	int d = 1;
	int e = 2;
	d = d + e;
	e = d - e;//a��ǰ����ֵ
	d = d - e;//b��ǰ����ֵ
	printf("%d %d", d ,e);
	printf("\n");
	//������
	int f = 1;
	int g = 2;
	f = g^f;
	g = g^f;
	f = g^f;
	printf("%d %d", f, g);
	getchar();
    return 0;
}

