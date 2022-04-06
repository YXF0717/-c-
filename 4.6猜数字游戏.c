#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int a = 0, b = 0;
	srand(time(NULL));
	a = rand() % 100 + 1;
	printf("请你猜一个数字，这个数字在0-100之间\n输入0则游戏结束\n");
	printf("请输入一个数：");
	scanf_s("%d", &b);
	while (a != 0)
	{
		if (b > a)
		{
			printf("很遗憾，你输入的值大了点\n请继续输入:");
			scanf_s("%d", &b);
		}
		if (b < a)
		{
			printf("很遗憾，你输入的值小了一点\n请继续输入：");
			scanf_s("%d", &b);
		}
		if (b == a)
		{
			printf("恭喜你，答对了！正确答案是%d", b);
			break;
		}
	}
	if(b==0)
	printf("很遗憾，你选择了结束游戏");
	return 0;
}