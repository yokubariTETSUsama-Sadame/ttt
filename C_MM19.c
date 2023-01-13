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
    int a;
    while (scanf("%d", &a) != EOF)
    {
        if(a<=800){
            printf("%.1f\n", round_to_d1(((double)a)*0.9));
        }else{
            if(a<1500){
                printf("%.1f\n", round_to_d1(((double)a)*0.9*0.9));
            }else{
                printf("%.1f\n", round_to_d1(((double)a)*0.9*0.79));
            }
        }
    }

    return 0;
}