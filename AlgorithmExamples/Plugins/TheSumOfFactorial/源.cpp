#include <stdio.h>
#include <time.h>
/***********************************************
程序说明：输入n，计算n的阶乘之和，打印得到的阶乘之和的后六位。
函数说明：clock_t clock(void):计算程序从运行开始到运行该语句所用的时间。
主要说明的问题:1.取出一个数的后n位，若前者的数比较大，如100！=9.3326215443944e+157超过int可表示的范围；我们可以
				先保证我们的每个数都只取后六位。这样得到的结果不会改变。
			   2.从程序的运行效率上讲，25的阶乘
**********************************************/
int main()
{
	int sum = 0;
	int n = 0;
	scanf_s("%d", &n);
	clock_t dBegin = clock();
	for (int i = 1; i <= n;i++)//得到1-n
	{
		int j = 1;//每次必须重新赋值得到阶乘
		for (int k = 1; k <= i;k++)
		{
			//j *= k;
			j = (j * k)%1000000; //保证每一次取到的阶乘的值小于1000000
		}
		sum =(sum + j)%1000000; //保证最后的结果值小于1000000
	}
	clock_t dEnd= clock();
	printf("阶乘的和的后六位 = %d\n", sum);
	double iTimeUsed = (double)(dEnd-dBegin)/CLOCKS_PER_SEC; //从程序开始到程序运行到此所用的时间
	printf_s("所用的时间 = %.8f\n", iTimeUsed);
	scanf_s("%d", &n);
	return 0;
}