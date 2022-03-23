#include<stdio.h>
int main()
{
	int r, h;
	float  s, v;
	double  Π;
	Π = 3.14159;
	printf("圆柱体的底面半径：");
	scanf_s("%d", &r);
	printf("圆柱体的高：");
	scanf_s("%d",&h);
	printf("%.2f\n%.2f", s = 2 * Π *r* h +2* Π * r *r, v = Π * h * r *r );
	return 0;
}

