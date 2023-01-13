#include <stdio.h>

double round_to_d1(double x)
{
    x = x * 10.0;
    int z = (int)(x + 0.5);
    x = (double)z;
    x = x / 10.0;
    return x;
}
int main()
{
    double a;
    int b;
    while (scanf("%lf %d", &a, &b) != EOF)
    {
        if (b == 1)
        {
            printf("%.1f\n", round_to_d1((a - 80) * 0.7));
        }
        else
        {
            printf("%.1f\n", round_to_d1((a - 70) * 0.6));
        }
    }

    return 0;
}