#include <stdio.h>
#include <string.h>
#define MAXLIGHT 100
int main()
{
	int iPerson = 0, iLight = 0;
	int LightArry[MAXLIGHT];
	memset(LightArry, 0, sizeof(LightArry));
	while (scanf_s("%d%d",&iLight,&iPerson) == 2&&iLight&&iPerson&&iLight<MAXLIGHT) //�ɹ���ȡ������
	{
		for (size_t i = 1; i <= iPerson; i++)//�Դ����ȡ��������
		{
			for (size_t j = 0; j <= iLight; j++)//�������еĵ� ��1�ƣ�������0λ
			{
				if (j%i == 0)//ȡ�������ֱ�ŵ�������
				{
					LightArry[j]++;//�رյ�ʱ����0�������������ʱ�򿪣�ż���ǹر�
				}

			}
			
		}
		for (int iPrint = 1; iPrint <= iLight;iPrint++)
		{
			if (LightArry[iPrint]%2 == 1)
			{
				printf_s("%d ", iPrint);
			}
		}
		printf_s("\n");
	}
	return 0;

}