#include <stdio.h>

int main()
{
	double sum = 0;
	for (size_t i = 0; ; i++)
	{
		double term = 1.0 / (i * 2 + 1);
		if (i%2 == 0)//ż��
		{
			sum +=  term;
		}
		else
		{
			sum -= term;
		}
		if (term <1e-6)
		{
			break;
		}
	}
	printf("%.8f\n", sum);
	//double����
	double a = 1.23456;
	printf("%9.3f\n", a); //9��ʾ���3��ʾС�����ұ���
	printf("%-9.3f\n", a);//�����������ո�
	getchar();
	return 0;
}
