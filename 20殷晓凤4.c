#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main()
{
	int a = 0, b = 0;
	srand(time(NULL));
	a = rand() % 100 + 1;
	printf("����������һ������");
	scanf_s("%d", &b);
	if (b > a)
		printf("���ź�����Ĵ𰸴��ڴ���\n");
	if (b == a)
		printf("��ϲ��¶���\n");
	if (b < a)
		printf("���ź�����Ĵ�С�ڴ���\n");
	printf("����������%d", a);
	return 0;
}