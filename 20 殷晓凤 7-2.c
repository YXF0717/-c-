#include<stdio.h>
int main()
{
	int i = 0;
	float j=0,sum = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 2 == 0)
			j =(float)1 / i * (-1);
		else
			j =(float) 1 / i;
		sum = j + sum;
	}
	printf("%.4f", sum);
	return 0;
}