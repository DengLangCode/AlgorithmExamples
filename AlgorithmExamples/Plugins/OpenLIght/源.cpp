/*
描述
有 n 盏灯，编号为 1~n，第 1 个人把所有灯打开，第 2 个人按下所有编号为 2 的倍数的开关（这些灯将被关掉）
，第 3 个人按下所有编号为 3 的倍数的开关（其中关掉的灯将被打开，开着的灯将被关闭），依此类推。一共有 k 个人，
问最后有哪些灯开着？输入：n 和 k，输出开着的灯编号。k≤n≤1000

输入
输入一组数据：n 和 k
输出
输出开着的灯编号
样例输入
7 3
样例输出
1 5 6 7
*/
#include <stdio.h>
#include <string.h>
#define MAXLIGHT 100
int main()
{
	int iPerson = 0, iLight = 0;
	int LightArry[MAXLIGHT];
	memset(LightArry, 0, sizeof(LightArry));
	while (scanf_s("%d%d",&iLight,&iPerson) == 2&&iLight&&iPerson&&iLight<MAXLIGHT) //成功获取到数据
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