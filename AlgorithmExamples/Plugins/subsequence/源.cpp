/*��������������n��m��10 6 ����� ������5λС������������������ݣ�
�������Ϊn��m��0����ʾ�����������塣

�������룺
2 4
65536 655360
0 0

���������
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
			//ע�����������n�ر��ʱ���ֱ��n*n�ͻ����������ֻ����������
			//sum += (float)1 / (float)(iScanf1*iScanf1);
			sum += float(1.0 / iScanf1) / (float)iScanf1;
		}
		printf_s("case %d:%.5f", ++iCase, sum);
	}
	return 0;
}