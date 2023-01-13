#include <stdio.h>

int main()
{
    double max; 
    double min;
    double curr;
    for (int i = 0; i < 10; i++)
    {
        
        scanf("%lf", &curr);
        if(i==0){
            max = curr;
            min = curr;
        }
        if(max<curr) max = curr;
        if(min>curr) min = curr;
    }
    printf("maximum:%.2f\nminimum:%.2f\n", max, min);
    
    return 0;
}