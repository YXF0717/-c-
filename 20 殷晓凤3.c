#include<stdio.h>
int main()
{
	float t = 0, w = 0, h = 0;
	scanf_s("%f(单位为千克)", &w);
	scanf_s("%f(单位为米)", &h);
	t = w / (h * h);
	if (t < 18)
		printf("体指数为：%f\n属于低体重", t);
	else if (t >= 18 && t < 25)
		printf("体指数为：%f\n属于正常体重", t);
	else if (t >= 25 && t < 27)
		printf("体指数为:%f\n属于超重", t);
	else
		printf("体指数为：%f\n属于肥胖", t);
	return 0;
}