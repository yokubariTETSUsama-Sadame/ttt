#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// int main()
// {
//     char a[500];
//     while (scanf(" %[^\n]", a) != EOF)
//     {
//         //scanf("", a);
//         int i = strlen(a);
//         // printf("%d",strlen(a));
//         while (i--)
//         {
//             printf("%c", a[i]);
//         }
//         printf("\n");
//     }
//     return 0;
// }
// int main()
// {
//     char a[500];
//     while (fgets(a,300,stdin))
//     {
//         //scanf("", a);
//         int i = strlen(a);
//         // printf("%d",strlen(a));
//         i--;
//         while (i--)
//         {
//             printf("%c", a[i]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

int main()
{
    int a[100];
    int head = 0;
    char space;
    while (scanf("%d%c", &a[head], &space) != EOF)
    {
        head++;
        if (space == '\n')
        {
            while (head--)
            {
                printf("%d", a[head]);
                if (head != 0)
                {
                    printf(" ");
                }
            }
            printf("\n");
            head = 0;
        }
    }
    return 0;
}