#include<stdio.h>
int main()
{
	int a;
	scanf_s("%d", &a);
	if (a > 0)
		printf("%d������", a);
	else if (a < 0)
		printf("%d�Ǹ���", a);
	else
		printf("%d����", a);
	return 0;
}