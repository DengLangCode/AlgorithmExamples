#include <stdio.h>
#include <stdlib.h>
#define INF 1000000000
int main()
{
	int x =0;
	int n = 0;
	int min = INF;
	int max = -INF;
	int sum = 0;
	int ksae = 0;
	while (scanf_s("%d", &n) ==1 && n)  
	//循环放入n中;当输入遇到0时跳出循环，若n=0则函数循环结束
	//调试证明：&&逻辑运算符中；程序总是先执行前一个表达式再执行后面一个表达式
	{
		int s = 0;
		for (int i = 0; i < n ; i++)
		{
			scanf_s("%d", &x);
			s += x;
			if (x<min)
			{
				min = x;
			}
			if (x>max)
			{
				max = x;
			}
			if (ksae)
			{
				printf_s("\n");
			}
			printf_s("Case %d:max=%d min=%d aver=%.3f\n", ++ksae,max, min, (double)s / n);
		}
		
		
	}
	system("pause");
	return 0;
}