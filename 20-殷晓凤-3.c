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
	printf("ºÍ=%d\n%²î=%d\n»ı=%d\nÉÌ=%.2f\nÓà=%d", he, cha, ji, shang, yu);
	return 0;

}