#include<stdio.h>
int main()
{
	int a = 0, i = 0,sum=0;
	printf("������һ������");
	scanf_s("%d", &a);
	while (a <= 1)
	{
		printf("�������\n���������룺");
		scanf_s("%d", &a);
	}
	for (i = 1; i <= a; i++)
	{
		sum = sum + i;
	}
	printf("%d", sum);
	return 0;
}