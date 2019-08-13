#include <stdio.h>
#define  Max 100000
int main()
{
	int iScanfNum = 0;
	int iCsae = 0;
	while (scanf_s("%d",&iScanfNum) == 1 && iScanfNum)//是否获取道正确的个数
	{
		if (iScanfNum <= 0)
		{
			printf("please input correct data number\n");
			continue;
		}
		int iSum = 0;
		int iRealDataNum = 0;
		int iGetNum;
		int iMax = -Max; //最大值与一个很小的值比较
		int iMin = Max; //最小值与一个很大的值比较
		for (int i = 0; i < iScanfNum;i++)
		{
			if (scanf_s("%d", &iGetNum) == 1 && iGetNum) //以零结束
			{
				iSum += iGetNum;
				iRealDataNum++;
				if (iGetNum >iMax)
				{
					iMax = iGetNum;
				}
				if (iGetNum <iMin)
				{
					iMin = iGetNum;
				}
			}
			else
			{
				break; 
			}
		}
		printf("case %d:sum = %d RealNum = %d Average = %f Max = %d Min = %d\n", ++iCsae,iSum, iRealDataNum, double(iSum / iRealDataNum),iMax,iMin);
	}
	
	
}