/*ˮ�ɻ�����Narcissistic number��Ҳ����Ϊ����ȫ���ֲ�������pluperfect digital invariant, PPDI����
������������������ķ˹׳����ķ˹��������Armstrong number����
ˮ�ɻ�����ָһ�� 3 λ��������ÿ��λ�ϵ����ֵ� 3����֮�͵���������
�����磺1 ^ 3 + 5 ^ 3 + 3 ^ 3 = 153����
��λ��ˮ�ɻ�������4����153��370��371��407��
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
	//��һ��ö��100-1000�µ�������������ˮ�����Ĵ�ӡ����
#ifdef MENTHOD1
	for (int iDaffodil = 100; iDaffodil < 1000; iDaffodil++)
	{
		int iUnits = iDaffodil % 10; //��λ��
		int iTens = (iDaffodil % 100)/10; //ʮλ��
		int ihundreds = (iDaffodil%1000) / 100; //��λ��
		if (iDaffodil == iUnits*iUnits*iUnits +iTens*iTens*iTens+ihundreds*ihundreds*ihundreds)
		{
			printf_s("%d = %d***+%d***+%d***\n", iDaffodil,iUnits,iTens,ihundreds);
		}
		
	}
#endif
	//������ö�ٸ�λʮλ��λ�������������Ĵ�ӡ����
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
					if (iHundreds*iHundreds*iHundreds + iTens*iTens*iTens + iUnits*iUnits*iUnits == iDaffodil)//�õ�����ֵ��Ϊ��Ӧ�����֣�Ȼ�����ж�
					{
						printf_s("%d ", iDaffodil);
					}
				}
				
			}
		}
	}

#endif
	clock_t dBegin = clock()/CLOCKS_PER_SEC;
	printf_s("�������е�ʱ��Ϊ��%d\n",dBegin);
	system("PAUSE");
	return 0;

}