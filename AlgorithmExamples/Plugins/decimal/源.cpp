#include <stdio.h>
#include <math.h>
int main()
{
	int iElement = 0;     //����
	int iDenminator = 0;  //��ĸ
	int iDecimalsNum = 0;    //С��
	int iNum = 0;
	while (scanf_s("%d %d %d",&iElement,&iDenminator,&iDecimalsNum) == 3&&(iElement!=0)&&(iDenminator!=0)&&(iDecimalsNum!=0))
	//ȡ����ȷ����ֵ
	{
		 //�ȴ�ӡ������"."
		int iInteger = iElement/iDenminator;
		printf_s("case%d:%d.", ++iNum, iInteger);
		//��ӡС������
		double dDecimals = (double)iElement / iDenminator - (double)iInteger; //�õ�С������
		//double dDecimals = double(iElement / iDenminator) - (double)iInteger; //ע����������µõ���ֵ��0
		for (int iTemp = 0; iTemp < iDecimalsNum;iTemp++)
		{
			dDecimals *= 10; //С��ת��
		}
		dDecimals += 0.5;//��������
		printf_s("%d\n", (int)dDecimals);
	}

}