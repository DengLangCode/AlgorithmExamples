#include <stdio.h>

int main()
{
	double sum = 0;
	for (size_t i = 0; ; i++)
	{
		double term = 1.0 / (i * 2 + 1);
		if (i%2 == 0)//偶数
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
	//double测试
	double a = 1.23456;
	printf("%9.3f\n", a); //9表示域宽，3表示小数点右边数
	printf("%-9.3f\n", a);//后面有两个空格
	getchar();
	return 0;
}
