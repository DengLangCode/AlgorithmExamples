/*
����˵����
	����һЩ�����������ǵ���Сֵ�����ֵ��ƽ��ֵ��������λС����
*/
//��һ������������bug��
//ԭ����max��minû�г�ʼ����������ܻ᲻��Ԥ��,������δ��ʼ��֮ǰֵ�ǲ�ȷ���ġ��ر�أ�����һ������0��
//������ʼֵֻ�ܸ�һ���ܴ�ͺ�С��ֵ������������ڻ�С�����ֵ�ͣ���Сֵʱ������д���

#include <stdio.h>
int main()
{
	int iNf = 1000000000;
	int x = 0;
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
		
	}
	printf_s("max:%d\nmin:%d\nmin:%.2f\n", max, min, sum);
	scanf_s("%d",&x);
	return 0;
}