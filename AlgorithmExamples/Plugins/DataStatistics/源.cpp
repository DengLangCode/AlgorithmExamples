/*
程序说明：
	输入一些整数，求他们的最小值，最大值和平均值（保留三位小数）
*/
//第一种做法（带有bug）
//原因是max和min没有初始化，结果可能会不可预测,变量在未初始化之前值是不确定的。特别地，他不一定等于0！
//若赋初始值只能给一个很大和很小的值，否则当输入大于或小于最大值和，最小值时结果会有错误

#include <stdio.h>
#include <iostream>
#define iNf  1000000000;
int main()
{
#if 0
	int x = 0;
	int n = 0;
	float sum = 0;
	int max = -iNf;
	int min = iNf;
	while (scanf_s("%d", &x) == 1) //scanf的返回值：返回成功输入的变量的个数
	{
		sum += x;
		if (x >= max)
		{
			max = x;
		}
		if (x < min)
		{
			min = x;
		}
		n++;
	}
	printf_s("max:%d\nmin:%d\nmin:%.2f\n", max, min, sum);
#else if
	FILE *fin, *fout;
	fopen_s(&fin,"./data.in","rb");
	fopen_s(&fout ,"./data.out", "wb");
	int x = 0;
	int n = 0;
	int	max = -iNf;
	int min = iNf;
	int sum = 0;
	while (fscanf_s(fin,"%d", &x) == 1) 
	{
		sum += x;
		if (x >= max)
		{
			max = x;
		}
		if (x < min)
		{
			min = x;
		}
		n++;

	}
	fprintf(fout, "%d %d %.3f", min, max,(double)sum / n);
	fclose(fin);
	fclose(fout);
#endif
	scanf_s("%d",&x);
	return 0;
}