/*�����Գ������ڲ���scanf_s����
	����scanf_s�����ķ���ֵ
	ANSI C��û��scanf_s(),ֻ��scanf()��
	scanf()�ڶ�ȡʱ�����߽磬���Կ��ܻ�����ڴ����Խ�磬���������5�ֽڵĿռ䵫�Ƕ�����10�ֽ�
	char buf[5]={'\0'};
	scanf("%s", buf);
	�������1234567890������Ĳ��ֻᱻд����Ŀռ���ȥ��
	���ϴ��������scanf_s,�ڶ���Ӧ��Ϊscanf_s("%s",buf,5),��ʾ����ȡ4���ַ�����Ϊbuf[4]Ҫ��'\0'
	scanf_s���һ�������ǻ������Ĵ�С����ʾ����ȡn-1���ַ�.
	vc++2005/2008���ṩ��scanf_s(),�����µ�VS2015��Ҳ�ṩ��scanf_s()���ڵ���ʱ�������ṩһ�������Ա�������ȡ����λ�ַ���
	3.��ȡ�����ַ�Ҳ��Ҫ�޶����ȣ�scanf_s("%c,%c",&c1,1,&c2,1);������д��scanf_s("%c,%c",&c1, &c2,1, 1);����������ᱨ��
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int iTemp1 = 0;
	int iTemp2 = 0;
	int iTemp3 = 0;
	int iCnt1 = scanf_s("%d",&iTemp1);
	int iCnt2 = scanf_s("%d %d", &iTemp1, &iTemp2);
	char strTemp[20];
	int iCnt3 = scanf_s("%s",strTemp,20);
	printf_s("%s\n", strTemp);
	printf_s("%d %d %d", iCnt1, iCnt2, iCnt3);
	system("PAUSE");
	return 0;
}
//���������1.scanf_s�ķ���ֵ�ǳɹ���ȡ�����û�����ĸ���
//			2.scanf_s(%s)�õ�һ���ַ���������ֵҲ��1;
//			3.�û���������ֻ����ַ����Կո�ָ������ӵ�ǰλ�ö�ȡ�ո�ǰ����ַ�