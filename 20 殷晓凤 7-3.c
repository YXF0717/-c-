#include<stdio.h>
int main()
{
	int bai = 0, shi = 0, ge = 0, i = 0,j=0;
	for (i = 100; i <= 999; i++)
	{
		bai = i / 100;
		shi = i % 100 / 10;
		ge = i % 10;
		if (bai + shi + ge == 9)
		{
			j++;
			printf("%4d", i);
		}
	}
	printf("\n");
	printf("������������һ����%d��", j);
	return 0;
}