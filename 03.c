#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    if (a * a + b * b <= 100 * 100)
    {
        printf("inside\n");
    }
    else
    {
        printf("outside\n");
    }
    return 0;
}