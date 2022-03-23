#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,s, area ;
	scanf_s("%f%f%f", &a, &b, &c);
	if (a > 0 && b > 0 && c > 0 && a + b > c && a + c > b && b + c > a )
	{
		s = a/2 + b/2 +c/2;
		area = sqrt(s * (s - a) * (s - b) * (s - c));
		printf("该三角形的面积为 % .3f", area);
	}
	else
		printf("不能构成三角形。");
	
}