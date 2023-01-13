#include <stdio.h>

int main()
{
    int a, s, m, h;
    scanf("%d", &a);
    s = a%60;
    a /=60;
    m = a%60;
    a/=60;
    h = a%24;
    a/=24;
    printf("%d days\n%d hours\n%d minutes\n%d seconds\n", a, h, m, s);
    return 0;
}