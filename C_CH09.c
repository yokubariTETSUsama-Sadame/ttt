#include <stdio.h>

int main()
{
    int n, A, F;
    scanf("%d", &n);
    while (n--)
    {
        scanf("%d", &A);
        scanf("%d", &F);
        for (int i = 0; i < F; i++)
        {
            int k = 1;
            while (k <= A)
            {
                int t = k;
                while (t--)
                {
                    printf("%d", k);
                }
                printf("\n");
                k++;
            }
            k -= 2;
            while (k >= 1)
            {
                int t = k;
                while (t--)
                {
                    printf("%d", k);
                }
                printf("\n");
                k--;
            }
            if(n!=0&&i!=F-1)
            {
                printf("\n");
            }
        }
    }
    return 0;
}