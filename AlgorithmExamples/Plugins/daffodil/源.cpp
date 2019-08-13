/*水仙花数（Narcissistic number）也被称为超完全数字不变数（pluperfect digital invariant, PPDI）、
自恋数、自幂数、阿姆斯壮数或阿姆斯特朗数（Armstrong number），
水仙花数是指一个 3 位数，它的每个位上的数字的 3次幂之和等于它本身
（例如：1 ^ 3 + 5 ^ 3 + 3 ^ 3 = 153）。
三位的水仙花数共有4个：153，370，371，407；
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define  MENTHOD2
int main()
{
// 	for (int i = 100; i < 1000;i++)
// 	{
// 		for (int j = 1; j< 1000;j++)
// 		{
// 			for (int k = 1; k < 1000;k++)
// 			{
// 				for (int z = 1; z < 1000;z++)
// 				{
// 					if (i == j*j*j+  k*k*k + z*z*z)
// 					{
// 						printf_s("%d ", i);
// 					}
// 					
// 				}
// 			}
// 		}
// 	}
// 	system("PAUSE");
// 	return 0;
	//法一：枚举100-1000下的所有数，满足水仙数的打印出来
#ifdef MENTHOD1
	for (int iDaffodil = 100; iDaffodil < 1000; iDaffodil++)
	{
		int iUnits = iDaffodil % 10; //个位数
		int iTens = (iDaffodil % 100)/10; //十位数
		int ihundreds = (iDaffodil%1000) / 100; //百位数
		if (iDaffodil == iUnits*iUnits*iUnits +iTens*iTens*iTens+ihundreds*ihundreds*ihundreds)
		{
			printf_s("%d = %d***+%d***+%d***\n", iDaffodil,iUnits,iTens,ihundreds);
		}
		
	}
#endif
	//法二：枚举个位十位百位数，满足条件的打印出来
#ifdef MENTHOD2
	for (int iHundreds = 0; iHundreds < 10;iHundreds++)
	{
		for (int iTens = 0; iTens< 10;iTens++)
		{
			for (int iUnits = 0; iUnits < 10;iUnits++)
			{
				int iDaffodil = iHundreds * 100 + iTens * 10 + iUnits;
				if (iDaffodil>100)
				{
					if (iHundreds*iHundreds*iHundreds + iTens*iTens*iTens + iUnits*iUnits*iUnits == iDaffodil)//得到的数值换为对应的数字；然后做判断
					{
						printf_s("%d ", iDaffodil);
					}
				}
				
			}
		}
	}

#endif
	clock_t dBegin = clock()/CLOCKS_PER_SEC;
	printf_s("程序运行的时间为：%d\n",dBegin);
	system("PAUSE");
	return 0;

}