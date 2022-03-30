#include<stdio.h>
int main()
{
	char a, b,c;
	printf("你是男生还是女生（回答a或b）？\na:男生 b:女生\n");
	scanf_s("%c", &c);
	getchar();
	fflush(stdin);
	if (c == 'a')
	{
		printf("我猜你应该很帅吧（回答a或b）？\na:那是当然啊 b:一般般\n");
		scanf_s("%c", &c);
		if (c =='a' )
			printf("哇！花见花开，车见车爆胎~原来就是形容你的！\n");
		else
			printf("你是一个谦虚又低调的帅哥哦！\n");
	}
	else
	{
		printf("我猜你一定很漂亮（回答a或b）？\na:那是当然啊 b：一般般\n");
		scanf_s("%c", &c);
		getchar();
		fflush(stdin);
		if (c == 'a')
			printf("哇！宇宙超级无敌美少女就是你！\n");
		else
			printf("你是一个低调又可爱的美女！\n");
	}
	return 0;
}