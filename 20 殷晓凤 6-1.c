#include<stdio.h>
int main()
{
	int a = 0, b = 0;
	printf("��������ĳ�����ݣ�");
		scanf_s("%d", &a);
		b = a % 12;
		switch (b)
		{
		case 0:printf("�����Ф�ǣ���"); break;
		case 1:printf("�����Ф�ǣ���"); break;
		case 2:printf("�����Ф�ǣ���"); break;
		case 3:printf("�����Ф�ǣ���"); break;
		case 4:printf("�����Ф�ǣ���"); break;
		case 5:printf("�����Ф�ǣ�ţ"); break;
		case 6:printf("�����Ф�ǣ���"); break;
		case 7:printf("�����Ф�ǣ���"); break;
		case 8:printf("�����Ф�ǣ���"); break;
		case 9:printf("�����Ф�ǣ���"); break;
		case 10:printf("�����Ф�ǣ���"); break;
		case 11:printf("�����Ф�ǣ���"); break;
		default:printf("�������"); break;
		}
		return 0;
}