#include <stdio.h>
#include <string.h>
#define MAXLIGHT 100
int main()
{
	int iPerson = 0, iLight = 0;
	int LightArry[MAXLIGHT];
	memset(LightArry, 0, sizeof(LightArry));
	while (scanf_s("%d%d",&iLight,&iPerson) == 2&&iLight&&iPerson&&iLight<MAXLIGHT) //成功获取道数据
	{
		for (size_t i = 1; i <= iPerson; i++)//以次序获取到总人数
		{
			for (size_t j = 0; j <= iLight; j++)//遍历所有的灯 以1计，丢弃了0位
			{
				if (j%i == 0)//取到人数字编号的整数倍
				{
					LightArry[j]++;//关闭的时候是0，所以最后奇数时打开，偶数是关闭
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