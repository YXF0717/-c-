#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main()
{
	int a = 0, b = 0;
	srand(time(NULL));
	a = rand() % 100 + 1;
	printf("请输入任意一个数：");
	scanf_s("%d", &b);
	if (b > a)
		printf("很遗憾，你的答案大于此数\n");
	if (b == a)
		printf("恭喜你猜对了\n");
	if (b < a)
		printf("很遗憾，你的答案小于此数\n");
	printf("这个随机数是%d", a);
	return 0;
}