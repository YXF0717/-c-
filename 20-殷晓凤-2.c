#include<stdio.h>
int main()
{
	int a, b;
	float c;
	printf("平时成绩：");
	scanf_s("%d", &a);
	printf("作品成绩：");
	scanf_s("%d", &b);
	printf("综合成绩%.1f",c = a * 0.4 + b * 0.6);
	return 0;
}