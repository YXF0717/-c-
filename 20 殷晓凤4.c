#include<stdio.h>
#include<math.h>
int main()
{
	double s;
	s = 365 * 60 * 60 * (3.0 * pow(10, 8));
	printf("%.2e", s);
	return 0;
}