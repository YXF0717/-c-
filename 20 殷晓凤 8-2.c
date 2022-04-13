#include<stdio.h>
int main()
{
	int sum = 0, pg = 0, hlg = 0, mg = 0;
	for (pg = 0; pg <= 30; pg++)
	{
		for (hlg = 0; hlg <= 30; hlg++)
		{
			
			mg = 30 - pg - hlg;
			if (pg * 3 + hlg * 6 + mg * 2 == 100 && mg >= 0)
				printf("Æ»¹û£º%d »ðÁú¹û£º%d Ã¢¹û£º%d\n", pg, hlg, mg);
		}
	}
	return 0;
}