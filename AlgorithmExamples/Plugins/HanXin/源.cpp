/*
问题描述：
相传韩信才智过人，从不直接清点自己军队的人数，只要让士兵先后以三人一排、五人一排、七人一排地变换队形，
而他每次只掠一眼队伍的排尾就知道总人数了。输入3个非负整数a,b,c ，表示每种队形排尾的人数（a<3,b<5,c<7），
输出总人数的最小值（或报告无解）。已知总人数不小于10，不超过100 。

输入
输入3个非负整数a,b,c ，表示每种队形排尾的人数（a<3,b<5,c<7）。
输出
输出总人数的最小值（或报告无解，即输出No answer）。实例，输出：89

样例输入:
2 1 6
样例输出:
41
样例输入:
2 1 3
样例输出:
No Answer
*/

/*
问题总结：若题目给定范围,而这个范围有限。往往我们可以枚举这个范围内的所有合理的数字，取出我们想要的值
*/


#include <stdio.h>
#include <stdlib.h>

#define  MENTHOD1

int main()
{

	int iThirdScanf = 0;
	int iFiveScanf = 0;
 	int iSevenScanf = 0;
	while(scanf_s("%d %d %d", &iThirdScanf, &iFiveScanf, &iSevenScanf) == 3 && iThirdScanf > 0 && iThirdScanf < 4
		&&iFiveScanf>0&&iFiveScanf<6&&iSevenScanf>0&&iSevenScanf<8) //获取到了正确的数值
	{
		bool bFind = false;
#ifdef  MENTHOD1
		/*
		算法分析：枚举满足范围内的所有值；找出满足条件的值
		*/
		for (int i = 10; i <= 100;i++)
		{
			if (i%3 == iThirdScanf&&i%5 == iFiveScanf&&i%7 == iSevenScanf)//满足条件
			{
				printf_s("%d\n", i);
				bFind = true;
			}
			
		}
#endif //  MENTHOD1
#ifdef MENTHOD2
		/*
		算法分析：因为人数一定会满足3或5或7的n倍；
		为了减少运算量我们可以先取到7的n倍加上末尾数；
		每次加七；减少了大量的循环次数
		*/
		for (int i = iSevenScanf; i <= 100;i = i+7)
		{
			if (i % 3 == iThirdScanf&&i % 5 == iFiveScanf&&i % 7 == iSevenScanf)//满足条件
			{
				printf_s("%d\n", i);
				bFind = true;
			}
		}

#endif //MENTHOD2
		
#ifdef METHOD3
		for (int i = iSevenScanf; i <= 100; i = i + 7)
		{
			if (i % 3 == iThirdScanf&&i % 5 == iFiveScanf&&i % 7 == iSevenScanf)//满足条件
			{
				printf_s("%d\n", i);
				bFind = true;
			}
		}

#endif // METHOD3


		if (!bFind)
		{
			printf_s("No Answer\n");
		}
	}
	printf_s("输入了不合法的数字\n");
	system("pause");
	return 0;


}