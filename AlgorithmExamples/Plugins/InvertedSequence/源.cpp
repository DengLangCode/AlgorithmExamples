//字符串逆序
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX  10
int main()
{
	char cScanf[MAX] = {}; //字符初始化
	int iCase = 0;
	while (scanf_s("%s", &cScanf, MAX) == 1)//%d,%c可以不写scanf_s的第三个参数，"%s"必须写上
	{
		printf_s("Case%d:", ++iCase);
		for (int i = 0; i <= MAX; i++)
		{
			printf_s("%c", cScanf[MAX-i-1]); //最多有MAX-1位
		}
		printf_s("\n");
	}
	return 0;
}