#include<stdio.h>
int main()
{
	int a = 0, b = 0;
	for (a = 200; a >= 100; a--)
	{
		if (a % 2 == 0)
			printf("%4d", a);
		b++;
		if (b % 16 == 0 )
			printf("\n");
	}
	return 0;
}