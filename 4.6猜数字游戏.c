#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int a = 0, b = 0;
	srand(time(NULL));
	a = rand() % 100 + 1;
	printf("�����һ�����֣����������0-100֮��\n����0����Ϸ����\n");
	printf("������һ������");
	scanf_s("%d", &b);
	while (a != 0)
	{
		if (b > a)
		{
			printf("���ź����������ֵ���˵�\n���������:");
			scanf_s("%d", &b);
		}
		if (b < a)
		{
			printf("���ź����������ֵС��һ��\n��������룺");
			scanf_s("%d", &b);
		}
		if (b == a)
		{
			printf("��ϲ�㣬����ˣ���ȷ����%d", b);
			break;
		}
	}
	if(b==0)
	printf("���ź�����ѡ���˽�����Ϸ");
	return 0;
}