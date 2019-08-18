/*输入两个正整数n＜m＜10 6 ，输出 ，保留5位小数。输入包含多组数据，
结束标记为n＝m＝0。提示：本题有陷阱。

样例输入：
2 4
65536 655360
0 0

样例输出：
Case 1: 0.42361
Case 2 : 0.00001
*/


#include <stdio.h>
int main()
{
	int iScanf1 = 0;
	int iScanf2 = 0;
	int iCase = 0;
	while (scanf_s("%d %d",&iScanf1,&iScanf2) == 2)
	{
		if (iScanf1>iScanf2 || iScanf2>=1000000)
		{
			continue;
		}
		
		float sum = 0;
		for (iScanf1; iScanf1 <= iScanf2;iScanf1++)
		{
			//注：陷阱就是在n特别大时如果直接n*n就会溢出，所以只能连除两次
			//sum += (float)1 / (float)(iScanf1*iScanf1);
			sum += float(1.0 / iScanf1) / (float)iScanf1;
		}
		printf_s("case %d:%.5f", ++iCase, sum);
	}
	return 0;
}