#include<stdio.h>
int main()
{
	char a;
	scanf_s("%c", &a);
	if ('a' <= a && a >= 'z' || 'Z' <= a && a >= 'A')
	
		printf("%cÊÇ×ÖÄ¸", a);
	
	else
	
		printf("%c²»ÊÇ×ÖÄ¸", a);
	
	return 0;
}