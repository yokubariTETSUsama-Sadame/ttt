#include <stdio.h>

int main()
{
    int km;
    double i;
    scanf("%d", &km);
    i = (double)km;
    i = i*1.6;
    printf("%.1f\n", i);
    return 0;
}