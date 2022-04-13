#include<stdio.h>
int main()
{
	int  i = 0,j=0;
	for (i=1; i<=100; i++)
	{
		if (i % 7 == 0 || i % 11 == 0)
		{
			printf("%4d", i);
			j++;
			if (j % 5 == 0)
				printf("\n");
		}
	}
	return 0;
}