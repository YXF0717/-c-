#include <stdio.h>
int main()
{
    int a = 0, b = 0;
    printf("��������ݣ�");
    scanf_s("%d", &a);
    printf("�������·ݣ�");
    scanf_s("%d", &b);
    switch (b)
    {
    case 1: case 3: case 5: case 7: case 8: case 10 :
    case 12:printf("%d��%d��һ����31��", a, b); break;
    case 4: case 6: case 9:
    case 11:printf("%d��%d��һ����30��", a, b); break;
    default:
    {
        if (a % 4 == 0 && a % 100 == 1 || a % 400 == 0 && a % 100 == 0)
            printf("%d��%d��һ����29",a,b);
        else
            printf("%d��%d��һ����28��",a,b);
    }
    }
    return 0;
}
