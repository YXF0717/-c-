#include<stdio.h>
int main()
{
	float t = 0, w = 0, h = 0;
	scanf_s("%f(��λΪǧ��)", &w);
	scanf_s("%f(��λΪ��)", &h);
	t = w / (h * h);
	if (t < 18)
		printf("��ָ��Ϊ��%f\n���ڵ�����", t);
	else if (t >= 18 && t < 25)
		printf("��ָ��Ϊ��%f\n������������", t);
	else if (t >= 25 && t < 27)
		printf("��ָ��Ϊ:%f\n���ڳ���", t);
	else
		printf("��ָ��Ϊ��%f\n���ڷ���", t);
	return 0;
}