#include<stdio.h>
int main()
{
	int a,b,he,cha,ji,yu;
	float shang;
	scanf_s("%d\n%d",&a,&b);
	he = a + b;
	cha = a - b;
	ji = a * b;
	shang = (float)(a) / b;
	yu = a % b;
	printf("��=%d\n%��=%d\n��=%d\n��=%.2f\n��=%d", he, cha, ji, shang, yu);
	return 0;

}