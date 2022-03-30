#include <stdio.h>
int main()
{
    int a = 0, b = 0;
    printf("请输入年份：");
    scanf_s("%d", &a);
    printf("请输入月份：");
    scanf_s("%d", &b);
    switch (b)
    {
    case 1: case 3: case 5: case 7: case 8: case 10 :
    case 12:printf("%d年%d月一共有31天", a, b); break;
    case 4: case 6: case 9:
    case 11:printf("%d年%d月一共有30天", a, b); break;
    default:
    {
        if (a % 4 == 0 && a % 100 == 1 || a % 400 == 0 && a % 100 == 0)
            printf("%d年%d月一共有29",a,b);
        else
            printf("%d年%d月一共有28天",a,b);
    }
    }
    return 0;
}
