#include <stdio.h>
#define  Max 100000
int main()
{
	int iScanfNum = 0;
	int iCsae = 0;
	while (scanf_s("%d",&iScanfNum) == 1 && iScanfNum)//�Ƿ��ȡ����ȷ�ĸ���
	{
		if (iScanfNum <= 0)
		{
			printf("please input correct data number\n");
			continue;
		}
		int iSum = 0;
		int iRealDataNum = 0;
		int iGetNum;
		int iMax = -Max; //���ֵ��һ����С��ֵ�Ƚ�
		int iMin = Max; //��Сֵ��һ���ܴ��ֵ�Ƚ�
		for (int i = 0; i < iScanfNum;i++)
		{
			if (scanf_s("%d", &iGetNum) == 1 && iGetNum) //�������
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