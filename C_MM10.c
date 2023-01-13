#include <stdio.h>

double round_to_d1(double x)
{   
    x=x*10.0;
    int z = (int)(x+0.5);
    x = (double)z;
    x = x / 10.0;
    return x;
}
int main()
{
    double a;
    while (scanf("%lf", &a) != EOF)
    {
        printf("%.1f\n", round_to_d1((a*9/5)+32.0));
    }

    return 0;
}