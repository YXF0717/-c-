#include<stdio.h>
int main()
{
	int a = 0, b = 0;
	printf("请输入你的出生年份：");
		scanf_s("%d", &a);
		b = a % 12;
		switch (b)
		{
		case 0:printf("你的生肖是：猴"); break;
		case 1:printf("你的生肖是：鸡"); break;
		case 2:printf("你的生肖是：狗"); break;
		case 3:printf("你的生肖是：猪"); break;
		case 4:printf("你的生肖是：鼠"); break;
		case 5:printf("你的生肖是：牛"); break;
		case 6:printf("你的生肖是：虎"); break;
		case 7:printf("你的生肖是：兔"); break;
		case 8:printf("你的生肖是：龙"); break;
		case 9:printf("你的生肖是：蛇"); break;
		case 10:printf("你的生肖是：马"); break;
		case 11:printf("你的生肖是：羊"); break;
		default:printf("输入错误！"); break;
		}
		return 0;
}