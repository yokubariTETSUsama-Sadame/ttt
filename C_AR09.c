#include <stdio.h>

int main()
{
    char a[20];
    int number_max[10];
    int number_min[10];
    scanf("%s", a);
    int i = 0;
    for (int i = 0; i < 10; i++)
    {
        number_max[i] = 0;
        number_min[i] = 0;
    }
    int min_not0 = 57;
    int count = 0;
    while (a[i])
    {
        if (a[i] >= 48 && a[i] <= 57)
        {
            if ((a[i] < min_not0)&& a[i]!='0')
                min_not0 = (int)(a[i] - '0');
            count++;
            number_max[(int)(a[i] - '0')] += 1;
            number_min[(int)(a[i] - '0')] += 1;
        }
        i++;
    }
    int num = 9;
    int max = 0;

    for (int i = 0; i < count; i++)
    {
        max *= 10;
        while (number_max[num] == 0)
        {
            // printf("   -%d", num);
            num--;
        }
        // printf("\n");
        
        max += num;
        number_max[num]--;
    }

    // int min = min_not0;
    // number_min[min_not0]--;
    // num = 0;
    int min =0;
    for (int i = 0; i < count; i++)
    {
        min *= 10;
        while (number_min[num] == 0)
        {
            num++;
        }

        min += num;
        number_min[num]--;
    }
    // printf("%d %d\n", max, min);
    printf("%d\n", max - min);
    return 0;
}