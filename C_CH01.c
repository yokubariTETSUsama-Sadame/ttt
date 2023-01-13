#include <stdio.h>

int main()
{
    char a;
    while (scanf("%c", &a) != EOF)
    {
        switch (a)
        {
        case '1':
            printf("Person\n");
            break;
        case '2':
            printf("Fairy\n");
            break;
        case '3':
            printf("Dwarf\n");
            break;
        }
    }
    return 0;
}