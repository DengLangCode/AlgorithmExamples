#include <stdio.h>
int main()
{
	int iScanf = 0;
	while(scanf_s("%d",&iScanf) == 1)
	{
		for (int i = iScanf; i > 0;i--)
		{
			for (int k = iScanf - i; k > 0; k--)
			{
				printf_s(" "); //�ȴ�ӡ����
			}
			//���д�ӡ������ʼ��ӡ����
			for (int j = i*2-1; j >0; j--) //��ӡ2n+1��"#"
			{
				printf_s("#");
			}
			printf_s("\n");//��ӡ��2n+1��"#"���ӡ����
		}
	}
}