#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    double koku, en, ma;
    double koku_sum = 0, en_sum = 0, ma_sum = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%lf %lf %lf", &koku, &en, &ma);
        koku_sum+=koku;
        en_sum += en;
        ma_sum += ma;
    }

    printf("%.1f %.1f %.1f %.1f", (koku_sum+en_sum+ma_sum)/(3*n), koku_sum/n, en_sum/n, ma_sum/n);
    

    return 0;
}