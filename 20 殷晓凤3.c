#include<stdio.h>
int main()
{
	int num;
	scanf_s("%d", &num);
	int bai = num / 100;
	int shi = (num / 10) % 10;
	int ge = num % 10;
	printf("%d,%d,%d,%d", bai, shi, ge, bai + shi + ge);
	return 0;
}
