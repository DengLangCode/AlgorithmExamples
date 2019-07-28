//º∆À„ «= 1£°+2£°+3£°+....+n!
#include <stdio.h>
int main()
{
	int n = 100;
	int sum = 0;
	for (size_t i = 1; i <= n; i++)
	{
		int factorial = 1;
		for (size_t j = 1;j <= i; j++)
		{
			factorial = factorial*j%1000000;
		}
		sum += factorial;
	}
	printf("%d\n", sum%1000000);
	getchar();
	return 0;
}