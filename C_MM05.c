#include <stdio.h>

int main()
{
    double a;
    while (scanf("%lf", &a) != EOF)
    {
        printf("%.1f\n", ((double)((int)(a*a*100.0)+5))/100.0 );
    }

    return 0;
}