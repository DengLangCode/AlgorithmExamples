/*
����˵����
	����һЩ�����������ǵ���Сֵ�����ֵ��ƽ��ֵ��������λС����
*/
//��һ������������bug��
//ԭ����max��minû�г�ʼ����������ܻ᲻��Ԥ��,������δ��ʼ��֮ǰֵ�ǲ�ȷ���ġ��ر�أ�����һ������0��
//������ʼֵֻ�ܸ�һ���ܴ�ͺ�С��ֵ������������ڻ�С�����ֵ�ͣ���Сֵʱ������д���

#include <stdio.h>
#include <iostream>
#define iNf  1000000000;
int main()
{
#if 0
	int x = 0;
	int n = 0;
	float sum = 0;
	int max = -iNf;
	int min = iNf;
	while (scanf_s("%d", &x) == 1) //scanf�ķ���ֵ�����سɹ�����ı����ĸ���
	{
		sum += x;
		if (x >= max)
		{
			max = x;
		}
		if (x < min)
		{
			min = x;
		}
		n++;
	}
	printf_s("max:%d\nmin:%d\nmin:%.2f\n", max, min, sum);
#else if
	FILE *fin, *fout;
	fopen_s(&fin,"./data.in","rb");
	fopen_s(&fout ,"./data.out", "wb");
	int x = 0;
	int n = 0;
	int	max = -iNf;
	int min = iNf;
	int sum = 0;
	while (fscanf_s(fin,"%d", &x) == 1) 
	{
		sum += x;
		if (x >= max)
		{
			max = x;
		}
		if (x < min)
		{
			min = x;
		}
		n++;

	}
	fprintf(fout, "%d %d %.3f", min, max,(double)sum / n);
	fclose(fin);
	fclose(fout);
#endif
	scanf_s("%d",&x);
	return 0;
}