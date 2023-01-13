#include <stdio.h>

int main()
{
    char a;
    while (scanf("%c", &a) != EOF)
    {
        switch (a)
        {
        case 'E':
            printf("ByeBye\n");
            break;
        case 'M':
            printf("Male\n");
            break;
        case 'F':
            printf("Female\n");
            break;
        }
    }
    return 0;
}