#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int i = 0, j = 0,a = 0,b = 0,c = 0, max = 0, min = 0, xh[62] = { 0 };
	float  p = 0, q = 0, r = 0, s = 0, t = 0;
	float sum = 0;
	srand(time(NULL));
	for (i = 0; i < 62; i++)
	{
		xh[i] = rand() % 51 + 50;
		printf("%4d", xh[i]);
		j++;
		if (j % 10 == 0)
			printf("\n");
	}
	printf("\n");
	for (i = 0; i < 62; i++)
		sum = sum + xh[i];
	printf("ƽ����Ϊ%.2f\n", sum / 62);
	printf("������ѧ�ţ�");
	scanf_s("%d", &i);
	printf("��ĳɼ�Ϊ��%d\n", xh[i - 1]);
	printf("�������ͬѧ�ǣ�");
	for (i = 0; i < 62; i++)
	{
		if (xh[i] < 60)
			printf("%3d", i+1);
	}
	printf("\n");
	max = xh[0];
	min = xh[0];
	for (i = 0; i < 62; i++)
	{
		if (max < xh[i])
		{
			max = xh[i];
			a = i;
		}
		if (min > xh[i])
		{
			min = xh[i];
			b = i;
		}
	}
	printf("��߷�Ϊ:%d�� %d��\n��ͷ�Ϊ:%d�� %d��\n", a, max, b, min);
	for (i = 0; i < 62; i++)
	{
		if (xh[i] <= 100 && xh[i] >= 90)
			p += 1;
		if (xh[i] < 90 && xh[i] >= 80)
			q += 1;
		if (xh[i] < 80 && xh[i] >= 70)
			r += 1;
		if (xh[i] < 70 && xh[i] >= 60)
			s += 1;
		if (xh[i] < 60)
			t += 1;
	}
	printf("���㣺����%.0f  �ٷֱ�:%.2f \n", p, p / 62 * 100);
	printf("���ã�����%.0f  �ٷֱ�:%.2f \n", q, q / 62 * 100);
	printf("�еȣ�����%.0f  �ٷֱ�:%.2f \n", r, r / 62 * 100);
	printf("��������%.0f  �ٷֱ�:%.2f \n", s, s / 62 * 100);
	printf("����������%.0f  �ٷֱ�:%.2f\n", t, t / 62 * 100);
	for (i = 0; i < 59; i++)
	{
		if (xh[i] > a)
		{
			a = xh[i];
			p = i;
		}
		if (xh[i + 1] > a)
		{
			a = xh[i];
			p = i;
		}
		if (xh[i + 2] > a)
		{
			a = xh[i];
			p = i;
		}
		if (xh[i] > b && xh[i] <= a && i != p)
		{
			b = xh[i];
			q = i;
		}
		if (xh[i+1] > b && xh[i+1] <= a && i != p)
		{
			b = xh[i+1];
			q = i+1;
		}
		if (xh[i+2] > b && xh[i+2] <= a && i != p)
		{
			b = xh[i+2];
			q = i+2;
		}
		if (xh[i] > c && xh[i] < b && i != q)
		{
			c = xh[i];
			r = i;
		}
		if (xh[i+1] > c && xh[i+1] < b && i != q)
		{
			c = xh[i+1];
			r = i+1;
		}
		if (xh[i+2] > c && xh[i+2] < b && i != q)
		{
			c = xh[i+2];
			r = i+2;
		}
	}
	printf("ǰ����Ϊ��%.0f��%d��  %.0f��%d��  %.0f��%d��", p+1, a, q+1, b, r+1, c);
	return 0;
}