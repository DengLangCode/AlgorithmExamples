/*本测试程序意在测试scanf_s函数
	测试scanf_s函数的返回值
	ANSI C中没有scanf_s(),只有scanf()，
	scanf()在读取时不检查边界，所以可能会造成内存访问越界，例如分配了5字节的空间但是读入了10字节
	char buf[5]={'\0'};
	scanf("%s", buf);
	如果输入1234567890，后面的部分会被写到别的空间上去。
	以上代码如果用scanf_s,第二行应改为scanf_s("%s",buf,5),表示最多读取4个字符，因为buf[4]要放'\0'
	scanf_s最后一个参数是缓冲区的大小，表示最多读取n-1个字符.
	vc++2005/2008中提供了scanf_s(),在最新的VS2015中也提供了scanf_s()。在调用时，必须提供一个数字以表明最多读取多少位字符。
	3.读取单个字符也需要限定长度：scanf_s("%c,%c",&c1,1,&c2,1);而不能写成scanf_s("%c,%c",&c1, &c2,1, 1);否则编译器会报错
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
//程序表明：1.scanf_s的返回值是成功获取到的用户输入的个数
//			2.scanf_s(%s)得到一个字符串，返回值也是1;
//			3.用户输入的数字或者字符串以空格分隔开；从当前位置读取空格前面的字符