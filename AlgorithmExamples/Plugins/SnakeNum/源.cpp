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
#include <stdlib.h>
#define Max 4
int main()
{
	int iScanf = 0;
	while (scanf_s("%d",&iScanf)==1&&iScanf>0)
	{//取到正确数值
		int Sank[Max][Max];
		memset(Sank, 0, sizeof(Sank));//养成开辟开间和声明变量时先初始化的好习惯
		int iTotal = 0;
		int iRow = 0; //行
		int iRank = iScanf - 1; //列
		Sank[iRow][iRank] = ++iTotal;
		while(iTotal < iScanf*iScanf) //不能等于，会多执行一次
		{
			while(iRow + 1 < iScanf && !Sank[iRow+1][iRank])//给右侧赋值
				//!Sank[iRow - 1][iRank]代表这个位置没有被填过，仍然为0
				//不能直接--的原因是后面需要--;
			{
				Sank[++iRow][iRank] = ++iTotal;
			}
			while (iRank - 1 >= 0 && !Sank[iRow][iRank-1])//给底部赋值
			{
				Sank[iRow][--iRank] = ++iTotal;
			}
			while (iRow - 1 >= 0 && !Sank[iRow-1][iRank])//给左侧赋值
			{
				Sank[--iRow][iRank] = ++iTotal;
			}
			while (iRank + 1<iScanf && !Sank[iRow ][iRank+1])//给顶部赋值
			{
				Sank[iRow][++iRank] = ++iTotal;
			}
		}
		
		for (int iLine = 0; iLine < iScanf; iLine++)
		{
			for (int iColunm = 0; iColunm < iScanf; iColunm++)
			{
				printf_s("%3d", Sank[iLine][iColunm]);
			}
			printf_s("\n");
		}

	}
	system("Pause");
	return 0;
}