//�ַ�������
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX  10
int main()
{
	char cScanf[MAX] = {}; //�ַ���ʼ��
	int iCase = 0;
	while (scanf_s("%s", &cScanf, MAX) == 1)//%d,%c���Բ�дscanf_s�ĵ�����������"%s"����д��
	{
		printf_s("Case%d:", ++iCase);
		for (int i = 0; i <= MAX; i++)
		{
			printf_s("%c", cScanf[MAX-i-1]); //�����MAX-1λ
		}
		printf_s("\n");
	}
	return 0;
}