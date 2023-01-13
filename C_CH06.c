#include <stdio.h>

int main()
{
    char a[100];
    while (scanf("%s", &a) != EOF)
    {
        int count = 0;
        char t = 'i'; // int i float f char c str s
        int i = 0;
        while (a[i])
        {
            if ((a[i] == '.') && (t = 'f'))
                t = 's';
            if ((a[i] == '.') && (t = 'i'))
                t = 'f';
            if ((a[i] != '0') && (a[i] != '1') && (a[i] != '2') && (a[i] != '3') && (a[i] != '4') && (a[i] != '5') && (a[i] != '6') && (a[i] != '7') && (a[i] != '8') && (a[i] != '9') && (a[i] != '.'))
                t = 's';
            i++;
        }
        if ((i == 1) && ((t == 'f') || (t == 's')))
            t = 'c';
        switch (t)
        {
        case 'i':
            printf("int\n");
            break;
        case 'f':
            printf("float\n");
            break;
        case 'c':
            printf("char\n");
            break;
        case 's':
            printf("string\n");
            break;
        }
    }
    return 0;
}