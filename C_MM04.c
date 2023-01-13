#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d+%d=%d\n", a, b, a + b);
    printf("%d*%d=%d\n", a, b, a * b);
    printf("%d-%d=%d\n", a, b, a - b);
    // becase a%b should be positive
    // a%b => a = b * q + r
    if (a < 0)
    {
        if (b < 0)
        {
            printf("%d/%d=%d...%d\n", a, b, a / b - 1 + 1, a % b - b);
        }
        else
        {
            printf("%d/%d=%d...%d\n", a, b, a / b - 1, a % b + b);
        }
    }
    else
    {
        printf("%d/%d=%d...%d\n", a, b, a / b, a % b);
    }

    return 0;
}