#include <stdio.h>
#include <math.h>
int main()
{
	int iElement = 0;     //分子
	int iDenminator = 0;  //分母
	int iDecimalsNum = 0;    //小数
	int iNum = 0;
	while (scanf_s("%d %d %d",&iElement,&iDenminator,&iDecimalsNum) == 3&&(iElement!=0)&&(iDenminator!=0)&&(iDecimalsNum!=0))
	//取到正确的数值
	{
		 //先打印整数和"."
		int iInteger = iElement/iDenminator;
		printf_s("case%d:%d.", ++iNum, iInteger);
		//打印小数部分
		double dDecimals = (double)iElement / iDenminator - (double)iInteger; //得到小数部分
		//double dDecimals = double(iElement / iDenminator) - (double)iInteger; //注意这种情况下得到的值是0
		for (int iTemp = 0; iTemp < iDecimalsNum;iTemp++)
		{
			dDecimals *= 10; //小数转整
		}
		dDecimals += 0.5;//四舍五入
		printf_s("%d\n", (int)dDecimals);
	}

}