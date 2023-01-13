#include <stdio.h>
#include <ctype.h>


int main()
{
    int a;
    char hs[20];
    
    while (scanf("%d", &a) != EOF)
    {
        sprintf(hs,"%x", a);
        int i=0;
        while(hs[i]){
            putchar(toupper(hs[i]));
            i++;
        }
        putchar('\n');
    }
    return 0;
}