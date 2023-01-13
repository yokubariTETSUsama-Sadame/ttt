#include <stdio.h>

int main()
{
    int a;
    int s = 0;
    for (int i = 0; i < 6; i++)
    {
        scanf("%d", &a);
        s += a * a * a;
    }
    printf("%d\n", s);
}