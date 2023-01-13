#include <stdio.h>

char ch[18] = "0123456789ABCDEF";

void pn(long a, long b)
{
    if (b == 0)
        return;
    int c = b % a;
    b /= a;
    pn(a, b);
    printf("%c", ch[c]);
}

int main()
{
    long a, b;
    while (scanf("%ld %ld", &a, &b) != EOF)
    {
        pn(a, b);
        printf("\n");
    }

    return 0;
}