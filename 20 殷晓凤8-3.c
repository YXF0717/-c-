#include<stdio.h>
int main()
{
	int i = 0, j = 0,sum=0;
	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= i; j++)
		{
			sum = i * j;
			printf("%d*%d=%d ", i, j, sum);
		}
		printf("\n");
	}
	return 0;
}