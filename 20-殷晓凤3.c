#include<stdio.h>
int main()
{
	int a;
	scanf_s("%d", &a);
	if (a > 0)
		printf("%d是正数", a);
	else if (a < 0)
		printf("%d是负数", a);
	else
		printf("%d是零", a);
	return 0;
}