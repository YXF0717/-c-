#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int a = 0,b=0 , c = 0, max = 1, min = 100;
	srand(time(NULL));
	for (a = 1; a <= 20; a++)
	{
		b = rand() % 100 + 1;
		printf("%4d", b);
		c++;
		if (c % 5 == 0)
			printf("\n");
		while (max < b)
		{
			max = b;
		}
		while (min > b)
		{
			min = b;
		}
	}
	printf("其中最大值是:%d,最小值是:%d", max, min);
	return 0;
}
