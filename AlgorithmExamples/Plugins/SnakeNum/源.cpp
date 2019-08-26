/*
描述：
给定一个 n ， 在  n * n 的方阵中填入 1, 2, 3，……，n * n, 要求填成蛇形。
例如在 n = 5 时 ， 如下所示： 

13   14   15   16   1
12   23   24   17   2
11   22   25   18   3
10   21   20   19   4
9     8    7    6   5
*/
/*
思路解析：
1.最大值为n*n;从右起分别一条直线画蛇形
流程为：取到正确数值->建立二维数组保存n行n列的值->计算得出每个行和列所该有的值->打印
*/

#include <stdio.h>
#include <string.h>
#define Max 8
int main()
{
	int iScanf = 0;
	while (scanf_s("%d",&iScanf)==1&&iScanf>0)
	{//取到正确数值
		int Sank[Max][Max];
		memset(Sank, 0, sizeof(Sank));//养成开辟开间和声明变量时先初始化的好习惯
		int iTotal = 0;
		for (int i = 0; i < iScanf - 1; i++)//给右侧最后一列赋值
		{
			Sank[i][iScanf - 1] = ++iTotal;
		}
		for (int j = iScanf - 1; j <= 0 ; j--)//给底部最后一行赋值
		{
			Sank[iScanf - 1][j] = ++iTotal;
		}
		for (int k = iScanf - 1; k <= 0; k--)//给左侧第一列赋值
		{
			Sank[0][k] = ++iTotal;
		}
		for (int l = 0; l < iScanf ; l--)//给顶部第一行赋值
		{
			Sank[0][l] = ++iTotal;
		}
		for (int iLine = 0; iLine < iScanf*iScanf; iLine++)
		{
			for (int iColunm = 0; iColunm < iScanf*iScanf; iColunm++)
			{
				printf_s("%3d", Sank[iLine][iColunm]);
			}
			printf_s("\n");
		}

	}

	return 0;
}