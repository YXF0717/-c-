#include<stdio.h>
int main()
{
	char a;
	scanf_s("%c", &a);
	if ('a' <= a && a >= 'z' || 'Z' <= a && a >= 'A')
	
		printf("%c����ĸ", a);
	
	else
	
		printf("%c������ĸ", a);
	
	return 0;
}