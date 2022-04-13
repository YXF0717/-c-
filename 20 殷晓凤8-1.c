#include<stdio.h>
int main()
{
	int i = 0, j = 0,a=0,b=0,c=0;
	for (i = 100; i <= 200; i++)
	{
		a = i / 100;
		b = i % 100 / 10;
		c = i % 100;
		if (a != 3 && b != 3 && c != 3 && i % 3 != 0)
		{
			printf("%4d", i);
			j++;
			if (j % 5 == 0)
				printf("\n");
		}
	}
	return 0;
}