/*
debug����release��;release��������

*/
#include <stdio.h>
#define TWO
int main()
{
	int iDivisor = 0;  //����
	int iDevidend = 0; //������
	int iTest = 1;
	{
# ifdef ZERO
		int iResult = iTest / iDevidend;
		//������Ϊ0; debugֱ�ӱ�releaseû��
#endif
# ifdef ONE
		int iResult = iDevidend / iTest;
		//����Ϊ0; debug��releaseû��
#endif
# ifdef TWO
		int iResult = iDevidend % iTest;
		//ȡ�����,����Ϊ0; debug��releaseû��
#endif
# ifdef THREE
		int iResult = iTest%iDevidend;
		//ȡ�����,������Ϊ0; debug��releaseû��
#endif
		
	}
	return 0;
}