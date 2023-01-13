#include <stdio.h>

int main()
{
    int a, b, c, d, e;
    char g[10] = "DDDDDCCBB";
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    int p = a + b * 2 + c * 2 + d * 2 - e * 2;
    p = p / 5;

    if (p >= 9)
    {
        printf("A\n");
    }
    else if (p < 0)
    {
        printf("D\n");
    }
    else
    {
        printf("%c\n", g[p]);
    }

    return 0;
}