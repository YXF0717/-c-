#include<stdio.h>
int main()
{
	char a, b,c;
	printf("������������Ů�����ش�a��b����\na:���� b:Ů��\n");
	scanf_s("%c", &c);
	getchar();
	fflush(stdin);
	if (c == 'a')
	{
		printf("�Ҳ���Ӧ�ú�˧�ɣ��ش�a��b����\na:���ǵ�Ȼ�� b:һ���\n");
		scanf_s("%c", &c);
		if (c =='a' )
			printf("�ۣ�������������������̥~ԭ������������ģ�\n");
		else
			printf("����һ��ǫ���ֵ͵���˧��Ŷ��\n");
	}
	else
	{
		printf("�Ҳ���һ����Ư�����ش�a��b����\na:���ǵ�Ȼ�� b��һ���\n");
		scanf_s("%c", &c);
		getchar();
		fflush(stdin);
		if (c == 'a')
			printf("�ۣ����泬���޵�����Ů�����㣡\n");
		else
			printf("����һ���͵��ֿɰ�����Ů��\n");
	}
	return 0;
}