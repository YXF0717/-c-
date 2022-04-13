#include<stdio.h>
int main()
{
	int i = 0, j = 0,k=0;
	for (i = 1; i <= 10; i++)
	{
		for (j = 9; j >=i; j--)
			printf("  ");
		for (j = 1; j <= i-1; j++)
			printf("%2d", j);
		for (k =i-2; k >= 1; k--)
			printf("%2d", k);
		printf("\n");
	}
	return 0;
}