#include<stdio.h>
int main()
{
	char a,b,c,d,e,f,g;
	scanf_s("%c",&a);
	b = a + 1;
	c = a + 2;
	d = a + 3;
	e = a - 31;
	f = a - 30;
	g = a - 29;
	printf("其前后连续三个字母为%c%c%c\n", b,c,d);
	printf("他们对应的大写字母是%c%c%c", e,f,g);
	return 0;

}