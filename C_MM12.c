#include <stdio.h>

int main()
{
    double a;
    while (scanf("%lf", &a) != EOF)
    {
        printf("%d\n", (int)(a/(1.0-30*2.54/100.0)+1)) ; // t = a + t*30*2.54/100.0
    }

    return 0;
}