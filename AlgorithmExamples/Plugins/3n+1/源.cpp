

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int n, count = 0;
	//scanf_s("%d", &n);
	n = 987654321; 
	long long p = n;//·ÀÖ¹³Ë·¨Òç³ö
	while (p>1)
	{
		if (p % 2 == 1)
		{
			p = 3*p + 1;
		}
		else
		{
			p = p / 2;
		}
		//printf("%d\n", p);
		count++;
	}
	printf("%d\n", count);
	getchar();
}