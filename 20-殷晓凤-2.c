#include<stdio.h>
int main()
{
	int a, b;
	float c;
	printf("ƽʱ�ɼ���");
	scanf_s("%d", &a);
	printf("��Ʒ�ɼ���");
	scanf_s("%d", &b);
	printf("�ۺϳɼ�%.1f",c = a * 0.4 + b * 0.6);
	return 0;
}