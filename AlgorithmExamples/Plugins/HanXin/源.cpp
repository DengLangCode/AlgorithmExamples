/*
����������
�ഫ���Ų��ǹ��ˣ��Ӳ�ֱ������Լ����ӵ�������ֻҪ��ʿ���Ⱥ�������һ�š�����һ�š�����һ�ŵر任���Σ�
����ÿ��ֻ��һ�۶������β��֪���������ˡ�����3���Ǹ�����a,b,c ����ʾÿ�ֶ�����β��������a<3,b<5,c<7����
�������������Сֵ���򱨸��޽⣩����֪��������С��10��������100 ��

����
����3���Ǹ�����a,b,c ����ʾÿ�ֶ�����β��������a<3,b<5,c<7����
���
�������������Сֵ���򱨸��޽⣬�����No answer����ʵ���������89

��������:
2 1 6
�������:
41
��������:
2 1 3
�������:
No Answer
*/

/*
�����ܽ᣺����Ŀ������Χ,�������Χ���ޡ��������ǿ���ö�������Χ�ڵ����к�������֣�ȡ��������Ҫ��ֵ
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
		&&iFiveScanf>0&&iFiveScanf<6&&iSevenScanf>0&&iSevenScanf<8) //��ȡ������ȷ����ֵ
	{
		bool bFind = false;
#ifdef  MENTHOD1
		/*
		�㷨������ö�����㷶Χ�ڵ�����ֵ���ҳ�����������ֵ
		*/
		for (int i = 10; i <= 100;i++)
		{
			if (i%3 == iThirdScanf&&i%5 == iFiveScanf&&i%7 == iSevenScanf)//��������
			{
				printf_s("%d\n", i);
				bFind = true;
			}
			
		}
#endif //  MENTHOD1
#ifdef MENTHOD2
		/*
		�㷨��������Ϊ����һ��������3��5��7��n����
		Ϊ�˼������������ǿ�����ȡ��7��n������ĩβ����
		ÿ�μ��ߣ������˴�����ѭ������
		*/
		for (int i = iSevenScanf; i <= 100;i = i+7)
		{
			if (i % 3 == iThirdScanf&&i % 5 == iFiveScanf&&i % 7 == iSevenScanf)//��������
			{
				printf_s("%d\n", i);
				bFind = true;
			}
		}

#endif //MENTHOD2
		
#ifdef METHOD3
		for (int i = iSevenScanf; i <= 100; i = i + 7)
		{
			if (i % 3 == iThirdScanf&&i % 5 == iFiveScanf&&i % 7 == iSevenScanf)//��������
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
	printf_s("�����˲��Ϸ�������\n");
	system("pause");
	return 0;


}