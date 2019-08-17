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
				printf_s(" "); //先打印空行
			}
			//空行打印结束后开始打印符号
			for (int j = i*2-1; j >0; j--) //打印2n+1个"#"
			{
				printf_s("#");
			}
			printf_s("\n");//打印完2n+1个"#"后打印换行
		}
	}
}