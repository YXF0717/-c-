#include<stdio.h>
int main()
{
	int a = 0, i = 0,sum=0;
	printf("请输入一个数：");
	scanf_s("%d", &a);
	while (a <= 1)
	{
		printf("输入错误！\n请重新输入：");
		scanf_s("%d", &a);
	}
	for (i = 1; i <= a; i++)
	{
		sum = sum + i;
	}
	printf("%d", sum);
	return 0;
}