/*
debug崩完release崩;release崩完打包崩

*/
#include <stdio.h>
#define TWO
int main()
{
	int iDivisor = 0;  //除数
	int iDevidend = 0; //被除数
	int iTest = 1;
	{
# ifdef ZERO
		int iResult = iTest / iDevidend;
		//被除数为0; debug直接崩release没崩
#endif
# ifdef ONE
		int iResult = iDevidend / iTest;
		//除数为0; debug和release没崩
#endif
# ifdef TWO
		int iResult = iDevidend % iTest;
		//取余操作,除数为0; debug和release没崩
#endif
# ifdef THREE
		int iResult = iTest%iDevidend;
		//取余操作,被除数为0; debug崩release没崩
#endif
		
	}
	return 0;
}